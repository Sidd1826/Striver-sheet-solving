#include <iostream>
using namespace std;


int main()
{
    int arr[3][3] = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    int m,n;

    m = n = 3;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }




}