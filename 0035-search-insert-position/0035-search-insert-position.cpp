class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int numsLen = nums.size();
        int i;
        for(i = 0; i < numsLen; i++){
            if(nums[i]== target){
                return i;
            }
            if(target < nums[i]){
                return i;
            }
        }
        return i;
    }
};