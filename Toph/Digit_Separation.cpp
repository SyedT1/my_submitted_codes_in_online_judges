#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string k;
void digsum(string x){
	ll sm = 0;
	for(char c:x){
		sm+=int(c-'0');
	}
	cout<<sm<<"\n";
}
int main(){
	while(cin>>k){
		digsum(k);
	}
}
