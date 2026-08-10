#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int> &nums){
    int write = 0;
    for(int i=0; i<nums.size();i++){
        if (nums[i] != 0){
            nums[write] = nums[i];
            write ++;
        }
    }
    for(int i = write; i<nums.size(); i++){
        nums[i] = 0;
    }

    for(int i = 0; i< nums.size(); i++){
        cout << nums[i] << " ";
    }

}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    moveZeroes(arr);
    return 0;
}