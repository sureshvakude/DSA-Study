/*

Given an array arr[] of non-negative integers and an integer sum, 
find a subarray that adds to a given sum.

Note: There may be more than one subarray with sum as the given sum, 
print first such subarray. 

Examples: 
Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
Output: Sum found between indexes 2 and 4
Explanation: Sum of elements between indices 2 and 4 is 20 + 3 + 10 = 33

*/

#include<bits/stdc++.h>
using namespace std;

void FindSubArrayRange(int arr[], int sum, int n){
    int startIndex = 0;
    int curSum = arr[startIndex];
    int i = 1;
    for(int i=1; i<n; i++){
        curSum += arr[i];
        
        while(curSum > sum && startIndex < i-1){
            curSum -= arr[startIndex];
            startIndex++;
        }

        if(curSum == sum){
            cout<<startIndex<<" "<<i<<endl;
            return;
        }

    }
    cout<<"Not Found";
}

int main(){

    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 33;

    FindSubArrayRange(arr,sum,n);
    return 0;
}