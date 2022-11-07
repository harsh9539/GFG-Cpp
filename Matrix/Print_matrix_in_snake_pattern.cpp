#include <bits/stdc++.h>
using namespace std;

void printSnakePattern(vector<vector<int>> &v){
    int row = v.size(),col = v[0].size();
    for(int i = 0;i < row;i++){
        if(i % 2 == 0){
            for(int j = 0; j< col; j++){
                cout << v[i][j] << " ";
            }
        }
        else{
            for(int j = col - 1; j >= 0; j--){
                cout << v[i][j] << " ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> mt;
    int row,col;
    cin >> row >> col;
    for(int i = 0;i<row;i++){
        vector<int> temp;
        for(int j = 0;j<col;j++){
            int k;
            cin >> k;
            temp.push_back(k);
        }
        mt.push_back(temp);
    }
    printSnakePattern(mt);
    return 0;
}