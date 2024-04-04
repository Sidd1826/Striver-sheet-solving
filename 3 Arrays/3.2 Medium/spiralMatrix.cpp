#include <iostream>
using namespace std;

#define row 4
#define col 4

void spiral(int arr[row][col])
{
    int count = 0;
    int total = row * col;

    int startRow = 0;
    int endRow = row - 1;
    int startCol = 0;
    int endCol = col - 1;

    while(count < total)
    {
        for(int i=startCol;count < total && i<=endCol; i++)
        {
            cout << arr[startRow][i] << " ";
            count++;
        }
        startRow++;
        

        for(int i=startRow;count < total && i<=endRow; i++)
        {
            cout << arr[i][endCol] << " ";
            count++;
        }
        endCol--;

        for(int i=endCol;count < total && i>=startCol; i--)
        {
            cout << arr[endRow][i] << " ";
            count++;
        }
        endRow--;

        for(int i=endRow; count < total && i>=startRow; i--)
        {
            cout << arr[i][startCol] << " ";
            count++;
        }
        startCol++;
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
    int arr[row][col] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    print(arr);

    spiral(arr);
    
}