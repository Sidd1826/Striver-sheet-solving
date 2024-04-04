#include <iostream>
using namespace std;

#define row 3
#define col 3


void transpose(int arr[row][col])
{
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void reverse(int arr[row][col])
{
    for(int i=0; i<row; i++)
    {
        int s = 0;
        int e = col - 1;

        while(s < e)
        {
            swap(arr[i][s], arr[i][e]);
            s++;
            e--;
        }    
    }
}

void print(int arr[row][col])
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int arr[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    print(arr);

    transpose(arr);
    reverse(arr);

    print(arr);
}