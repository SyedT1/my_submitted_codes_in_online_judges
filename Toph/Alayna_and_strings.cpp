#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll l=0,h=0;
string k;
void con(){
	cin>>k;
	for(char c:k){
		if(isalpha(c)){
			(isupper(c)?h:l)++;
		}
	}
	cout<<h<<" "<<l<<"\n";
}
int main(){
	con();
}
