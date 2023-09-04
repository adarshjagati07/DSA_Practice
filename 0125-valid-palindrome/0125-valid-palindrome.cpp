class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v1;
        int i = 0;
        while(i < s.length()){
            if(s[0]==32) v1.push_back(s[0]);
            if(s[i] != 32 && ((s[i]>= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)|| (s[i] >= 48 && s[i] <= 57))){
                char c = tolower(s[i]);
                v1.push_back(c);
            }
            i++;
        }
        int j = 1;
        for (auto it = v1.begin(); it != v1.end(); ++it){
            if(*it != v1[v1.size()-j]){
                return false;
            }
            j++;
        }
        return true;
    }
};