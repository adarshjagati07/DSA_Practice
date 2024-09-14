class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int numsLen = nums.size();
        int low = 1;
        int high = numsLen - 2;
        
        if(numsLen == 1) return 0;

        while(low <= high){
            if(nums[low] > nums[low+1] && nums[low] > nums[low-1]){
                return low;
            }
            low++; 
            if(nums[high] > nums[high + 1] && nums[high] > nums[high-1]){
                return high;
            }
            high--;
        }
        if(nums[0] > nums[1]) return 0;
        if(nums[numsLen-1] > nums[numsLen-2]) return numsLen-1;
        return numsLen-2;
    }
};