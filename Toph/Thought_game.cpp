#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,x,y;
void avg(){
	cin>>n;
	while(n--){
		cin>>x>>y;
		cout<<(((x+y)/2)&1?"Oops!":"Sadia will be happy.")<<"\n";
	}
}
int main(){
	avg();
}
