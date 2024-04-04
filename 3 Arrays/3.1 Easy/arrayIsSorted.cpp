#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    if(n <= 1)
        return true;

    for(int i=0; i<=n-1; i++)
    {
        if(arr[i] > arr[i+1])
            return false;
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 2};
    int n = 6;

    cout << isSorted(arr, n) << endl;

    return 0;
}