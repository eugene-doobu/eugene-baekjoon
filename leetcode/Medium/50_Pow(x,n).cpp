class Solution {
public:
    double myPow(double x, int n) {
        double rst = 1;
        if(abs(x)==1) return n&2 ? x : 1;
        if(n < 0)     x=1/x; n=abs(n);
        while (n && abs(rst) > DBL_EPSILON) {
            if(n&1) rst *= x; 
            n = n >> 1;
            x = x * x;
        }
        return rst;
    }
};