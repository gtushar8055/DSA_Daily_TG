// Day16 --> 20/06/2025
// Max Circular Sum Subarray --> GfGs
// Practice : https://www.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1

class Solution {
  public:
    int circularSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int totalSum = 0;
        int currmaxSum = 0;
        int currminSum = 0;
        int minSum = arr[0];
        int maxSum = arr[0];
        
        for(int i = 0 ; i < n ; i++){
            currmaxSum = max(currmaxSum+arr[i] , arr[i]);
            maxSum = max(maxSum , currmaxSum);
            
            currminSum = min(currminSum+arr[i] , arr[i]);
            minSum = min(minSum , currminSum);
            
            totalSum += arr[i];
        }
        
        int normalSum = maxSum;
        int circularSum = totalSum - minSum;
        
        if(totalSum == minSum){
            return normalSum;
        }
        return max(normalSum , circularSum);
        
    }
};