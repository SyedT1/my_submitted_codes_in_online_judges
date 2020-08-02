#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll l,n;
string k;
void con(){ 
  cin>>l;
  stringstream findpi;
  findpi << fixed << std::setprecision(20) << M_PI;
  k = findpi.str();
  cout<<k[1+l]<<"\n";
}
int main(){
	cin>>n;
	while(n--){
		con();
	}
}
