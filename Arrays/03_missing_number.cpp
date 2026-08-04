#include<iostream>
using namespace std;

int missing_number(int arr[], int size){
    int actual_sum = 0;
    for (int i = 0; i < size ; i++){
        actual_sum += arr[i];
    }
    int expected_sum = size*(size+1)/2;
    return expected_sum - actual_sum;
};

int main() {
    int nums[] = {3, 0, 1};
    int n = sizeof(nums)/sizeof(nums[0]);
    int answer = missing_number(nums, n);
    cout << answer;
    return 0;
}