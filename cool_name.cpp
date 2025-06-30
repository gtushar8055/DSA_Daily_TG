//Day25 --> 30/06/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    
	    sort(s.begin() , s.end());
	    
	    int sum = 0;
	    
	    for(int i = 0 ; i<s.length() ; i++){
	        sum += (i+1)*(s[i] - 'a' + 1);
	    }
	    
	    cout<<sum<<endl;
	}
}