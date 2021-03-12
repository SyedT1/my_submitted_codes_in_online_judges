#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int main() {
	int n, h, s = 0, l; cin >> n >> h; for (int i = 0; i < n; i++) {
		cin >> l, s += 1+ (l > h);
	}
	cout << s << '\n';
	return 0;
}
