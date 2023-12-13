/*

Given an array arr[] of integers, segregate even and odd numbers in the array such that all the even numbers 
should be present first, and then the odd numbers.

Examples:  

Input: arr[] = {7, 2, 9, 4, 6, 1, 3, 8, 5}
Output: 2 4 6 8 7 9 1 3 5

Input: arr[] = {1, 3, 2, 4, 7, 6, 9, 10}
Output:  2 4 6 10 7 1 9 3

*/

#include<bits/stdc++.h>
using namespace std;

void LomutoPartition(int arr[], int n){
    int pivot = arr[n-1];

    int i = 0;
    for(int j=0; j<n; j++){
        if(arr[j] % 2 == 0){
            swap(arr[i++],arr[j]);
        }
    }

    swap(arr[i+1],pivot);
}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    LomutoPartition(arr,n);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}