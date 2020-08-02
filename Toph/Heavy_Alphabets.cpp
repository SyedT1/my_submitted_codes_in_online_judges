solution.cpp 437B
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n;
string k;
void alph()
{
	cin>>k;
    ChkAgain:
	for(ll i = 0;i<k.size()-1;i++){
	   if(tolower(k[i])==tolower(k[i+1]) && k[i]!='#'){
	   	 ll p = i+1;
	   	 while(tolower(k[i])==tolower(k[p])){
	   	 	k[p++]='#';
	   	 }
	   	 if(i<k.size()-1){
	   	 	goto ChkAgain;
	   	 }
	   }
	}
	cout<<k<<"\n";
}
int main()
{
   cin>>n;
   while(n--){
   	 alph();
   }
}
