class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 2) return true;
        
        long x = num / 2, t = x * x;
        
        while (t > num) {
            x /= 2;
            t = x * x;
        }
        
        for (long i = x; i <= 2 * x; ++i) {
            if (i * i == num) return true;
        }
        
        return false;
    }
};
