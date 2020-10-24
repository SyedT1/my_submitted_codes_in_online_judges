#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
using ll = long long int;
using vll = vector<ll>;
void IO() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int main() {
    //IO();
    ll n, typ[6] = {}; cin >> n;
    for(int i = 0,val;i<n;i++){
        cin>>val;typ[val]++;
    }
    int mxel = 0, freq = 0;
    for (int i = 0; i < 6; i++) {
        if (typ[i] > mxel) {
            freq = i;
            mxel = typ[i];
        }
    }
    cout << freq << '\n';
    return 0;
}
