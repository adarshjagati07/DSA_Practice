class Solution {
public:
    
    void moveZeroes(vector<int>& nums) {
        int zeroPointer = 0, nonZeroPointer = 0;
        int n = nums.size();
        while(zeroPointer < n && nonZeroPointer < n)
        {
            if(nums[nonZeroPointer] != 0) nonZeroPointer++;
            if(nums[zeroPointer] == 0) zeroPointer++;

            if((zeroPointer < n && nonZeroPointer < n) && (nonZeroPointer < zeroPointer)){
               swap(nums[zeroPointer],nums[nonZeroPointer]);   
            }
            zeroPointer++;
        }
    }
};