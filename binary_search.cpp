
// Binary Search
// [3,12,32,45,48, 55,65,75];
// Binary Means two, i.e you can divide the array into two parts.

// Prerequisite for Binary Search.
// array must be sorted in acending or decending order.

// Target 65
// startIndex = 0, endIndex = 7
// (start + end)/2 = (0+7)/2=3
// mid = 3

// if(arr[mid] == target){  // 45 == 65 fasle
    
// }

//  if(target > arr[mid]){
        // start = mid + 1;
// }
//  if(target < arr[mid]){
    //  end = mid -1;
// }
// 
// mid = (start + end)/2;
// while(start > end)




#include <iostream>
using namespace std;
int main(){
    
    int arr[] = {3,12,32,45,48, 55,65,75};
    
    int target = 12;
    int start = 0;
    int end = sizeof(arr) -1;
    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == target){
            cout << "target found at index " << mid << "  value is " << arr[mid];
            break;
        }
        if(target >arr[mid] ){
            start = mid + 1;
        }
        if(target < arr[mid]){
            end = mid -1;
        }
    }
    return 0;
}
