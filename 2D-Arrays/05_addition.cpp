#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    void addMat(vector<vector<int>>& a, vector<vector<int>>& b) {
        for (int i=0; i<a.size(); i++){
            for (int j=0; j<a[i].size(); j++){
                a[i][j] += b[i][j];
            }
        }
    }
};

int main(){
    vector<vector<int>> x;
    vector<vector<int>> y;

    x = {{1,2}, {3,4}};
    y = {{4,3},{2,1}};

    Solution sol;
    sol.addMat(x,y);

    for(int i=0; i<x.size();i++){
        for(int j=0; j<x[i].size(); j++){
            cout << x[i][j] << " ";
        }
    }
    return 0;
}