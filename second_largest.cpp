// Day6 --> 10/06/2025
// Second Largest element in array in GfGs

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int max = INT_MIN;
        if(n < 2) return -1;
        for(int i = 0 ; i<n ; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        
        int secmax = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] > secmax && arr[i] != max){
                secmax = arr[i];
            }
        }        
        
       return (secmax == INT_MIN) ? -1 : secmax;
    } 
};