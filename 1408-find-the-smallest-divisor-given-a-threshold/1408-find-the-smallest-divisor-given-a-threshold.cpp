class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int numsLen = nums.size();
        int low = 1;
        auto maxElement = max_element(nums.begin(), nums.end());
        int high = *maxElement;
        int mid;
        int sum;
        int ans = 0;

        while (low <= high) {
            mid = low + (high - low) / 2;
            sum = findSum(nums, mid, numsLen);
            if (sum <= threshold) {
                ans = mid;      // Store the current mid as a potential answer
                high = mid - 1; // Try to find a smaller divisor
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
    int findSum(vector<int>& nums, int divisor, int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += ceil((double)nums[i] / divisor);
        }
        return sum;
    }
};