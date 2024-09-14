class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // optimal solution using binary search
        int numsLen = nums.size();
        int low = 1;
        int high = numsLen - 2;
        int mid;

        if(numsLen == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[numsLen-1] != nums[numsLen-2]) return nums[numsLen-1];

        while(low <= high){
            mid = low + (high - low)/2;

            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]){
                return nums[mid];
            }
            // when we are in left
            if((mid%2 == 1 && nums[mid] == nums[mid-1]) || (mid%2 == 0 && nums[mid] == nums[mid+1])){
                low = mid + 1;
            }
            // when in right
            else{
                high = mid - 1;
            }
        }
        return -1;
    }
};