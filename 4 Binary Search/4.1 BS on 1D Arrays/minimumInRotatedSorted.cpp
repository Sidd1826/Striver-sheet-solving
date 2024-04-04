#include <iostream>
using namespace std;

int pivotArray(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(arr[mid] >= arr[0])
            s = mid + 1;

        else    
            e = mid;

        mid = s+(e-s)/2;
    }
    return arr[s];
}

int main()
{
    int arr[] = {4,5,6,7,0,1,2,3};
    int n = 8;
    int target = 0;

    cout << pivotArray(arr, n) << endl;;

    return 0;
}