#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tot = 0,car = 0;
	string num1,num2,sum;cin>>num1>>num2;
	for(int i = 39;i>=0;i--){
		tot = (int(num1[i]-'0')+int(num2[i]-'0'))+car;
        sum = to_string(!i?tot:tot%10)+sum;
        car = tot/10;
	}
	cout<<sum<<'\n';
}
