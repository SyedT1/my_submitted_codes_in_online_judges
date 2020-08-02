#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string k;
ll adnm[10]={},a,nm;
void ICPC(){
	cin>>k;
	for(char c:k){
		adnm[int(c-'0')]++;
	}
	a = 0,nm = adnm[0];
	for(ll i = 0;i<10;i++){
		if(nm<adnm[i]){
			nm=adnm[i];
			a = i;
		}
	}
	cout<<a<<"\n";
}
int main(){
	ICPC();
}
