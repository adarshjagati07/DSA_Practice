class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        int numsLen = nums.size();
        
        //finding the breakpoint from last
        for(int i = numsLen-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }
        
        //no breakpoint found
        if(index == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        
        //getting the smallest number greater than nums[index]
        for(int i = numsLen-1; i > index; i--){
            if(nums[i] > nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        //after that breakpoint
        reverse(nums.begin() + index + 1, nums.end());
    }
};