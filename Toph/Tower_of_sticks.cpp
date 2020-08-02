#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll a,b;
int main(){
	while(true){
		cin>>a>>b;
		if(a==b){
			break;
		}
		else{
			if(a<b){
				swap(a,b);
			}
			cout<<((a-b)%2?"impossible":to_string((a-b)/2))<<"\n";
		}
	}
}
