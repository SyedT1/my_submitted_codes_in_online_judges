#include<bits/stdc++.h>
#define sp(a) fixed<<setprecision(a)
using namespace std;
using ll = long long int;
int n,k,y = 0;
void running_avg(){
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>k;
		y += k;
		cout<<sp(y%i?10:0)<<y/double(i)<<"\n";
	}
}
int main(){
	running_avg();
}
