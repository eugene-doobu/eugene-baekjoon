class Solution {
public:
    int devideFive(int n){
        if(n<=0) return 0;
        return devideFive((int)n/5) + (int)n/5;
    }
    int trailingZeroes(int n) {
        return devideFive(n);
    }
};