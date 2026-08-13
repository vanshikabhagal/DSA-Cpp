#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    int sumOfMatrix(vector<vector<int>> &mat){
    int sum=0;
    for (int i=0; i < mat.size(); i++){
            for (int j=0; j < mat[i].size(); j++){
                sum += mat[i][j];
            }
        }
    return sum;
    }
};

int main(){
    vector<vector<int>> matrix = {{1, 0, 1},{-8,9,-2}};
    Solution s1;
    int ans = s1.sumOfMatrix(matrix);
    cout << ans;
    return 0;
}