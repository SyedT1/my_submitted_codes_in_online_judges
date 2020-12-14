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
	//TakeIO();
	ll AD[int('E')] = {}, lgt; cin >> lgt; string s; cin >> s; for (char c : s) {
		AD[int(c)]++;
	}
	cout << (AD[int('A')] == AD[int('D')] ? "Friendship" : (AD[int('A')] > AD[int('D')] ? "Anton" : "Danik")) << '\n';
	return 0;
}
