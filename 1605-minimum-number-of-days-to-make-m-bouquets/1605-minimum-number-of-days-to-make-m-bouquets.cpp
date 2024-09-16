class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int arrLen = bloomDay.size();
        auto min = min_element(bloomDay.begin(),bloomDay.end());
        auto max = max_element(bloomDay.begin(), bloomDay.end());
        int low = *min;
        int high = *max;
        int ans = -1;
        int mid;

        if((long long)m*k > arrLen) return ans;

        while(low <= high){
            mid = low + (high-low)/2;
            int possible = isPossible(bloomDay, mid, arrLen, m, k);
            if(possible){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }

    bool isPossible(vector<int>& bloomDay, int day, int n, int m, int k){
        int noOfBouquets = 0;
        int frequentCount = 0;
        for(int i = 0; i <= n-1; i++){
            if(bloomDay[i] <= day){
                frequentCount++;
                if(frequentCount == k){
                    noOfBouquets++;
                    frequentCount = 0;
                }
            }
            else{
                frequentCount = 0;
            }
            if(noOfBouquets >= m){
                return true;
            }
        }
        if(noOfBouquets >= m) return true;
        return false;
    }
};