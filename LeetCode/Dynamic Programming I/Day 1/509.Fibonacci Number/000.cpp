class Solution {
public:
    int fib(int n) {
      int fibo[n+1];
      fibo[0] = 0;
        if(n>0)fibo[1] = 1;
      for(int i = 2;i<=n;i++)
          fibo[i] = fibo[i-1] + fibo[i-2];
      return fibo[n];
    }
};
