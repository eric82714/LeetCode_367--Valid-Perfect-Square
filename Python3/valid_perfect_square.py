class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        if num < 2: return True;
        
        x = num // 2
        t = x * x
        
        while t > num:
            x //= 2
            t = x * x
        
        for i in range(x, 2 * x + 1):
            if i * i == num: return True
        
        return False
