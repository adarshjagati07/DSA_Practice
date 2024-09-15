class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int pilesLen = piles.size();
        int low = 1;
        auto maxBananas = max_element(piles.begin(), piles.end());
        int high = *maxBananas;
        int mid;
        int ans = high;

        while (low <= high) {
            mid = low + (high - low) / 2;
            long timeTaken = findTimeTaken(piles, mid, pilesLen);
            if (timeTaken <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    long findTimeTaken(vector<int>& piles, int mid, int n) {
        long time = 0;
        for (int i = 0; i < n; i++) {
            time += ceil((double)piles[i] / mid);
        }
        return time;
    }
};