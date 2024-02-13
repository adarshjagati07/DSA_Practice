class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int arrLen = prices.size();
        int minimumToBuy = prices[0];
        int profit = 0;
        
        for(int i = 0; i < arrLen; i++){
            int cost = prices[i] - minimumToBuy;
            profit = max(profit, cost);
            minimumToBuy = min(minimumToBuy,prices[i]);
        }
        return profit;
    }
};