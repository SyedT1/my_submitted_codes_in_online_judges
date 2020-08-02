#include<bits/stdc++.h>
#define all(b) (b).begin(),(b).end()
using namespace std;
string x,y;
void anagram(){
	cin>>x>>y;
	sort(all(x));
	sort(all(y));
	cout<<(x!=y?"No":"Yes")<<"\n";
}
int main(){
	anagram();
}
