#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll a,b;
void TTR(){
	cin>>a>>b;
	if(a>b){
		swap(a,b);
	}
	if(a&1){
		a--;
	}
	if(b&1){
		b++;
	}
	cout<<(b-a)/2<<"\n";
}
int main(){
	TTR();
}
