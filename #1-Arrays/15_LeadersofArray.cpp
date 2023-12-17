/*

Write a program to print all the LEADERS in the array. An element is a leader 
if it is greater than all the elements to its right side. And the rightmost 
element is always a leader. 

For example:

Input: arr[] = {16, 17, 4, 3, 5, 2}, 
Output: 17, 5, 2

Input: arr[] = {1, 2, 3, 4, 5, 2}, 
Output: 5, 2

*/

#include<bits/stdc++.h>
using namespace std;

void Leaders(int arr[], int n){
    cout<<arr[n-1]<<" ";
    int large = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        if(arr[i] > large){
            large = arr[i];
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    Leaders(arr,n);
    return 0;
}