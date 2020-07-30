#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll t;
string a,b;
void voc(){
	cin>>a>>b;
	for(ll i = 0,aplsb = ll(a.size()) + ll(b.size()),p = 0,q = 0;i<aplsb;i++){
	  if((i+1)&1){
	  	 cout<<(p<ll(a.size())?a[p++]:b[q++]);
	  }else{
	  	 cout<<(q<ll(b.size())?b[q++]:a[p++]);
	  }
	}
	cout<<'\n';
}

int main(){
	cin>>t;
	while(t--){
		voc();
	}
}
