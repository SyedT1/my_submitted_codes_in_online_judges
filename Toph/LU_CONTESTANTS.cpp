#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
using ll = long long int;
ll n,k,po;
string sto,hr;
void TROOP(ll kx){
    cin>>k;
    pair<ll,string>pi;
    pi.F = 0;
  	for(ll i = 1;i<=k;i++){
      cin>>sto>>po;
      if(pi.F<po){
      	pi.F = po;
      	pi.S = sto;
      }
 	}
    cout<<"Case "<<kx<<": "<<pi.S<<" is "<<(pi.F>=1600?"Expert!.":(pi.F>=1400?"Specialist!.":(pi.F>=1200?"Pupil!.":"Newbie!.")))<<"\n";
}
int main(){
	cin>>n;
    for(ll i = 1;i<=n;i++){
    	TROOP(i);
    }
}
