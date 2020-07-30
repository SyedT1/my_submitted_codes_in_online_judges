#include<bits/stdc++.h>
#include<cstdlib>
#define ll long long int
using namespace std;
string s(string m,string n)
{
 if(m.size()<n.size())
 {
   string k(n.size()-m.size(),'0');
   m = k + m;
   return m;
 }
 else
 {
   string k(m.size()-n.size(),'0');
   n = k + n;
   return n;
 }
}
string bo(ll x)
{
	if(x==0){
		return "No carry operation.";
	}
	else{
		return to_string(x)+(x==1?" carry operation.":" carry operations.");
	}
}
ll bigint(string t,string s)
{
  string sum;
  ll i = s.size()-1,sto=0,crry=0;
  while(i!=-1)
  {
    sto =(t[i]-'0')+(s[i]-'0')+sto;
    sum = to_string(sto%10) + sum;
    crry+=(sto>=10?1:0);
    sto = sto/10;
    if(sto && (i==0))
     sum = "1"+ sum;
    i--;
  }
  return crry;
}
int main()
{
 while(true){
 	string x,y;
    cin>>x>>y;
    if(x=="0" && y=="0"){
    	break;
    }
    cout<<bo((x.size()!=y.size())?bigint(s(x,y),x.size()>y.size()?x:y):bigint(x,y))<<"\n";
 }
 return 0;
}
