/*

Given an array of elements of length N, ranging from 0 to N – 1. All elements may not be present in the array. 
If the element is not present then there will be -1 present in the array. Rearrange the array such that A[i] = i 
and if i is not present, display -1 at that place.

Examples: 

Input : arr = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1}
Output : [-1, 1, 2, 3, 4, -1, 6, -1, -1, 9]

Input : arr = {19, 7, 0, 3, 18, 15, 12, 6, 1, 8,
              11, 10, 9, 5, 13, 16, 2, 14, 17, 4}
Output : [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
         11, 12, 13, 14, 15, 16, 17, 18, 19]

*/

#include<bits/stdc++.h>
using namespace std;


// void ReaarangeArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         if(arr[i] != -1 && arr[i] != i){
//             int x = arr[i];
//             while(arr[x] != -1 && arr[x] != x){
//                 int y = arr[x];
//                 arr[x] = x;
//                 x = y;
//             }

//             arr[x] = x;
//             if(arr[i] != i ) arr[i] = -1;
//         }
//     }
// }

void ReaarangeArray(int arr[], int n){
    int i=0;
    while(i<n){
        int correct = arr[i];
        if(arr[i] != -1 && arr[i] != arr[correct]){
            swap(arr[i],arr[correct]);
        }
        else{
            i++;
        }
    }
}

int main(){

    int arr[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    ReaarangeArray(arr,n);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;
}