#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int num)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == num)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << linearSearch(arr, n, 3) << endl;
}