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
	int n, lk = 0; cin >> n; string s; cin >> s; for (int i = 0; i < n; i++) {
		while (s[i] == s[i + 1] && i < n - 1) {
			++i, ++lk;
		}
	}
	cout << lk << '\n';
	return 0;
}
