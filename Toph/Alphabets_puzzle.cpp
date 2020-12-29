#include<iostream>
#include<set>
#include<stdio.h>
using namespace std;
int main(){
 //  freopen("input.txt","r",stdin);
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   set<char>ko;
   string s;cin>>s;for(char c:s){ko.insert(c);}
   cout<<26-ko.size()<<'\n';
   return 0;
}A
