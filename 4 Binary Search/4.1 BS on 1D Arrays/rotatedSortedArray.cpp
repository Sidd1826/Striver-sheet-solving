#include <iostream>
using namespace std;

int pivot(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    int mid = s +(e-s)/2;

    while(s < e)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int n, int s, int e, int target)
{
    int mid = s + (e-s)/2;

    while(s <= e)
    {
        if(arr[mid] == target)
            return mid;

        else if(arr[mid] < target)
            s = mid+1;

        else    
            e = mid-1;

        mid = s + (e-s)/2;
    }
    return -1;
}

int search(int arr[], int n, int target)
{
    int pivot1 = pivot(arr, n);

    if(arr[pivot1] <= target && target <= arr[n-1])
    {
        return binarySearch(arr, n, pivot1, n-1, target);
    }

    else{
        return binarySearch(arr, n, 0, pivot1-1, target);
    }
}

int main()
{
    int arr[] = {4,5,6,7,0,1,2,3};
    int n = 8;
    int target = 0;

    cout << search(arr, n, target) << endl;;

    return 0;
}