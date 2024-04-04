#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=n-1; i>=1; i--)
    {
        int didSwap = 0;
        for(int j=0; j<=i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0)
            break;
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

    bubbleSort(arr, n);

    print(arr, n);


}