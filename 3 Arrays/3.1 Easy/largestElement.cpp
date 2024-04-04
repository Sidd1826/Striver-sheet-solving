#include <iostream>
using namespace std;

int largest(int arr[], int n)
{
    int ans = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}

int main()
{
    int arr[] = {2, 5, 1, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << largest(arr, n) << endl;

    return 0;
}