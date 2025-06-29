// Day24 --> 29/06/2025
//LC --> 28

class Solution {
public:
    int strStr(string haystack, string needle) {
        while(haystack.length() > 0){
            int n = haystack.find(needle);
            return n;
        }
        return -1;
    }
};