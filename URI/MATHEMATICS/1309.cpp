#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string form(string a,string b)
{
	string mon;
	ll as = a.size();
	if(as<=3){
		mon+=a;
		mon+=".";
		if(b.size()==1){
		   mon+="0";
		}
		mon+=b;
		return "$"+mon;
	}
	ll qo = 1;
	for(ll i = as-1;i>=0;i--){
		mon = a[i] + mon;
		if(i==0){
			break;
		}
		if(qo==3){
			mon= "," + mon;
			qo=0;
		}
		qo++;
	}
	mon+=".";
	if(b.size()==1){
		mon+="0";
	}
	mon+=b;
	return "$"+mon;
}
int main()
{  
    ll n,k;
	while(cin>>n>>k){
		cout<<form(to_string(n),to_string(k))<<"\n";
	}
	return 0;
}
