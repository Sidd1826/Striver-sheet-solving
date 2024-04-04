#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int target)
{
    int s = 0;
    int e= n-1;
    int mid = s+ (e-s)/2;
    int ans;

    while(s<=e)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }

        else if(arr[mid] < target)
            s = mid + 1;

        else    
            e = mid-1;

        mid = s + (e - s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int target)
{
    int s = 0;
    int e= n-1;
    int mid = s+ (e-s)/2;
    int ans;

    while(s<=e)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }

        else if(arr[mid] < target)
            s = mid + 1;

        else    
            e = mid-1;

        mid = s + (e - s)/2;
    }
    return ans;
}

int main()
{
    int arr[] = {1,2,2,3};
    int n = 4;
    int target = 2;

    int first = firstOcc(arr, n, target);
    int last = lastOcc(arr, n, target);

    int totalOcc = last - first + 1;

    cout << totalOcc << endl;;

    return 0;
}