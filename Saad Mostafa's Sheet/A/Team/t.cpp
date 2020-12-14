#include "iostream"
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
	ll n, apv = 0; cin >> n; while (n--) {
		ll tem[4] = {}; for (int i = 1; i <= 3; i++) {
			cin >> tem[i];
			tem[i] = tem[i] + tem[i - 1];
		}
		apv += (tem[3] >= 2 ? 1 : 0);
	}
	cout << apv << '\n';
	return 0;
}
