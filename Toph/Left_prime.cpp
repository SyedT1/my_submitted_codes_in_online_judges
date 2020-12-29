#include<iostream>
#include<string>
#include<vector>
#include<stdio.h>
using namespace std;
void see(vector<char>&l,vector<long long int>&plot){
   l[0]=l[1]=false;
   for(long long int i = 2,p = 0;(long long int)i<10000001;i++){
     if(l[i]){
       plot[i] = ++p;
       for(long long int j = (long long int)i*i;j<10000001;j+=i){
         l[j]=false;
       }
     }else{
       plot[i]= p;
     }
   }
}
int main(){
   //freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   vector<char>lop(10000001,true);
   vector<long long int>plot(10000001,0);
   see(lop,plot);
   long long int n;cin>>n;
   for(long long int i = 0,input;i<n;i++){
      cin>>input;
      cout<<plot[input-1]<<'\n';
   }
   return 0;
}
