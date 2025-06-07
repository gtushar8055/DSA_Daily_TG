// Day 3 --> 07/06/2025
// The Peak Element by Binary Search Method --> LC 162


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            if (nums[mid] > nums[mid + 1]) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        
        return low;
    }
};
