class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int numsLen = nums.size();
        int left = 0;
        int right = 0;
        int zeros = 0;
        int maxLen = 0;
        int len = 0;

        while(right < numsLen){
            if(nums[right] == 0) zeros++;
            while(zeros > k){
                if(nums[left]==0) zeros--;
                left++;
            }
            if(zeros <= k){
                len = right-left+1;
                maxLen = max(len,maxLen);
            }
            right++;
        }
        return maxLen;
    }
};