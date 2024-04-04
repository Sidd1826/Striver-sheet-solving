#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i=0; i<=n-2; i++)
    {   
        int minIndex = i;
        for(int j=i; j<=n-1; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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

    selectionSort(arr, n);

    print(arr, n);


}