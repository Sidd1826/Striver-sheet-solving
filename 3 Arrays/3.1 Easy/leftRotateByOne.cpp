#include <iostream>
using namespace std;

void leftRotate(int arr[], int n)
{
    int i = 0;
    int j= n-1;
    while(i<j)
    {
        swap(arr[i], arr[j]);
        j--;
    }
}


void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    print(arr, n);

    leftRotate(arr, n);

    print(arr, n);
}