// Day24 --> 29/06/2025
// Wordle --> CC

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    string T;
	    cin>>T;
	    
	    for(int i = 0 ; i < 5 ; i++){
	        if(s[i] == T[i]){
	            s[i] = 'G';
	        }
	        else{
	            s[i] = 'B';
	        }
	    }
	    
	    cout<<s<<endl;
	}

}
