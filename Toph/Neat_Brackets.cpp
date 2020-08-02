//tion.cpp 363B
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string k;
void neat_brckts(){
	cin>>k;
	FindB:
	for(ll i = 0;i<k.size()-1;i++){
		if(k[i]=='(' && k[i+1]==')'){
			if(k.size()==2){
				cout<<"Yes\n";
				return;
			}
			k.erase(k.begin()+i);
			k.erase(k.begin()+i);
		    goto FindB;
		}
	}
	cout<<"No\n";
}
int main(){
	neat_brckts();
}
