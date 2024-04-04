#include <bits/stdc++.h>
using namespace std;

// t.c -- O(n) + O(n*logn)
void twoSum(int arr[], int n, int target)
{
    sort(arr, arr+n);
    int l = 0;
    int r = n-1;

    while(l<r)
    {
        if(arr[l] + arr[r] == target)
        {
            cout << arr[l] << " , " << arr[r] << endl;
            l++;
            r--;
        }

        else if(arr[l] + arr[r] < target)
        {
            l++;
        }

        else{
            r--;
        }
    }
}


int main()
{
    // int arr[] = {1, 2, 3, 4, 5};
    int arr[] = {3, 2, 4};
    int n = 3;

    twoSum(arr, n, 7);
}