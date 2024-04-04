#include <iostream>
using namespace std;

void sortArr(int arr[], int n)
{
    int zero, one, two;

    zero = one = two = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0)
        {
            zero++;
        }

        if(arr[i] == 1)
        {
            one++;
        }

        if(arr[i] == 2)
        {
            two++;
        }
    }

    int i=0;

    while(zero--)
    {
        arr[i++] = 0;
    }

    while(one--)
    {
        arr[i++] = 1;
    }

    while(two--)
    {
        arr[i++] = 2;
    }
}

void Sortopt(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;

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
    int arr[] = {2, 2, 1, 0, 1, 2, 0, 1};

    int n = sizeof(arr)/sizeof(arr[0]);

    print(arr, n);

    Sortopt(arr, n);

    print(arr, n);

    return 0;
}