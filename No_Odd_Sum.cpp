// Day21 --> 25/06/2025
// No ODD Sum --> CFCs

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0 ; i<n ; i++){
	        cin>>arr[i];
	    }
	    
	    int OneCount = 0;
	    int twoCount = 0;
	    
	    for(int i = 0 ; i < n ; i++){
	        if(arr[i] == 1){
	            OneCount++;
	        }
	        else if(arr[i] == 2){
	            twoCount++;
	        }
	    }
	    
	    int Op1 = twoCount;
	    int Op2 = (OneCount%2 == 0 ? OneCount/2 : INT_MAX);
	    cout<<min(Op1 , Op2)<<endl;
	    
	 
	}

}