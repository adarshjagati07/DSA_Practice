class Solution {
public:
    bool isPalindrome(int x) {
        int dub = x;
        int rev = 0;
        while(x > 0){
            int lastdigit = x % 10;
            if(rev > INT_MAX/10) return 0;
            if(rev < INT_MIN/10) return 0;
            rev = (rev*10) + lastdigit;
            x = x / 10;
        }
        if(dub == rev){
            return true;
        }
        return false;
    }
};