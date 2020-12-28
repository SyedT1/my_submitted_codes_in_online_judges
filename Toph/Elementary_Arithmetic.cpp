/* Something to do with concatenation of string(pf > pb) increases time complexity */
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
using ll = long long int;
void bigint(string t,string s){
	  int ts = t.length(),ss = s.length();
	  if(ts!=ss)(ts>ss?s:t) = string(abs(ts-ss),'0')+(ts>ss?s:t);
	  string sum;
	  ts = max(ts,ss);
	  for(int i = ts-1,car = 0,sto = 0;i>=0;i--){
	    sto =(t[i]-'0')+(s[i]-'0')+car;
	    sum += to_string(sto%10);
	    car = sto/10;
	    if(car && !i) {sum += '1';ts++;}
	  }
	  for(int n = ts-1;n>=0;n--)cout<<sum[n];
	  cout<<'\n';
}
int main(){
	 //freopen("input.txt","r",stdin);
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	 string x,y;
	 cin>>x>>y;
	 bigint(x,y);
	 return 0;
}
