#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=0; i<=n-1; i++)
    {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j])
        {
            swap(arr[j-1], arr[j]);
            j--;
        }
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
    int arr[6] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    print(arr, n);

    insertionSort(arr, n);

    print(arr, n);
}