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
	int low = 0, hig = 0; string s; cin >> s; for (char c : s) {
		(islower(c) ? low : hig)++;
	}
	for (char c : s) {
		cout << (low == hig || low > hig ? char(tolower(c)) : char(toupper(c)));
	}
	cout << '\n';
	return 0;
}
