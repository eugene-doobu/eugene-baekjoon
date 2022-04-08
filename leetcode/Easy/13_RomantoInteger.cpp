class Solution {
public:
    static int symbolToValue(char ch){
        switch(ch){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
    
    int romanToInt(string s) {
        int idx = 0;
        int rst = 0;
        while(s[idx] != '\0'){
            if(symbolToValue(s[idx]) >= symbolToValue(s[idx+1])){
                rst += symbolToValue(s[idx]);
                idx++;
            } else{
                rst += (symbolToValue(s[idx+1]) - symbolToValue(s[idx]));
                idx+=2;
            }
        }
        return rst;
    }
};