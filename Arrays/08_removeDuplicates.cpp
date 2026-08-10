#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
int removeDuplicates(vector<int> &nums){
    int write = 1;
    for(int i=1; i<nums.size(); i++){
        if (nums[i] != nums[write-1]){
            nums[write] = nums[i];
            write++;
        }
    }
    return write;
}
};

int main(){
    vector<int> nums = {1,1,2,3,3,3,5,6,6,7};
    Solution s;
    int ans = s.removeDuplicates(nums);

    cout << ans << endl;

    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }

    return 0;
}