#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n;
string k;
void cypher(){
	cin>>n;
	cin.ignore();
	getline(cin,k);
	for(char &c:k){
		c = (c==' '?c:(c-n<int('a')?char('z'-(n-(c-'a'))+1):char(c-n)));
	}
	cout<<k<<"\n";
}
int main(){
	cypher();
}
