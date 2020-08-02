#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n;
string k;
void scored(){
	cin>>n;
	while(n--){
		cin>>k;
		ll bls = 0;
		for(char c:k){
			if(isdigit(c)||c=='O'){
				bls++;
			}
		}
		if(bls/6>=1){
		   cout<<bls/6<<(bls/6>1?" OVERS":" OVER");
		   if(bls%6){
		     cout<<" ";
		   }
		}
		if(bls%6){
		   cout<<bls%6<<(bls%6>1?" BALLS":" BALL");
		}
		cout<<"\n";
	}
}
int main(){
	scored();
}
