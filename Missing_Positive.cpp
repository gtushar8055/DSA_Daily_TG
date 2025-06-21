// Day17 --> 21/06/2025
// Smallest missing positive 
// Practice : https://www.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1
class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin() , arr.end());
        
        int res = 1;
        
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == res){
                res++;
            }
            
            if(arr[i] > res){
                break;
            }
        }
        
        return res;
    }
};