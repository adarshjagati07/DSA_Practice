class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int numsLen = nums.size();
        vector<int> result(numsLen,0);
        int positiveIndex = 0;
        int negativeIndex = 1;
        
        for(int i = 0; i < numsLen; i++){
            if(nums[i] < 0){
                result[negativeIndex] = nums[i];
                negativeIndex += 2;
            }else{
                result[positiveIndex] = nums[i];
                positiveIndex += 2;
            }
        }
        return result;
    }
};