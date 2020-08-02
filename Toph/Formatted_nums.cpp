#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n;
string form(string x){
	string xf;
	for(ll s = x.size()-1,i=1;s>=0;s--,i++){
		xf = x[s]+xf;
		if(i%3==0 && s!=0){
			xf = ","+xf;
		}
	} 
	return xf;
}
void Format_num(){
	cin>>n;
	cout<<(n<1000?to_string(n):form(to_string(n)))<<"\n";
}

//Main Function
int main(){
	Format_num();
}
