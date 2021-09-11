class Solution {
public:
    int tribonacci(int n) {
        int Tribo[n+1];
        Tribo[0] = 0;
        if(n>0)
            Tribo[1] = 1;
        if(n>1)
            Tribo[2] = 1;
        for(int i = 3;i<=n;i++)
            Tribo[i] = Tribo[i-1] + Tribo[i-2] + Tribo[i-3];
        return Tribo[n];
    }
};
