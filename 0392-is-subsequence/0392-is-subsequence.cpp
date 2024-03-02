class Solution {
public:
    bool isSubsequence(string s, string t) {
        int len1 = s.length();
        int len2 = t.length();
        int j = 0;
        if(len1 == 0) return true;
        if(len2 == 0) return false;
        
        for(int i = 0; i < len2; i++){
            if(s[j] == t[i]){   
                j++;
            }
            if(j == len1){
                return true;
            }
        }
        return false;
    }
};