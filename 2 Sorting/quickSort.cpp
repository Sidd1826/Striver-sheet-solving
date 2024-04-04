#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    // first element is pivot
    int pivot = arr[s];

    // count elements smaller than pivot
    int count = 0;
    for(int i=s+1; i<=e; i++)
    {
        if(arr[i] <= pivot)
            count++;
    }

    // find right place for pivot
    int pivotIndex = s + count;

    // swap a right place
    swap(arr[pivotIndex], arr[s]);

    // handle left and right part
    int i = s;
    int j = e;

    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i] <= pivot)
            i++;

        while(arr[j] > pivot)
            j--;

        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    if(s >= e)
        return;

    int pIndex = partition(arr, s, e);

    quickSort(arr, s, pIndex-1);

    quickSort(arr, pIndex+1, e);
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

    quickSort(arr, 0, n-1);

    print(arr, n);
}