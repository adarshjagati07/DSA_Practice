class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int numsLen = nums.size();
        vector<int> result;
        unordered_map<int,int> mpp;
        
        for(int i = 0; i < numsLen; i++){
            mpp[nums[i]]++;
        }
        
        for (auto it = mpp.begin(); it != mpp.end(); it++) {
            if(it->second > numsLen/3){
                result.push_back(it->first);
            }
        }
        return result;
    }
};