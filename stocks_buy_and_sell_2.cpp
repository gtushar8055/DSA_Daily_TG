// Day13 --> 17/06/2025
// Stocks II -->GfGs

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int n = prices.size();
        int mini = prices[0] , res = 0;
        
        
        for(int i = 1 ; i < n ; i++){
            mini = min(mini , prices[i]);
            res = max(res , prices[i] - mini);
        }
        
        return res;
    }
};
