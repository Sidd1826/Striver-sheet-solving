#include <iostream>
#include <vector>
using namespace std;

int missingNum(int arr[], int n)
{
    int sum1 = (n*(n+1))/2;

    int sum2 = 0;
    for(int i=0; i<n; i++)
    {
        sum2 += arr[i];
    }

    int mis = sum1 - sum2;

    return mis;
}


int main()
{
    int arr[] = {3,0,1};
    int n = 3;

    cout << missingNum(arr, n) << endl;
}