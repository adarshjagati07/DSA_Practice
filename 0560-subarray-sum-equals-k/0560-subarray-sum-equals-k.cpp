class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int numsLen = nums.size();
        int count = 0;
        
        for(int i = 0; i < numsLen; i++){
            int sum = 0;
            for(int j = i; j < numsLen; j++){
                sum = sum + nums[j];
                if(sum == k) count++;
            }
        }
        return count;        
    }
};