#include<iostream>
using namespace std;
int main() {
	int n,p,unt = 0,sm = 0;cin>>n;while(n--){
      cin>>p;
      if(p>0){
      	sm+=p;
      }else{
      	if(sm==0){
            unt++;
      	}else{
      		if(sm>p){
      			sm += p;
      			p = 0;
      		}else{
      			p += sm;
      			sm = 0;
      		}
      	}
      }
	}
    cout<<unt<<'\n';
    return 0;
}
