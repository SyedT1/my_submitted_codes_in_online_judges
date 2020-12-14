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
	ll l, b, y = 0; cin >> l >> b; for (; l <= b; l *= 3, b *= 2, y++ ) {}
	cout << y << '\n';
	return 0;
}
