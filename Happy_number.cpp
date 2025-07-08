class Solution {
public:
    int updatedNum(int n){
        int l = 0 , sum = 0;
        while(n){
            l = n%10;
            sum += l*l;
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> s;
        while(s.find(n) == s.end()){
            s.insert(n);
            n = updatedNum(n);
            if(n == 1){
                return true;
            }
        }

        return false;
    }

};