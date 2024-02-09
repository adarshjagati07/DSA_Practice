class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int numsLen = nums.size();
        int count=0;
        
        for(int i = 0; i < numsLen-1; i++){
            for(int j = i+1; j < numsLen; j++){
                if(abs(nums[i]-nums[j])==k){
                    count++;
                }    
            }
            
        }
        return count;
    }
};