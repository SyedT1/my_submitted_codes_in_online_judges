#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n;
void Weather()
{
	cin>>n;
	cout<<(n<=30?"Good weather.":(n>30 && n<70?"\"Confusing weather.\"":"Bad weather."))<<"\n";
}
int main()
{
	Weather();
}
