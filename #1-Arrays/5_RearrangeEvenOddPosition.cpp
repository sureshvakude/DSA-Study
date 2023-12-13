/*

Given an array A of n elements, sort the array according to the following relations :  

A[i] >= A[i-1]                          , if i is even,  ∀ 1 <= i < n
A[i] <= A[i-1]                          , if i is odd ,  ∀ 1 <= i < n
Print the resultant array.

Examples :  


Input : A[] = {1, 2, 2, 1}
Output :  1 2 1 2
Explanation : 
For 1st element, 1  1, i = 2 is even.
3rd element, 1  1, i = 4 is even.

Input : A[] = {1, 3, 2}
Output : 1 3 2
Explanation : 
Here, the array is also sorted as per the conditions. 
1  1 and 2 < 3.

*/

#include<bits/stdc++.h>
using namespace std;

void Arrange(int arr[], int n){
    sort(arr,arr+n);

    int ans[n];

    int p=0, q=n-1;
    for(int i=0;i<n;i++){
        if((i+1)%2 == 0){
            ans[i] = arr[q--];
        }else{
            ans[i] = arr[p++];
        }
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

int main(){

    int arr[] = {1,2,3,6,8,9,16};
    int n = sizeof(arr) / sizeof(arr[0]);

    Arrange(arr,n);

    return 0;
}