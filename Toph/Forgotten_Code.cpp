#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Sieve 1
void sieve(vector<char> &lop){
   lop[0]=lop[1]=false;
   for(int i = 2;i<9877;i++){
     if(lop[i]){
      for(int j = (long long int)i*i;j<9877;j+=i){
        lop[j]=false;
      }
     }
   }
}
int main(){
  // freopen("input.txt","r",stdin);
   vector<char>lop(9877,true);
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   sieve(lop);
   string pek;
   for(int i = 0,pi = 0;i<4;i++){
     string k;
     getline(cin,k);
     for(char c:k){
      pi += (!isspace(c)?1:0);
      if(c=='*'){
           pek+=to_string(pi%10);
      }
     }
   }
   sort(pek.begin(),pek.end());
   if(lop[stoi(pek)] && pek[0]!='0'){
      cout<<pek<<'\n';
      return 0;
   }
   while(next_permutation(pek.begin(),pek.end())){
      if(lop[stoi(pek)] && pek[0]!='0'){
        cout<<pek<<'\n';
        return 0;
      }
   }
   cout<<":-("<<'\n';
   return 0;
}
