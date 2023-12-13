/*

Given an array of random numbers, Push all the zero’s of a given array to the end of the array. 
For example, if the given arrays is {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed to 
{1, 9, 8, 4, 2, 7, 6, 0, 0, 0, 0}. The order of all other elements should be same. Expected time complexity is O(n) 
and extra space is O(1).

Example: 

Input :  arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
Output : arr[] = {1, 2, 4, 3, 5, 0, 0, 0};

Input : arr[]  = {1, 2, 0, 0, 0, 3, 6};
Output : arr[] = {1, 2, 3, 6, 0, 0, 0};

*/

#include<bits/stdc++.h>
using namespace std;

void MoveEnd(int arr[], int n){
    int nonZeroIdx = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            swap(arr[nonZeroIdx], arr[i]);
            nonZeroIdx++;
        }
    }
}

int main(){

    int arr[] = {1,0,0,4,0,6,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    MoveEnd(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}