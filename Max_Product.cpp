// Day15 --> 19/06/2025
// Maximum_Product_Subarray ---> GfGs

class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        int n = arr.size();
        int maxi = arr[0];
        int mini = arr[0];
        int product = arr[0];
        
        for(int i = 1 ; i < n ; i++){
            int temp = max({arr[i] , arr[i]*maxi , arr[i]*mini});
            mini = min({arr[i] , arr[i]*maxi , arr[i]*mini});
            maxi = temp;
            
            product = max(maxi , product);
        }
        
        return product;
    }
};