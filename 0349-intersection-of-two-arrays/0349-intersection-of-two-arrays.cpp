class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> numSet(nums1.begin(), nums1.end());
        vector<int> result;

        for (int num : nums2) {
            if (numSet.find(num) != numSet.end()) {
                result.push_back(num);
                numSet.erase(num); // Avoid duplicate entries in result
            }
        }

        return result;
    }
};
