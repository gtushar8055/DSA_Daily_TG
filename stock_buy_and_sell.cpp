// Day13 --> 17/06/2025
// Stocks I --> GfGs
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int n = prices.size();
        int res = 0;
        
        for(int i = 1 ; i < n ; i++){
            if(prices[i] > prices[i-1]){
                res += prices[i] - prices[i-1];
            }
        }
        
        return res;
    }
};
