// Day5 --> 09/06/2025
// Missing and Repeating --> GfGs

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        
        vector<int> normal(n);
        vector<int> result;
        
        for(int i = 0 ; i < n ; i++){
            normal[i] = i+1;
        }
        
        sort(arr.begin() , arr.end());
        int repeating = -1;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == arr[i+1]){
                repeating = arr[i];
                break;
            }
        }
        
        int nsum = 0;
        int asum = 0;
        for(int i = 0 ; i < n ; i++){
            nsum += normal[i];
            asum += arr[i];
        }
        
        int temp = asum - nsum;
        int missing = abs(temp - repeating);
        
        result.push_back(repeating);
        result.push_back(missing);
        
        return result;
        
    }
};