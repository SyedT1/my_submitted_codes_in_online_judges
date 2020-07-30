#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using lu = unsigned long long int;
string ko(lu n)
{
	lu p = 1;
	for(lu i = 1;i<=n;i++){
		p*=2;
	}
	return to_string(p/12000)+" kg";
}
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
string bigint(string t,string s)
{
  string sum;
  ll i = s.size()-1,sto=0;
  while(i!=-1)
  {
    sto =(t[i]-'0')+(s[i]-'0')+sto;
    sum = to_string(sto%10) + sum;
    sto = sto/10;
    if(sto && (i==0))
     sum = "1"+ sum;
    i--;
  }
  return sum;
}
string bigO(ll x)
{
	string y = "1537228672809129";
	return y+" kg";
}
int main()
{
	 lu n,k;
	 cin>>n;
	 while(n--){
	 	cin>>k;
	 	cout<<(k<64?ko(k):bigO(k))<<"\n";
	 }
}
