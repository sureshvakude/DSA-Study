/*

You have given an array which contain 1 to n element, your task is to 
sort this array in an efficient way and without replace with 1 to n numbers.
Examples : 

Input : arr[] = {10, 7, 9, 2, 8, 3, 5, 4, 6, 1};
Output : 1 2 3 4 5 6 7 8 9 10 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10, 7, 9, 2, 8, 3, 5, 4, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i=0;
    while(i<n){
        int correct = arr[i]-1;
        if(arr[correct] != arr[i]){
            swap(arr[correct],arr[i]);
        }else{
            i++;
        }
    }

    for(auto a: arr) cout<<a<<" ";
    return 0;
}