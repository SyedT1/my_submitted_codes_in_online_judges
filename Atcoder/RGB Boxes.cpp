#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
#include<cmath>
#include<algorithm>
#define nline '\n'
using namespace std;
using ll = long long int;
void focl() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
void solve() {
	ll possibilities = 0;
	ll R, G, B, N; cin >> R >> G >> B >> N;
	for (ll i = 0; i <= N; i++) {
		for (ll j = 0; R * i + G * j <= N; j++) {
			ll left = 0, right = N;
			while (left <= right) {
				ll middle = left + (right - left) / 2;
				ll hl = R * i + G * j + B * middle;
				if (hl == N) {
					possibilities++;
					break;
				} else if (hl < N) {
					left = middle + 1;
				} else {
					right = middle - 1;
				}

			}
		}
	}
	cout << possibilities << nline;
}
int main() {
	focl();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}