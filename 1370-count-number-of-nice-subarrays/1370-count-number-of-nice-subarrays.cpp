class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int numsLen = nums.size();
        int ans = countSubArrLessThanEqualsK(nums,k,numsLen)- countSubArrLessThanEqualsK(nums,k-1,numsLen);
        return ans;
    }

    int countSubArrLessThanEqualsK(vector<int> &nums, int k, int n){
        int left = 0;
        int right = 0;
        int oddNum = 0;
        int cnt = 0;

        while(right < n){
            if(k < 0) return 0;
            if(nums[right]%2 != 0) oddNum++;
            while(oddNum > k){
                if(nums[left] %2 != 0) oddNum--;
                left++;
            }
            cnt = cnt + (right-left+1);
            right++;
        }
        return cnt;
    }
};