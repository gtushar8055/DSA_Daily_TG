// Day 22 --> 27/06/2025
// LC --> Permutation in String 
class Solution {
public:
    bool isFSame(int freq1[] , int freq2[]){
        for(int i = 0 ; i<26 ; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for(int i=0 ; i < s1.length() ; i++){
            freq[s1[i] - 'a']++;
        }

        int windowsize = s1.length();
        for(int i = 0 ; i<s2.length(); i++){
            int windowindex = 0, idx = i;
            int winFreq[26] = {0};

        while(windowindex < windowsize && idx < s2.length()){
            winFreq[s2[idx] - 'a']++;
            windowindex++;
            idx++;
        }

        if(isFSame(freq , winFreq)){
            return true;
        }
    }
    return false;
    }
};