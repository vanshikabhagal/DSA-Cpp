#include<iostream>
using namespace std;

int majorityElement(int nums[], int n){
    int result = 0; 
    int frequency = 0;
    for (int i = 0; i < n; i++){
        if (frequency == 0){
            result = nums[i];
        }
        if (nums[i] == result){
            frequency++;
        }
        else{
            frequency--;
        }
    }
    return result;
}

int main(){
    int nums[] = {2,1,1,3,1,2,1};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << majorityElement(nums,n);
    return 0;
}