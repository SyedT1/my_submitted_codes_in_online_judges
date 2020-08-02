#include<bits/stdc++.h>
using namespace std;
using lo = unsigned long long int;
lo n;
int main()
{
	cin>>n;
	n+=(n&1?1:0);
	cout<<n/2<<"\n";
}
