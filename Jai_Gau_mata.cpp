// LC --> 299

class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char , int> m;
        int bulls = 0 , cows = 0;

        for(int i = 0 ; i < secret.length() ; i++){
            if(secret[i] == guess[i]){
                bulls++;
            }
            else{
                m[secret[i]]++;
            }
        }

        for(int i = 0 ; i < guess.length() ; i++){
            if(secret[i] != guess[i]){
                if(m[guess[i]] > 0){
                    cows++;
                    m[guess[i]]--;
                }
            }
        }
        

        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};