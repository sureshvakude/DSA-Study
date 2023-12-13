/*

Given a sorted array of positive integers, rearrange the array alternately i.e first element should be a maximum value, 
at second position minimum value, at third position second max, at fourth position second min, and so on. 

Examples: 

Input: arr[] = {1, 2, 3, 4, 5, 6, 7} 
Output: arr[] = {7, 1, 6, 2, 5, 3, 4}

Input: arr[] = {1, 2, 3, 4, 5, 6} 
Output: arr[] = {6, 1, 5, 2, 4, 3} 

*/

#include<bits/stdc++.h>
using namespace std;

void Reaarange(int arr[], int n){
    sort(arr, arr+n);

    int ans[n];
    int p = n-1, q=0;
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            ans[i] = arr[p--];
        }else{
            ans[i] = arr[q++];
        }
    }

    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    Reaarange(arr,n);

    return 0;
}