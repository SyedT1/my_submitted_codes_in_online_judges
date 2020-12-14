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
	set<char>dis;
	string a; cin >> a; for (char c : a) {
		dis.insert(c);
	}
	cout << (int(dis.size()) % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") << '\n';
	return 0;
}
