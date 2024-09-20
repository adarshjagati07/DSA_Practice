class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int weightsLen = weights.size();
        auto max = max_element(weights.begin(),weights.end());
        int low = *max;
        int high = accumulate(weights.begin(), weights.end(), 0);
        int mid;
        int leastWeight;

        while(low <= high){
            mid = low + (high-low)/2;
            bool possible = isPossible(weights,days,mid,weightsLen); 

            if(possible){
                leastWeight = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return leastWeight;
    }

    bool isPossible(vector<int>& weights, int days, int mid, int n){
        int sum = 0;
        int dayscnt = 1;
        for(int i = 0; i < n; i++){
            if(sum + weights[i] > mid){
                dayscnt++;
                sum = 0;
            }
            sum = sum + weights[i];
        }
        if(dayscnt <= days) return true;
        return false;
    }
};