class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int numsLen = nums.size();
        // our ans is going to f(nums,goal)-f(nums,goal-1);
        int ans = countOfSubArrLessThanGoal(nums,goal,numsLen) - countOfSubArrLessThanGoal(nums,goal-1,numsLen);
        return ans;
    }

    int countOfSubArrLessThanGoal(vector<int> &nums, int goal, int n){
        int left = 0;
        int right = 0;
        int ans = 0;
        int sum = 0;

        // this is the algo which will find us the subarrays for (sum <= goal);
        while(right < n){
            if(goal < 0) return 0;
            sum += nums[right];

            while(sum > goal){
                sum -= nums[left];
                left++;
            }
            ans = ans + (right-left+1);
            right++;
        }
        return ans;
    }
};