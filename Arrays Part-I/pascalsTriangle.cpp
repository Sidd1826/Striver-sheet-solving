#include <iostream>
#include <vector>
using namespace std;

int ncr(int n, int r)
{
    int res = 1;

    for(int i=0; i<r; i++)
    {
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}

int pascalsTriangle1(int r, int c)
{
    int element = ncr(r-1, c-1);
    return element;
}

vector<vector<int>> pascalsTriangle2(int n)
{
    vector<vector<int>> ans;

    for(int row=1; row<=n; row++)
    {
        vector<int> tempList;
        for(int col=1; col<=row; col++)
        {
            tempList.push_back(ncr(row-1, col-1));
        }
        ans.push_back(tempList);
    }
    return ans;
}


int main()
{
    // int row, col;

    // cout << "Enter row: ";
    // cin >> row;

    // cout << "Enter col: ";
    // cin >> col;

    // int res = pascalsTriangle1(row, col);

    int n = 5;

    vector<vector<int>> ans = pascalsTriangle2(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }

    // cout << "Element at pos is: " << res << endl;

    return 0;

}