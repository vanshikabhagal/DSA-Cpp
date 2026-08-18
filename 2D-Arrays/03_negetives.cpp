#include<iostream>
#include<vector>

using namespace std;
class Solution{
public:
    int countNegetive(vector<vector<int>> &arr){
        int count = 0;
        for (int i=0; i<arr.size(); i++){
            for (int j=0; j<arr[i].size(); j++){
                if (arr[i][j] < 0){
                    count ++;
                }
            }
        }
        return count;
    }
};
int main(){
    vector<vector<int>> grid;
    grid = {{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
    Solution s;
    int res = s.countNegetive(grid);
    cout << res;
    return 0;
}