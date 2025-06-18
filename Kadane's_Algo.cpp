// Day14 --> 18/06/2025
// Kadane's Algo --> GfGs 

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int maxi = arr[0];
        int n = arr.size();
        int currSum = 0;
        
        for(int i = 0 ; i < n ; i++){
            if(currSum < 0){
                currSum = 0;
            }
            
            currSum += arr[i];
            maxi = max(maxi , currSum);
        }
        
        return maxi;
    }
};