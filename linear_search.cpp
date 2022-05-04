

// [3,3,32,3,323,339,33,44,55,1,2,32];

// search the element, that target element is exist in the array.
// linear ... one by one...
// target 44
// if(arr[i] === target) return i;

#include <iostream>
using namespace std;
int main(){
    
    int arr[] = {3,3,32,3,323,339,33,44,55,1,2,32};
    
    int target = 32;
    for(int i=0; i < sizeof(arr); i++  ){
        
        if(arr[i] == target){
            cout << "Target is foud at index " << i << " value is " << arr[i];
        }
    }
    return 0;
}
