#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll k,a[2][2]={},b[2][2]={},rs[2][2]={};
void mat_multiply(){
	for(auto &r:a){
		for(auto &c:r){
			cin>>c;
		}
	}
	for(auto &r:b){
		for(auto &c:r){
			cin>>c;
		}
	}
	memset(rs,0,sizeof(rs[0][0]*2*2));
	for(ll i = 0;i<2;i++){
		for(ll j = 0;j<2;j++){
			for(k = 0;k<2;k++){
				rs[i][j]+=(a[i][k]*b[k][j]);
			}
		}
	}
	for(ll i = 0;i<2;i++){
		for(ll j = 0;j<2;j++){
			cout<<rs[i][j]<<(j==1?"\n":" ");
		}
	}
}
int main(){
	mat_multiply();
}
