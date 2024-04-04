#include <iostream>
using namespace std;

int findFloor(int arr[], int n, int target)
{
    int s = 0;
    int e= n-1;
    int mid = s+ (e-s)/2;
    int ans = -1;

    while(s<=e)
    {
        if(arr[mid] <= target)
        {
            ans = arr[mid];
            s = mid+1;
        }

        else    
            s = mid + 1;

        mid = s + (e - s)/2;
    }
    return ans;
}

int findCeil(int arr[], int n, int target)
{
    int s = 0;
    int e= n-1;
    int mid = s+ (e-s)/2;
    int ans = -1;


    while(s<=e)
    {
        if(arr[mid] >= target)
        {
            ans = arr[mid];
            e  = mid-1;
        }

        else    
            s = mid + 1;

        mid = s + (e - s)/2;
    }
    return ans;
}

int main()
{
    int arr[] = {3, 4, 4, 7, 8, 10};
    int n = 6;
    int target = 5;

    cout << findFloor(arr, n, target) << endl;;

    cout << findCeil(arr, n, target) << endl;

    return 0;
}