class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int missingCount = 0;   // Tracks how many numbers are missing
        int i = 0, current = 1; // i iterates over arr, current iterates over natural numbers
        
        while (missingCount < k) {
            if (i < arr.size() && arr[i] == current) {
                // If current number is in the array, move to the next number in arr
                i++;
            } else {
                // If current number is missing, increment missingCount
                missingCount++;
                if (missingCount == k) return current;
            }
            current++;
        }
        
        // Edge case: If k-th missing number is larger than the max element of arr
        return current;
    }
};