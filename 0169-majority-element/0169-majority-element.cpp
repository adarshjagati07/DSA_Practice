class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int numsLen = nums.size();
        
        for(int i = 0; i < numsLen; i++){
            mp[nums[i]]++;
        }
        
        for (auto it = mp.begin(); it != mp.end(); it++) {
          if(it->second > numsLen/2){
              return it->first;
          }
        }
       return -1;
    }
};