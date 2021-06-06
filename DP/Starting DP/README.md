### Qs 1: Find the total number of ways you can get N from the sum of 1's and 2's
```cpp
using longint = long long int;
longint dp[MX];
int main(){
   dp[N] = dp[N-1]+dp[N-2];
   //remember fibonacci?
}
```
### Qs 2: Find the total number of ways you can get N from the sum of 1's , 2's and 3's
```cpp
using longint = long long int;
longint dp[MX];
int main(){
  dp[N] = dp[N-1]+dp[N-2]+dp[N-3];
}
```
