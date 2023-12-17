/*

Given an array with all distinct elements, find the largest three elements. 
Expected time complexity is O(n) 
and extra space is O(1). 

Examples :

Input: arr[] = {10, 4, 3, 50, 23, 90}
Output: 90, 50, 23

Input: arr[] = {7,8,9,10,10}
required Output: 10, 9, 8
actual output: 10, 10, 9

*/

#include<bits/stdc++.h>
using namespace std;

void display3Largest(vector<int> &arr){
    if(arr.size()<3){
        cout<<"Invalid array";
        return;
    }

// Approach -1

    
     int fs,se,tr;
     fs = se = tr = INT_MIN;

     for(int i=0; i<arr.size(); i++){
         if(arr[i] > fs){
             tr = se;
             se = fs;
             fs = arr[i];
         }else if(arr[i]>se && arr[i] != fs){
             tr = se;
             se = arr[i];
         }else if(arr[i]>tr && arr[i]!=se && arr[i] != fs){
             tr = arr[i];
         }
     }
     cout<<"Largest elements are : "<<fs<<" "<<se<<" "<<tr;

// Approach -2 
    // sort(arr.begin(), arr.end());
 
    // int check = 0, count = 1;
    // for (int i = 1; i <= arr.size()-1; i++) {
    //     if (count < 4) {
    //         if (check != arr[arr.size()-1 - i]) {
    //             cout << arr[arr.size()-1 - i] << " ";
    //             check = arr[arr.size()-1 - i];
    //             count++;
    //         }
    //     }
    //     else
    //         break;
    // }
}

int main(){
    // int n;
    // cin>>n;

    // vector<int> arr;
    // for(int i=0; i<n; i++){
    //     int tp;
    //     cin>>tp;
    //     arr.push_back(tp);
    // }

    vector<int> arr = {7,8,9,10,10};

    display3Largest(arr);
    return 0;
}