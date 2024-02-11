class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int numsLen = nums.size();
        int position = 0;
        int count = 0;
        for(int i = 0; i < numsLen; i++){
            position = position + nums[i];
            if(position == 0){
                count++;
            }
            
        }       
        return count;
    }
};