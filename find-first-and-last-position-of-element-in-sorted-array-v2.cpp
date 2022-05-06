// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int binarySearchLeftMost(int nums[],int target){
    
    // int mid = (start+end)/2;
    int start= 0; 
    int end = sizeof(*nums);
    int mid = start+(end-start)/2;
    
   
    int ans = -1;
    while(start<=end){
        
        if(nums[mid]==target){
             ans = mid;
             end = mid -1;
        }
        
        // left compare
        if(target < nums[mid]){
            end = mid -1;
        }
        
        
        // right compare
        if(target > nums[mid]){
            start = mid + 1;
        }    
        mid = start+(end-start)/2;
    }
    
    return ans;
}

int binarySearchRightMost(int nums[],  int target){
    
    // int mid = (start+end)/2;
    int start= 0; 
     int end = sizeof(*nums);
    int mid = start+(end-start)/2;
   
    int ans = -1;
    while(start<=end){
        
    
        if(nums[mid]==target){
             ans = mid;
             start = mid +1;
        }
        
        // left compare
        if(target < nums[mid]){
            end = mid -1;
        }
        
        
        // right compare
        if(target > nums[mid]){
            start = mid + 1;
        }    
        mid = start+(end-start)/2;
    }
    
    return ans;
}

int main()
{
    // single dimesion array
    int nums[] = {5,7,7,8,8,10};
    int target = 7;
    int left;
    int right;
    left = binarySearchLeftMost(nums,  target);
    right = binarySearchRightMost(nums, target);
    int arr[] ={left, right};
    cout << "arr"<<arr[0]<< arr[1];

    return 0;
}
