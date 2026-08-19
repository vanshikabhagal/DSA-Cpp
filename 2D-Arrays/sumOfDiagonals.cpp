#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    int sumOfDiagonals(vector<vector<int>> &mat){
        int sum = 0;
        int N = mat.size();
        for(int i=0; i<N; i++){
            sum += mat[i][N-1-i];
            if(i != N-1-i){
                sum += mat[i][i];
            }
            }
    return sum;
    }
};

int main(){
    vector<vector<int>> nums;
    nums = {{1,2,3},{4,5,6},{7,8,9}};
    Solution s;
    int ans = s.sumOfDiagonals(nums);
    cout << ans;
    return 0;
}