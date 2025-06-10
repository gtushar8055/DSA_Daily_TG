// Day6 --> 10/06/2025
// Largest Element in array 
class Solution {
  public:
    int largest(vector<int> &arr) {
        int n = arr.size();
        int maxi = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] > maxi){
                maxi = arr[i];
            }
        } 
        return maxi;
    }
};
