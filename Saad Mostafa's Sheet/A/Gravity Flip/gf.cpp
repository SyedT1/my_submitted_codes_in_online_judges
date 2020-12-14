#include "iostream"
#include "algorithm"
#include "cmath"
#include "string"
#include "vector"
#include "queue"
using namespace std;
using ll = long long int;
void TakeIO() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int main() {
	//TakeIO();
	int n; cin >> n; vector<ll>vo(n); for (ll &i : vo) {
		cin >> i;
	}
	sort(vo.begin(), vo.end());
	for (int i : vo) cout << i << ' ';
	return 0;
}
