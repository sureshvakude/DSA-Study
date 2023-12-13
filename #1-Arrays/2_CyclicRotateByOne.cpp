/*

Given an array, the task is to cyclically rotate the array clockwise by one time. 

Examples:  

Input: arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}

Input: arr[] = {2, 3, 4, 5, 1}
Output: {1, 2, 3, 4, 5}

*/

#include<bits/stdc++.h>
using namespace std;

/*
// Approach - 1
void Rotate(int arr[], int n){
    int temp = arr[n-1];

    for(int i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    
    arr[0] = temp;
}
*/

/*
// Approach - 2
void Rotate(int arr[], int n){
    int j = n-1;
    for(int i=0;i<n;i++){
        swap(arr[i],arr[j]);
    }
}
*/

// Approach - 3
void Rotate(int arr[], int n){
    int j = n-2;
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[j]);
        j--;
    }

    j=n-1;
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[j]);
        j--;
    }
}

int main(){

    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    Rotate(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}