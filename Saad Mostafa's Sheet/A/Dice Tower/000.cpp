#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
int main(){
   bool lo = true;
   int n,x,l,r;cin>>n>>x;
   int u = x,d = 7-x;
   for(int i = 1;i<=n;i++){
       cin>>l>>r;
       if(l==u || l==d || r==u || r==d){
          lo = false;
       }
   }
   cout<<(lo?"YES":"NO")<<'\n';
   return 0;
}
