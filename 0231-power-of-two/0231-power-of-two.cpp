class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) // Power of two must be a positive number
            return false;
        
        while (n > 1) {
            if (n % 2 != 0)
                return false;
            n = n / 2;
        }
        
        return true;
    }
};
