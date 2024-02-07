class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int numsLen = nums.size();
        sort(nums.begin(),nums.end());
        int i;
        for(i = 0; i < numsLen; i++){
            if(nums[i]!=i){
                return i;
            }
        }
        if(nums[numsLen-1]!=numsLen){
            return numsLen;  
        } 
        return 1;
    }
};