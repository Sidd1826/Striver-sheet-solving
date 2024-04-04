#include <iostream>
using namespace std;

void reverse(int arr[], int s, int e)
{
    while(s<=e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void rightRotate(int arr[], int n, int k)
{
    reverse(arr, 0, n-k-1);

    reverse(arr, n-k, n-1);

    reverse(arr, 0, n-1);
}

void leftRotate(int arr[], int n, int k)
{
    reverse(arr, 0, k-1);

    reverse(arr, k, n-1);

    reverse(arr, 0, n-1);

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
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;

    print(arr, n);

    // leftRotate(arr, n, 2);

    rightRotate(arr, n, 2);

    print(arr, n);
}