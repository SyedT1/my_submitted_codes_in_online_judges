#include<bits/stdc++.h>
#define pp pop_back
using namespace std;
using ll = long long int;
string k;
int main(){
	cin>>k;
	while(k[int(k.size())-1]=='0'){
		k.pp();
	}
	cout<<k<<"\n"<<"Stay at Home\n";
	return 0;
}
