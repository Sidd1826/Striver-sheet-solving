#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int s = 0;
    int e= n-1;
    int mid = s+ (e-s)/2;

    while(s<=e)
    {
        if(arr[mid] == target)
        {
            return mid;
        }

        else if(arr[mid] < target)
            s = mid + 1;

        else    
            e = mid-1;

        mid = s + (e - s)/2;
    }
    return -1;
}

int main()
{
    int arr[] = {4, 7, 10, 22, 26, 35, 40, 55};
    int n = 8;
    int target = 35;

    cout << binarySearch(arr, n, target) << endl;;

    return 0;
}