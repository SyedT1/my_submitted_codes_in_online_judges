#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll t;
string x;
int main() {

	while (getline(cin, x)) {
		bool make_big = true;
		for (char c : x) {
			if (isalpha(c)) {
				if (make_big) {
					cout << char(toupper(c));
				} else {
					cout << char(tolower(c));
				}
				make_big = !make_big;
			} else {
				cout << c;
			}
		}
		cout << '\n';
	}
}
