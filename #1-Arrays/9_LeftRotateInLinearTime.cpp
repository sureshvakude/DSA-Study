/*

Given an array of size n and multiple values around which we need to left rotate the array. 
How to quickly print multiple left rotations?

Examples : 

Input : 
arr[] = {1, 3, 5, 7, 9}
k1 = 1
k2 = 3
k3 = 4
k4 = 6
Output : 
3 5 7 9 1
7 9 1 3 5
9 1 3 5 7
3 5 7 9 1
Input : 
arr[] = {1, 3, 5, 7, 9}
k1 = 14 
Output : 
9 1 3 5 7

*/

#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int k){
    k = k % n;

    for(int i=0; i<n; i++){
        cout<<(arr[(k + i)%n])<<" ";
    }
    cout<<"\n";
}

int main(){
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/ sizeof(arr[0]);

    leftRotate(arr,n,2);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}