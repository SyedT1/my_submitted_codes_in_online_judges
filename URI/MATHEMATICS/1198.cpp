#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ll a,b;
    while(cin>>a>>b){
      cout<<(b-a>=0?b-a:(-1)*(b-a))<<"\n";
    }
    return 0;
}
