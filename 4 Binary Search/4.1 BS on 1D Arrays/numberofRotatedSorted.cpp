// number of times the array is rotated 
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
    return s;
}

int main()
{
    int arr[] = {4,5,6,7,0,1,2,3};
    int n = 8;
    int cnt = 0;

    int pivot = pivotArray(arr, n);

    for(int i=pivot; i<n; i++)
    {
        cnt++;
    }

    cout << cnt << endl;


    return 0;
}