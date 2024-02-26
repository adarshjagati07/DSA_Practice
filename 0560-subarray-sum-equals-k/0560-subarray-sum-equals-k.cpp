class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int numsLen = nums.size();
        int count = 0;
        int preSum = 0; 
        unordered_map<int,int> mpp;
        mpp[0] = 1;
        
        for(int i = 0; i < numsLen; i++){
            preSum += nums[i];
            int remove = preSum - k;
            count += mpp[remove];
            mpp[preSum] +=1;
        }
        return count;
    }
};