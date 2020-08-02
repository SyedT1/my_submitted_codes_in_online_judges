#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll yr;
void leap_yr(){
	cin>>yr;
	cout<<(yr%4==0 && yr%400!=0?"Yes":"No")<<"\n";
}
int main(){
	leap_yr();
}
