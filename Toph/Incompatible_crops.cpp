#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll r,c,spot=0;
void incomp_crops(){
	cin>>r>>c;
	char co[r+2][c+2];
	memset(co,'0',sizeof(co[0][0])*(r+2)*(c+2));
	for(ll i = 1;i<r+1;i++){
		for(ll j = 1;j<c+1;j++){
			cin>>co[i][j];
		}
	}
	//Analyze
	for(ll i = 0;i<r+2;i++){
		for(ll j = 0;j<c+2;j++){
			if(co[i][j]=='.'){
				spot+=((!(co[i][j-1]=='*'||co[i][j+1]=='*'||co[i+1][j]=='*'||co[i-1][j]=='*'))?1:0);
			}
		}
	}
	cout<<spot<<"\n";
}
int main(){
	incomp_crops();
}
