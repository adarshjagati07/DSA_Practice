class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        //checking for ascending order not to break
        for(int i = 1; i < n; i++){
            if(nums[i-1] > nums[i]){
                count++;
            }
        }
        //checking last and first element.
        if(nums[n-1] > nums[0]){
            count++;
        }
        return count <= 1;
    }
};