class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int numsLen = nums.size();
        
        map<int, int> frequency;
        for (int i = 0; i < numsLen; i++){
            frequency[nums[i]]++;
        }
        
        for(auto & it : frequency){
            if(it.second!=2){
                return it.first;
            }
        }
        return 0;
    }
};