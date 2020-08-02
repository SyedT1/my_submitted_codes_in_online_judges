olution.cpp 305B
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,bkt,po=0,k;
bool fal = true;
void ifsorted(){
	cin>>n;
	while(n--){
		cin>>k;
		if(++po<2){
			bkt = k;
			continue;
		}
		if(k<bkt){
			fal = false;
		}
		bkt = k;
	}
	cout<<(fal?"Yes":"No")<<"\n";
}
int main(){
	ifsorted();
}
