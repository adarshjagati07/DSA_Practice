class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int numsLen = nums.size();
        vector<int> positiveNumbers;
        vector<int> negativeNumbers;
        vector<int> result;
        int p1=0,p2=0;
        for(int i = 0; i < numsLen; i++){
            if(nums[i] < 0){
                negativeNumbers.push_back(nums[i]);
            }else{
                positiveNumbers.push_back(nums[i]);
            }
        }
        for(int i = 0; i <= numsLen/2; i++){
            if(p1 < positiveNumbers.size()){
                result.push_back(positiveNumbers[p1]);
                p1++;
            }
            
            if(p2 < negativeNumbers.size()){
                result.push_back(negativeNumbers[p2]);
                p2++;
            }
        
            
        }
        return result;
    }
};