#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string k;
void line_er(){
	getline(cin,k);
	Erase:
	  for(ll i = 0;i<k.size();i++){
	  	if(k[i]==' '){
	  		k.erase(k.begin()+i);
	  		if(i<k.size()-1){
	  			goto Erase;
	  		}
	  	}
	  }
	cout<<k<<"\n";
}
int main(){
	line_er();
}
