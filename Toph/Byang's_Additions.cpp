#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string a,b;
string si(string ai,string bi){
	if(ai.size()<bi.size()){
		string k(bi.size()-ai.size(),'0');
		k = k+ai;
		return k;
	}
	else{
		string k(ai.size()-bi.size(),'0');
		k = k+bi;
		return k;
	}
}
bool car(string x,string y){
	if(x.size()!=y.size()){
		x=si(x,y);
		y=si(x,y);
	}
	for(ll i  = x.size()-1,ko=0;i>=0;i--){
		ko =((x[i]-'0')+(y[i]-'0'))+ko;
		ko /= 10;
		if(ko>0){
			return true;
		}
	}
	return false;
}
void carry_or_not(){
	cin>>a>>b;
	cout<<(car(a,b)?"Yes":"No")<<"\n";
}
int main(){
	carry_or_not();
}
