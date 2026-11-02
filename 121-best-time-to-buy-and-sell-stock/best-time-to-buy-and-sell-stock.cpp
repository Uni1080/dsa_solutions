class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit = 0;
        int buying_price = INT_MAX;
        for(int i = 0 ; i<n ; i++){  
                int profit = prices[i] - buying_price;
                maxprofit = max(profit,maxprofit);
                buying_price = min(prices[i],buying_price);  
        }
    return maxprofit;
    }
};