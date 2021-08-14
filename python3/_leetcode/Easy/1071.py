class Solution:
    def gcd(self, x,y):
        while y:
            x, y = y, x % y
        return x

    def gcdStrCheck(self,key, s_x, s_y, n):
        if (s_x[:n] != key and s_x) or (s_y[:n] != key and s_y):
            return False
        elif len(s_x)>0 or len(s_y)>0:
            return self.gcdStrCheck(key, s_x[n:], s_y[n:], n)
        else:
            return True
        
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        n = gcd(len(str1), len(str2))
        
        if self.gcdStrCheck(str1[:n], str1, str2, n):
            return str1[:n]
        return ''
        