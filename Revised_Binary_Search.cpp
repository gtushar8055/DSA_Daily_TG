// Day 3  -- > 07/06/2025
// Binary Search in GfGs
class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int n = arr.size();
        int high = n-1;
        int low = 0;
        int result = -1;
        while(low <= high){
        int mid = low + (high - low)/2;
            if(arr[mid] == k){
                result = mid;
                high = mid -1;
            }
            
            else if(arr[mid] > k){
                high = mid - 1;
            }
            
            else{
                low = mid + 1;
            }
        }
        
        return result;
    }
};