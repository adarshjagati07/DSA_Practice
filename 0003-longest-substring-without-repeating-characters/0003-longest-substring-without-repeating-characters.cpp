class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int stringLen = s.size();
        int left = 0;
        int right = 0;
        int len = 0;
        vector<int> mpp(256,-1);

        while(right < stringLen){
            if(mpp[s[right]] != -1){
                left = max(mpp[s[right]]+1, left);
            }
            mpp[s[right]] = right;
            len = max(right-left+1, len);
            right++;
        }
        return len;
    }
};