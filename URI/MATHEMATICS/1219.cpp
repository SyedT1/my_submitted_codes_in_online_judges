#include<bits/stdc++.h>
#define sp(a) fixed<<setprecision(a)
using namespace std;
using ll = int;
void heron(double x,double y,double z){
	double prm = (x+y+z)/2;
    double At = sqrt(prm*(prm-x)*(prm-y)*(prm-z));
    double Rb = (x*y*z)/sqrt((x+y+z)*(y+z-x)*(z+x-y)*(x+y-z));
    double R = At/prm;
    cout<<sp(4)<<(Rb*Rb*M_PI)-At<<" "<<At-(R*R*M_PI)<<" "<<R*R*M_PI<<"\n";
}
int main()
{
	ll a,b,c;
	while(cin>>a>>b>>c){
		heron(a,b,c);
	}
}
