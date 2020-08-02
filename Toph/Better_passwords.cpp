#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string k,ki;
void pass_(){
	cin>>k;
	k[0]=toupper(k[0]);
	for(ll i  = 0;i<k.size();i++){
		if(k[i]=='o'){
			ki+='(';
			ki+=')';
			continue;
		}
		ki+=(k[i]=='s'?'$':(k[i]=='i'?'!':k[i]));
	}
	ki+='.';
	cout<<ki<<"\n";
}
int main(){
	pass_();
}
