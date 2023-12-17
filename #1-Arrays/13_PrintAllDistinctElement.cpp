/*

Given an integer array, print all distinct elements in an array. 
The given array may contain duplicates and the output should print every 
element only once. The given array is not sorted.

Examples: 
Input: arr[] = {12, 10, 9, 45, 2, 10, 10, 45}
Output: 12, 10, 9, 2

Input: arr[] = {1, 2, 3, 4, 5}
Output: 1, 2, 3, 4, 5

*/

#include<bits/stdc++.h>
using namespace std;

void removeRepeat(int arr[], int n){
    unordered_set<int> s;

    for(int i=0; i<n; i++){
        if(!s.count(arr[i])){
            s.insert(arr[i]);
            cout<<arr[i]<<" ";
        }
    }
}

int main(){

    int arr[] = {12, 10, 9, 45, 2, 10, 10, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    removeRepeat(arr,n);

    return 0;
}