class Solution:
    def isPalindrome(self, x: int) -> bool:
        strA = str(x)

        for i in range(int(len(strA)/2)):
          if strA[i] != strA[len(strA)-i-1]:
            return False
        return True
