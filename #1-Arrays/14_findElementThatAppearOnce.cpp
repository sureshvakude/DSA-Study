/*

Given an array of integers. All numbers occur twice except one number 
which occurs once. Find the number in O(n) time & constant extra space.

Example : 
Input:  arr[] = {2, 3, 5, 4, 5, 3, 4}
Output: 2 

*/

#include<bits/stdc++.h>
using namespace std;

void findElement(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum ^= arr[i];
    }
    cout<<sum;
}

int main(){
    int arr[] = {15, 18, 16, 18, 16, 15, 89}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    findElement(arr,n);
    return 0;
}