#include<bits/stdc++.h>
using namespace std;
using lo = unsigned long long int;
lo n,k,mx=0;
void mn()
{
	cin>>n;
	while(n--){
		cin>>k,mx=max(mx,k);
	}
	cout<<mx<<"\n";
}
int main()
{
	mn();
}
