class Solution {
    public int maxProfit(int[] prices) {
        int maxp = Integer.MIN_VALUE;
        int profit = 0;
        int buyPrice = prices[0];
        // if(prices.length == 0 || prices.length == 1) return 0;

        for(int i = 1; i < prices.length; i++){
            buyPrice = Math.min(buyPrice, prices[i]);
            profit = prices[i] - buyPrice;
            maxp = Math.max(maxp, profit);
        }
        if(maxp >= 0){
            return maxp;
        }else{
            return 0;
        }
    }
}