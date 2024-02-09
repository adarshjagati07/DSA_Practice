class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int numsLen = nums.size();
        int j = 0;
        for(int i = 0; i < numsLen-1; i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1] = 0;
            }          
            
        }
        for(int i = 0; i < numsLen; i++){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
            }
        }
        return nums;
    }
};