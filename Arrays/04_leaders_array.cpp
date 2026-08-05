#include<iostream>
using namespace std;

int leaders(int arr[], int size){
    int result[size];
    int index = 0;
    int check = arr[size-1];
    for (int i = (size-1); i >= 0; i--){
        if (arr[i] >= check){
            result[index] = arr[i];
            check = arr[i];
            index++;
        }
    }
    for (int i = index-1; i>=0; i--){
        cout << result[i] << " ";
    }
    
    return 0;
}
int main() {
    int nums[] = {10,16,17,3,4,5,2};
    int length = sizeof(nums)/sizeof(nums[0]);
    leaders(nums, length);
    return 0;
}