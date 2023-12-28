/*

Given two integer arrays of the same size, “arr[]” and “index[]”, reorder elements in “arr[]” 
according to the given index array.

Example: 
Input:  arr[]   = [10, 11, 12];
            index[] = [1, 0, 2];
Output: arr[]   = [11, 10, 12]
           index[] = [0,  1,  2] 

Input:  arr[]   = [50, 40, 70, 60, 90]
          index[] = [3,  0,  4,  1,  2]
Output: arr[]   = [40, 60, 90, 50, 70]
          index[] = [0,  1,  2,  3,   4]

*/


#include<bits/stdc++.h>
using namespace std;

void ReorderArray(int arr[], int index[], int n){
    for(int i=0; i<n; i++){
        while(index[i] != i){
            int oldIndex = index[index[i]];
            char oldElement = arr[index[i]];

            arr[index[i]] = arr[i];
            index[index[i]] = index[i];

            index[i] = oldIndex;
            arr[i] = oldElement;
        }
    }

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[] = {50, 40, 70, 60, 90};
    int index[] = {3,  0,  4,  1,  2};
    int n = sizeof(arr)/sizeof(arr[0]);

    ReorderArray(arr,index,n);
    return 0;
}