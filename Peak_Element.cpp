// Day 3 --> 07/06/2025
// Peak elem in GfGs
class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                return i;
            }
            else if(arr[0] > arr[1] || n == 1){
                return 0;
            }
            else if(arr[n-1] > arr[n-2]){
                return n-1;
            }
        }
    }
};