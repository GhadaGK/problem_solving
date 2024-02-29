class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0 :
            return False
        y = x 
        reverse = 0
        while x :
            reverse = reverse * 10 + x % 10
            x = x // 10
        return y == reverse
