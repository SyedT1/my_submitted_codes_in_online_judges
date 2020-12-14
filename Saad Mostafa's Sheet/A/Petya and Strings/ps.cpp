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
int Design(string x, string y) {
	for (int i = 0; i < x.length(); i++) {
		if (tolower(x[i]) < tolower(y[i])) {
			return -1;
		} else if (tolower(x[i]) > tolower(y[i])) {
			return 1;
		}
	}
	return 0;
}
int main() {
	//TakeIO();
	string a, b; cin >> a >> b;
	cout << Design(a, b) << '\n';
	return 0;
}
