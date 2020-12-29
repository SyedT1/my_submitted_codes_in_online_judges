#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
using ll = long long int;
void sieve(vector<char> &p){
   p[0]=p[1]=false;
   for(int i = 2;(ll)i*i<=10001;i++){
      if(p[i]){
         for(int j = (ll)i*i;j<=10001;j+=i){
            p[j]=false;
         }
      }
   }
}
int main(){
   //freopen("input.txt","r",stdin);
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   vector<char>lop(10001,true);
   sieve(lop);
   int n;cin>>n;while(n--){
      bool unf = true;
      int l,r;cin>>l>>r;
      for(int i = r;i>=l;i--){
         if(lop[i]){
            unf = false;
            cout<<i<<'\n';
            break;
         }
      }
      if(unf){
          cout<<-1<<'\n';
      }
   }
} 
