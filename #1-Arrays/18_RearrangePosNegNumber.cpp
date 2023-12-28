/*

An array contains both positive and negative numbers in random order. Rearrange the array elements so that positive 
and negative numbers are placed alternatively. A number of positive and negative numbers need not be equal. If there 
'are more positive numbers they appear at the end of the array. If there are more negative numbers, they too appear at 
the end of the array.

Example:

Input: [-1, 2, -3, 4, 5, 6, -7, 8, 9]
Output:[9, -7, 8, -3, 5, -1, 2, 4, 6]

Input: [-1, 3, -2, -4, 7, -5]
Output:[7, -2, 3, -5, -1, -4]

*/

#include<bits/stdc++.h>
using namespace std;

void ArrangePosNeg(int arr[], int n){
    int cur=-1;
    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            cur++;
            swap(arr[i],arr[cur]);
        }
    }

    int pos = cur+1,neg = 0;

    while(pos < n && neg < pos && arr[neg] < 0){
        swap(arr[neg], arr[pos]);
        pos++;
        neg+=2;
    }

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

int main(){

    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    ArrangePosNeg(arr,n);
    
    return 0;
}