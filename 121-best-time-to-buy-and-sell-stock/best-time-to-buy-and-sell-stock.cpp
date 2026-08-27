class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int bestprice = prices[0];
        int n = prices.size();
        for(int i = 0; i<n; i++){
            if(prices[i]>bestprice){
                maxprofit =max(maxprofit , prices[i]-bestprice);
            }
            bestprice = min(bestprice , prices[i]);
        }
        return maxprofit;
        
    }
};