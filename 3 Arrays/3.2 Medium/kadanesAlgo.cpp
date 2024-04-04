#include <bits/stdc++.h>
using namespace std;

// int kadane(int arr[], int n)
// {
//     int sum = 0;
//     int ans = INT_MIN;

//     for(int i=0; i<n; i++)
//     {
//         sum += arr[i];

//         if(sum > ans)
//         {
//             ans = sum;
//         }

//         if(sum < 0)
//             sum = 0;
//     }
//     return ans;
// }

// printting subarray
int kadane(int arr[], int n)
{
    int sum = 0;
    int ans = INT_MIN;
    int start = 0;
    int ansStart = -1;
    int ansEnd = -1;

    for(int i=0; i<n; i++)
    {
        if(sum == 0) 
            start = i;

        sum += arr[i];

        if(sum > ans)
        {
            ans = sum;

            ansStart = start;
            ansEnd = i;
        }

        if(sum < 0)
            sum = 0;
    }

    cout << "The subArray is: [";
    for(int i=ansStart; i<= ansEnd; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " ]";
    cout << endl;

    return ans;
}


int main()
{
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = 9;

    cout << kadane(arr, n) << endl;
}