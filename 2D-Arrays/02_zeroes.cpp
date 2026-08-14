#include<iostream>
#include<vector>

using namespace std;
class Solution{
    public:
    int countZeroes(vector<vector<int>> &mat){
    int count = 0;
    for (int i=0; i<mat.size();i++){
        for(int j=0; j<mat[i].size();j++){
            if (mat[i][j] == 0){
                count++;
            }
        }
    }
    return count;
    }
};


int main(){
    vector<vector<int>> matrix;
    matrix = {{0,0,0},{0,0,1},{0,1,1}};
    Solution x;
    int ans = x.countZeroes(matrix);
    cout << ans;
    return 0;
}