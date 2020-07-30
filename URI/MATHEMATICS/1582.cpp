#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
bool bop(ll a,ll b,ll c)
{
	vector<ll>vo(3);
	vo[0]=a;
	vo[1]=b;
	vo[2]=c;
	sort(vo.begin(),vo.end());
	if((vo[0]*vo[0])+(vo[1]*vo[1])==(vo[2]*vo[2])){
		return true;
	}
	else{
		return false;
	}
}
string py_trip(ll a,ll b,ll c)
{
	if(bop(a,b,c)){
		if(__gcd(a,(__gcd(b,c)))==1){
			return "tripla pitagorica primitiva";
		}
		else{
			return "tripla pitagorica";
		}
	}
	else{
		return "tripla";
	}
}
int main()
{
	ll x,y,z;
	while(cin>>x>>y>>z){
		cout<<py_trip(x,y,z)<<"\n";
	}
}
