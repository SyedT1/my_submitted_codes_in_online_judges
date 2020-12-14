#include "iostream"
#include "algorithm"
#include "cmath"
#include "string"
#include "vector"
#include "queue"
#include "set"
using namespace std;
using ll = long long int;
void TakeIO() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int main() {
	//TakeIO();
	set<string>lo;
	int n, dis = 0; cin >> n; vector<string>vo(n); for (string &s : vo) {
		cin >> s;
	}
	for (int i = 0; i < n; i++) {
		while (vo[i] == vo[i + 1] && i < n - 1) {
			++i;
		}
		++dis;
	}
	cout << dis << '\n';
	return 0;
}
