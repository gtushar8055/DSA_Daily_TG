#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int a[n];
	    int b[n];
	    
	    for(int i = 0 ; i < n ; i++){
	        cin>>a[i];
	    }
	    
	    for(int i = 0 ; i < n ; i++){
	        cin>>b[i];
	    }
	    
	    int sum = 0;
	    
	    for(int i = 0 ; i < n ; i++){
	        if(a[i] > b[i]){
	        sum += a[i]-b[i];
	        }
	        
	    }
	    
	    
	    cout<<sum<<endl;
	   
	}
}
