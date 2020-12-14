#include "iostream"
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
//	TakeIO();
	int n, h, wdh = 0, inp; cin >> n >> h; for (int i = 0; i < n; i++) {
		cin >> inp, wdh += (inp <= h ? 1 : 2);
	}
	cout << wdh << '\n';
	return 0;
}
