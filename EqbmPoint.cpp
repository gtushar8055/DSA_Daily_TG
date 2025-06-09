// Day5 --> 09/06/2025
// Eqbm point in GfGs

class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        int n = arr.size();
        int leftsum = 0;
        int sum = 0;
        
        for(int i = 0 ; i < n ; i++){
            sum += arr[i];
        }
        
        for(int i = 0 ; i < n ; i++){
            int rightsum = sum - leftsum - arr[i];
            
            if(leftsum == rightsum){
                return i;
            }
            
            leftsum += arr[i];
        }
        
        return -1;
    }
};