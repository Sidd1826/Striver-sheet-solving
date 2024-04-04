#include <iostream>
using namespace std;

void sortingArr(int arr[], int n)
{
    int low = 0, mid = 0, high = n-1;

    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }

        else if(arr[mid] == 1)
        {
            mid++;
        }

        else{
            swap(arr[mid], arr[high]);
            high--;
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
    int arr[] = {2, 1, 0, 2, 0, 1};
    int n = 6;

    print(arr, n);

    sortingArr(arr, n);

    print(arr, n);
    
    return 0;
}