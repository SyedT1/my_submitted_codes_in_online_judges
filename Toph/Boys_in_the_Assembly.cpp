#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
void rotate(){
   ll N,R;
   cin>>N>>R;
   ll arr[N];
   for(ll i = 0;i<N;i++){
    cin>>arr[i];
   }
   cout<<arr[R%N]<<" "<<arr[(N-1+R)%N]<<"\n";
}

int main(){
   rotate();
}
