/*
 Author
 Syed_Tahsin
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll ln;
bool P(ll x)
{
	for(ll i = 2;i*i<=x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return x==1?0:1;
}
void ChkP()
{
	cin>>ln;
	cout<<(P(ln)?"Yes":"No")<<"\n";
}
int main()
{
	//Naive()
    ChkP();
}
