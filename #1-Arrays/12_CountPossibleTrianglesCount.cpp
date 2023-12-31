/*

Given an unsorted array of positive integers, find the number of triangles 
that can be formed with three different array elements as three sides of 
triangles. For a triangle to be possible from 3 values, the sum of any of 
the two values (or sides) must be greater than the third value (or third side). 

Examples: 

Input: arr= {4, 6, 3, 7}
Output: 3
Explanation: There are three triangles 
possible {3, 4, 6}, {4, 6, 7} and {3, 6, 7}. 
Note that {3, 4, 7} is not a possible triangle.  

Input: arr= {10, 21, 22, 100, 101, 200, 300}.
Output: 6
Explanation: There can be 6 possible triangles:
{10, 21, 22}, {21, 100, 101}, {22, 100, 101}, 
{10, 100, 101}, {100, 101, 200} and {101, 200, 300}

*/

#include<bits/stdc++.h>
using namespace std;

int possibletriangle(int arr[], int n){
    sort(arr,arr+n);
    int count = 0;
    for(int i = n-1; i>=1; i--){
        int left = 0,right = i-1;
        while (left < right)
        {
            if(arr[left] + arr[right] > arr[i]){
                count += (right-left);
                right--;
            }else{
                left++;
            }
        }
    }
    return count;
}

int main(){
    
    int arr[] = {4, 6, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<possibletriangle(arr,n);
    return 0;
}