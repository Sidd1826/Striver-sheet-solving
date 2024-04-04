#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n, int k)
{
    int sum = 0;
    int ans = 0;

    for(int i=0; i<n; i++)
    {
        sum += arr[i];

        if(sum == k)
        {
            ans++;
        }

        if(sum < 0)
            sum = 0;
    }
    return ans;
}



int main()
{
    int arr[] = {3, 1, 2, 4};
    int n = 4;

    cout << kadane(arr, n, 6) << endl;
}