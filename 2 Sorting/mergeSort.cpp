#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
    // find mid
    int mid = s + (e-s)/2;

    // find left and right length
    int leftLength = mid - s + 1;
    int rightLength = e - mid;

    // create left and right array
    int* left = new int[leftLength];
    int* right = new int[rightLength];

    // copy left array
    int ogIndex = s;
    for(int i=0; i<leftLength; i++)
    {
        left[i] = arr[ogIndex++];
    }

    // copy right array
    ogIndex = mid+1;
    for(int i=0; i<rightLength; i++)
    {
        right[i] = arr[ogIndex++];
    }

    // merge two sorted arrays
    int leftIndex = 0;
    int rightIndex = 0;
    ogIndex = s;

    while(leftIndex < leftLength && rightIndex < rightLength)
    {
        if(left[leftIndex] <= right[rightIndex])
        {
            arr[ogIndex++] = left[leftIndex++];
        }
        else
        {
            arr[ogIndex++] = right[rightIndex++];
        }
    }

    while(leftIndex < leftLength)
    {
        arr[ogIndex++] = left[leftIndex++];
    }

    while(rightIndex < rightLength)
    {
        arr[ogIndex++] = right[rightIndex++];
    }
}

void mergeSort(int arr[], int s, int e)
{
    if(s >= e)
        return;

    int mid = s + (e-s)/2;

    // left part
    mergeSort(arr, 0, mid);

    // right Part
    mergeSort(arr, mid+1, e);

    // merge arrays
    merge(arr, s, e);

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

    mergeSort(arr, 0, n-1);

    print(arr, n);
}