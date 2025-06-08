// Day 4 --> 08/06/2025
// Maximum sum subarray using Sliding window algorithm 

#include <iostream>
#include<climits>
using namespace std;
int main() {
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxSum = INT_MIN;
    int maxIdx = -1;
    int prevSum = 0;
    // Sum of the first window
    for(int i = 0 ; i < k ; i++){
        prevSum += arr[i];
    }
    maxSum = prevSum;

    // Sliding Window Algorithm
    int i = 1;
    int j = k;
    while(j < n){
        int currSum = prevSum + arr[j] - arr[i-1];
        if(maxSum < currSum){
            maxSum = currSum;
            maxIdx = i;
        }
        prevSum = currSum;
        i++;
        j++;
    }

    cout<<maxSum<<endl;
    cout<<maxIdx;
    return 0;
}