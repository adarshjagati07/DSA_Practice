class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int numsLen = nums.size();
        int count = 0;
        int maxConsecutiveCount = 0;
        
        for(int i = 0; i < numsLen; i++){
            if(nums[i]==1){
                count++;
            }
            else{                 
                count = 0;
            }
            if(count > maxConsecutiveCount)maxConsecutiveCount = count;
        }
        return maxConsecutiveCount;
}
};