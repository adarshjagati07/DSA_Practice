class Solution {
public:
    int findMin(vector<int>& nums) {
        int numsLen = nums.size();
        int low = 0;
        int high = numsLen-1;
        int minElement = nums[0];
        int mid;

        
        while(low <= high){
            mid = low + (high-low)/2;
            
            // If the array is already sorted, return the leftmost element
            if (nums[low] <= nums[high]) {
                minElement = min(minElement, nums[low]);
                break;
            }
            // Update the minimum element found so far
            minElement = min(minElement, nums[mid]);
            
            // If the left part is sorted, move to the right
            if (nums[low] <= nums[mid]) {
                low = mid + 1;
            } 
            // If the right part is sorted, move to the left
            else {
                high = mid - 1;
            }
        }
        return minElement;
    }
};