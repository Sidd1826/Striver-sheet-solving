#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int s = 0;
    int e= n-1;
    int mid = s+ (e-s)/2;
    int ans;

    while(s<=e)
    {
        if(arr[mid] >= target)
        {
            ans = mid;
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
    int arr[] = {1, 2, 4, 7};
    int n = 4;
    int target = 2;

    cout << binarySearch(arr, n, target) << endl;;

    return 0;
}