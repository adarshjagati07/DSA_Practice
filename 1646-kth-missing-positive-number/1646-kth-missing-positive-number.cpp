class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int arrLen = arr.size();
        int low = 0;
        int high = arrLen-1;
       

        while(low <= high){
            int mid = low + (high-low)/2;
            int missing = arr[mid] - (mid + 1);
            if(missing < k){
                low = mid+ 1;
            }
            else{
                high = mid - 1;
            }
        }
        return high + 1 + k;
       
    }
};