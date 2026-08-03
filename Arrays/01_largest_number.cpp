#include <iostream>
using namespace std;

int largest(int arr[],int size){
    int largest = arr[0];
    for(int i=1; i<size; i++){
        if (arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int smallest(int arr[], int size){
    int smallest = arr[0];
    for (int i = 1; i < size; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int main(){
    int nums[] = {2,5,9,3,1,4};
    int size = sizeof(nums) / sizeof(nums[0]);
    int max_ans = largest(nums,size);
    cout << max_ans << endl;
    int min_ans = smallest(nums,size);
    cout << min_ans;
    return 0;
}