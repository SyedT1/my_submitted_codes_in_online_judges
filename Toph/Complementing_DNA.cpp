#include<bits/stdc++.h>
using namespace std;

int main() {
	string k;
	int n;
	cin>>n;
	while(n--){	
		cin>>k;
		reverse(k.begin(),k.end());
		for(char c:k){
			cout<<(c=='A'?'T':(c=='T'?'A':(c=='C'?'G':'C')));
		}
		cout<<"\n";
	}
	return 0;
}
