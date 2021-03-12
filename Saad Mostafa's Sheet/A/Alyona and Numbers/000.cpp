#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
using ll = long long int;
int main(){
   
    ll n,m;cin>>n>>m;
    if(n>m){
        swap(n,m);
    }
    ll total = 0;
    for(ll i = 1;i<=n;i++){
        ll left = 5*((i/5) + (i%5!=0)),right = 5*((m+i)/5);
        total+=((right-left)/5)+(i%5!=0); 
    }
    cout<<total<<'\n';
    return 0;
}
