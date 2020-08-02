#include<bits/stdc++.h>
using namespace std;
using lo = unsigned long long int;
lo a,b;
void cau(lo a,lo b)
{
	if(b<a){
		swap(a,b);
	}
	cout<<"Sum of "<<a<<" to "<<b<<" is -> ";
	cout<<((b*(b+1))/2)-(((a-1)*a)/2)<<";\n";
}
int main(){
	while(cin>>a>>b){
		cau(a,b);
	}
}
