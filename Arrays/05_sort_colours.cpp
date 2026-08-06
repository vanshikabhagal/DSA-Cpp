#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}
int sorting(int nums[], int n){
    int red = 0;
    int white = 0;
    int blue = n-1;
    while (white <= red){
        if (nums[white] == 0){
            swap(nums[white],nums[red]);
            red += 1;
            white += 1;
        }
        else if (nums[white] == 1){
            white += 1;
        }
        else{
            swap(nums[white], nums[blue]);
            blue -= 1;
        }
    }
    for (int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    return 0;
}

int main(){
    int nums[] = {2,0,2,1,1,0};
    int n = sizeof(nums)/sizeof(nums[0]);
    sorting(nums,n);
    return 0;
}