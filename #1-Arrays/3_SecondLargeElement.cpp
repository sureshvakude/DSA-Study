/*

Given an array of integers, our task is to write a program that efficiently finds the second-largest element present in the array. 

Examples:

Input: arr[] = {12, 35, 1, 10, 34, 1}
Output: The second largest element is 34.
Explanation: The largest element of the array is 35 and the second largest element is 34

Input: arr[] = {10, 5, 10}
Output: The second largest element is 5.
Explanation: The largest element of the array is 10 and the second largest element is 5

*/

#include<bits/stdc++.h>
using namespace std;

/*
// Approach - 1
void SecondLarge(int arr[], int n){
    sort(arr,arr+n);
    for(int i=n-2;i>=0;i--){
        if(arr[i] != arr[n-1]){
            cout<<"Second large : "<<arr[i];
            return;
        }
    }
}
*/

void SecondLarge(int arr[], int n){
    int fl = INT_MIN,sl = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>fl){
            sl=fl;
            fl=arr[i];
        }
        else if(arr[i]>sl && arr[i] != fl){
            sl = arr[i];
        }
    }
    cout<<"Second Large: "<<sl;
}

int main(){

    int arr[] = {1,2,3,4,5,6,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    SecondLarge(arr,n);

    return 0;
}