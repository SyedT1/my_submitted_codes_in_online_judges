#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll r,c;
void mines(){
	cin>>r>>c;
	char co[r+2][c+2];
	memset(co,'.',sizeof(co[0][0])*(r+2)*(c+2));
	for(ll i = 1;i<r+1;i++){
		for(ll j = 1;j<c+1;j++){
			cin>>co[i][j];
		}
	}
	//Analyze
	for(ll i = 1;i<r+1;i++){
		for(ll j = 1;j<c+1;j++){
		   if(co[i][j]=='.'){
		   	ll bmb = 0;
		   	  for(ll k = i-1;k<=i+1;k++){
		   	  	 for(ll l = j-1;l<=j+1;l++){
		   	  	 	if(co[k][l]=='*'){
		   	  	 		bmb++;
		   	  	 	}
		   	  	 }
		   	  }
		   	  co[i][j]=(bmb?char('0'+bmb):'.');
		   }
		}
	}
	//Print result(Moza)
	for(ll i = 1;i<r+1;i++){
		for(ll j = 1;j<c+1;j++){
			cout<<co[i][j];
		}
		cout<<"\n";
	}
}
int main(){
	mines();
}
