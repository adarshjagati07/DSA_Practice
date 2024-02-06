#include<bits/stdc++.h>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> copy(nums);
        int numsLen = nums.size();
        for(int i = 0; i < numsLen; i++){
            if(k==numsLen) k=0;
            if(numsLen==1) break;
            if(k>numsLen) {
                k=k%numsLen;
            }
            nums[k] = copy[i];
            k++;
        }
    }
};