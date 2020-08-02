#include<bits/stdc++.h>
#define pb push_back
#define pp pop_back
using namespace std;
using ll = long long int;
double n;
string bar(ll n){
	string pls(n,'+'),dot(10-n,'.');
	return pls+dot;
}
void ascii_bar(){
	cin>>n;
	cout<<"["<<bar((ll)n/10)<<"] "<<floor(n)<<"%\n";
}

int main(){
	ascii_bar();
}
