class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        //optimal Solution
        
        int numsLen = nums.size();
        vector<vector<int>> result;
        
        sort(nums.begin(),nums.end());
        for(int i = 0; i < numsLen; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int j = i + 1;
            int k = numsLen - 1;
            
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0){
                    j++;
                }
                else if(sum > 0){
                    k--;
                }
                else{
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    result.push_back(temp);
                    j++;
                    k--;
                    
                    while(j < k && nums[j] == nums[j-1]) j++;
                    while(j < k && nums[k] == nums[k+1]) k--; 
                }
            }
        }
        return result;
    }
};