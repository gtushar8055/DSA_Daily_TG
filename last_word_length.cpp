// Day23 --> 28/06/2025


class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length()-1;
        while(i >= 0 && s[i] == ' '){
            i--;
        }
        int lastIdx = i;

        while(i >= 0 && s[i] != ' '){
            i--;
        }

        return lastIdx - i;
    }
};