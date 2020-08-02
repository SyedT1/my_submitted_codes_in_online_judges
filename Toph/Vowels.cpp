#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n = 0;
string k;
void vowels(){
	cin>>k;
	set<char>co{'a','e','i','o','u'};
	for(char c:k){
		n+=(co.count(tolower(c))?1:0);
	}
	cout<<n<<"\n";
}
int main(){
	vowels();
}
