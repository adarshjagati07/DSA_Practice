class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int numsLen = nums.size();
        int sum = 0;
        int ans = 0;
        unordered_map<int, int> prefixSumMapCount;
        prefixSumMapCount[0] = 1;
        int i = 0;
        while(i < numsLen){
            sum = sum + nums[i];
            if(prefixSumMapCount.find(sum - goal) != prefixSumMapCount.end()){
                ans += prefixSumMapCount[sum - goal];
            }
            prefixSumMapCount[sum]++;
            i++;
        }
        return ans;
    }
};