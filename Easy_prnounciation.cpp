// Day23 --> 28/06/2025

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int c_count = 0;  
        bool hard = false;

        for (char ch : s) {
            if (!isVowel(ch)) {
                c_count++;
                if (c_count >= 4) {
                    hard = true;
                    break;
                }
            } else {
                c_count = 0;  
            }
        }

        if (hard)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
