//n.cpp 255B
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,ar[140]={};
void NIKo()
{
	cin>>n;
	string k;
	cin>>k;
	for(char c:k){
		ar[int(c)]++;
	}
	cout<<min(ar[int('N')],min(ar[int('S')],ar[int('U')]))<<"\n";
}
int main()
{
	NIKo();
}
