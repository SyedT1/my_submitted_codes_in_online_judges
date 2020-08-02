#include<bits/stdc++.h>
using namespace std;
using lo = unsigned long long int;
lo n,sm=0;
void ssq()
{
	cin>>n;
	for(lo i = 1;i<=n;i++){
		sm+=(i*i);
	}
	cout<<sm<<"\n";
}
int main()
{
	ssq();
}
