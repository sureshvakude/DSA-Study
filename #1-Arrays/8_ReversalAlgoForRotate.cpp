/*

Given an array arr[] of size N, the task is to rotate the array by d position to the left.

Examples: 

Input:  arr[] = {1, 2, 3, 4, 5, 6, 7}, d = 2
Output: 3, 4, 5, 6, 7, 1, 2
Explanation: If the array is rotated by 1 position to the left, 
it becomes {2, 3, 4, 5, 6, 7, 1}.
When it is rotated further by 1 position,
it becomes: {3, 4, 5, 6, 7, 1, 2}

Input: arr[] = {1, 6, 7, 8}, d = 3
Output: 8, 1, 6, 7

*/

#include<bits/stdc++.h>
using namespace std;

void Swap(int arr[], int i, int j){
    for(int k = i; k<=j; k++){
        swap(arr[k],arr[j]);
        j--;
    }
}

void leftRotate(int arr[], int n, int k){
    k = k % n;

    Swap(arr,0,k-1);
    Swap(arr,k,n-1);
    Swap(arr,0,n-1);
}

void rightRotate(int arr[], int n, int k){
    k = k % n;

    Swap(arr,0,n-1);
    Swap(arr,0,k-1);
    Swap(arr,k,n-1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    // leftRotate(arr,n,2);

    rightRotate(arr,n,2);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}