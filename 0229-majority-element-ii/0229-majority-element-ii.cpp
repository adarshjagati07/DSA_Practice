class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int numsLen = nums.size();
        vector<int> result;
        unordered_map<int,int> mpp;
        int minimumCount = (numsLen/3) + 1;
        
        for(int i = 0; i < numsLen; i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == minimumCount){
                result.push_back(nums[i]);
            }
        }
        //now we are using only single iteration ie. O(N) timecomplexity
        
        // for (auto it = mpp.begin(); it != mpp.end(); it++) {
        //     if(it->second >= minimumCount){
        //         result.push_back(it->first);
        //     }
        // }
        return result;
    }
};