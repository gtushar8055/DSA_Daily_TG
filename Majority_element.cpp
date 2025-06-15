// Day11 --> 15/06/2025
// Majority Element ----> Gfgs

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        
        int ele1 = -1 , ele2 = -1, count1 = 0, count2 = 0;
        
        for(int ele : arr){
            if(ele1 == ele){
                count1++;
            }
            
            else if(ele2 == ele){
                count2++;
            }
            
            else if(count1 == 0){
                ele1 = ele;
                count1++;
            }
            
            else if(count2 == 0){
                ele2 = ele;
                count2++;
            }
            
            else{
                count1--;
                count2--;
            }
        }
        
        vector<int> result;
        count1 = 0;
        count2 = 0;
        
        
        for(int ele : arr){
            if(ele1 == ele) count1++;
            if(ele2 == ele) count2++;
        }
        
        
        if(count1 > n/3) result.push_back(ele1);
        if(count2 > n/3 && ele1 != ele2) result.push_back(ele2);
        
        if(result.size() == 2 && result[0] > result[1]){
            swap(result[0] , result[1]);
        }
        
    
        return result;
    }
};