
#include <iostream>
using namespace std;

int peakElement(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(arr[mid] < arr[mid+1])
            s = mid + 1;

        else    
            e = mid;

        mid = s+(e-s)/2;
    }
    return s;
}

int main()
{
    int arr[] = {0, 10, 5, 2};
    int n = 4;

    cout << peakElement(arr, n) << endl;


    return 0;
}