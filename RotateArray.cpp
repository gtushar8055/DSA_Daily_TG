// Day8 --> 12/06/2025
// Leetcode 189 Rotate Array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = n-k-1;
        if(k>n) k = k%n;

        while(left < right){
            swap(nums[left] , nums[right]);
            left++;
            right--;
        }

        left = n-k;
        right = n-1;
        
        while(left < right){
            swap(nums[left] , nums[right]);
            left++;
            right--;
        }

        int i = 0;
        int j = n-1;
        while(i<j){
            swap(nums[i] , nums[j]);
            i++;
            j--;
        }
        
    }
};