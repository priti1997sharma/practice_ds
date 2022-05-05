#include <bits/stdc++.h>
using namespace std;

int binarySearchLeftMost(int arr[], int start, int end, int target){
    
    // int mid = (start+end)/2;
    int mid = start+(end-start)/2;
    cout << "target value " << target << "\n";
    int ans = -1;
    while(start<=end){
        
    
        // mid compare
        
        cout << "start value " << start << "\n";
        cout << "end value " << end << "\n";
        cout << "mid value " << mid << "\n";
        
        cout << "arr[mid] " << arr[mid] << "\n";
        cout << "ans  " << ans << "\n";
        
        if(arr[mid]==target){
             ans = mid;
             end = mid -1;
        }
        
        // left compare
        if(target < arr[mid]){
            end = mid -1;
        }
        
        
        // right compare
        if(target > arr[mid]){
            start = mid + 1;
        }    
        mid = start+(end-start)/2;
    }
    
    return ans;
}

int binarySearchRightMost(int arr[], int start, int end, int target){
    
    // int mid = (start+end)/2;
    int mid = start+(end-start)/2;
    cout << "target value " << target << "\n";
    int ans = -1;
    while(start<=end){
        
    
        // mid compare
        
        cout << "start value " << start << "\n";
        cout << "end value " << end << "\n";
        cout << "mid value " << mid << "\n";
        
        cout << "arr[mid] " << arr[mid] << "\n";
        cout << "ans  " << ans << "\n";
        
        if(arr[mid]==target){
             ans = mid;
             start = mid +1;
        }
        
        // left compare
        if(target < arr[mid]){
            end = mid -1;
        }
        
        
        // right compare
        if(target > arr[mid]){
            start = mid + 1;
        }    
        mid = start+(end-start)/2;
    }
    
    return ans;
}

int main()
{
    // single dimesion array
    int arr[] = {5,7,7,8,8,10};
    int target = 7;
    int left;
    int right;
    left = binarySearchLeftMost(arr, 0, 5, target);
    right = binarySearchRightMost(arr, 0, 5, target);
    cout << "left, right " << left <<","<< right << " and for " << arr[left];

    return 0;
}
