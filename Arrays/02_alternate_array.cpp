#include <iostream>
using namespace std;

void alternate(int arr[], int size){
    for (int i=0; i<size; i+=2){
        cout << arr[i] << " ";
    }
}
int main(){
    int nums[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(nums)/sizeof(nums[0]);
    alternate(nums, size);
    return 0;
}