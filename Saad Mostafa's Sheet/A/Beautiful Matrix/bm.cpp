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
	ll pol[5][5] = {}, row = 0, col = 0; for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> pol[i][j]; if (pol[i][j]) {
				row = i, col = j;
			}
		}
	}
	cout << abs(2 - row) + abs(2 - col) << '\n';
	return 0;
}
