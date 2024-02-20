class Solution {
public:
    int search(vector<int>& nums, int target) {
        int numsLen = nums.size();
        
        for(int i = 0; i < numsLen; i++){
            if(nums[i]== target){
                return i;
            }
        }
        return -1;
    }
};