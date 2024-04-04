#include <bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>> &matrix, int row, int col, int i)
{
    for(int j=0; j<col; j++)
    {
        if(matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    } 
}

void markCol(vector<vector<int>> &matrix, int row, int col, int j)
{
    for(int i=0; i<row; i++)
    {
        if(matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    } 
}


vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int row, int col) {

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] == 0) {
                markRow(matrix, row, col, i);
                markCol(matrix, row, col, j);
            }
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;

}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 0}};
    int row = matrix.size();
    int col = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, row, col);

    cout << "The Final matrix is: ";
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}
