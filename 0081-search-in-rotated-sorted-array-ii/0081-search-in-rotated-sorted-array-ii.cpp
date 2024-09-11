class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int numsLen = nums.size();
        int low = 0;
        int high = numsLen - 1;
        int mid;
        int result = false;

        //this is the case when we have no duplicates in array!
        while(low <= high){
            mid = low + (high-low)/2;

            if(nums[mid]== target) return true;

            //edge case when low mid and high are equal
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low = low + 1;
                high = high - 1;
                continue;
            }

            // if array is left sorted
            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && target <= nums[mid]){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }
            else{
                //else arry is right sorted.
                if(nums[mid] <= target && target <= nums[high]){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
        }
        return result;
    }
};