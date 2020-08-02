#include<bits/stdc++.h>
using namespace std;
using lo = unsigned long long int;
lo n,k;
void TRI(){
	cin>>k;
	cout<<(k*(k+1)*((2*k)+1))/6<<"\n";
}
int main(){
	cin>>n;
	while(n--){
		TRI();
	}
}
