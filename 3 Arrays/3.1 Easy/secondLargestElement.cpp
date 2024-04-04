#include <iostream>
using namespace std;

int secondLargest(int arr[], int n)
{
    if(n < 2)
        return -1;

    int large = INT8_MIN;
    int sec_large = INT8_MIN;

    for(int i=0; i<n; i++)
    {
        if(arr[i] > large)
        {
            sec_large = large;
            large = arr[i];
        }

        else if(arr[i] > sec_large && arr[i] != large)
        {
            sec_large = arr[i];
        }
    }
    return sec_large;
}

int secSmallest(int arr[], int n)
{
    if(n<2)
        return -1;

    int small = INT8_MAX;
    int sec_small = INT8_MAX;

    for(int i=0; i<n; i++)
    {
        if(arr[i] < small)
        {
            sec_small = small;
            small = arr[i];
        }

        else if(arr[i] < sec_small && arr[i] != small)
        {
            sec_small = arr[i];
        }
    } 
    return sec_small;
}

int main()
{
    int arr[] = {2, 5, 1, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << secondLargest(arr, n) << endl;

    cout << secSmallest(arr, n) << endl;

    return 0;


}