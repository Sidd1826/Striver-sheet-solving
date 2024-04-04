#include <iostream>
using namespace std;

int buySell(int arr[], int n)
{
    int maxPro = 0;
    int minPrice = INT8_MAX;

    for(int i=0; i<n; i++)
    {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    return maxPro;
}


int main()
{
    int arr[] = {7,1,5,3,6,4};
    int n = 6;

    cout << buySell(arr, n) << endl;

    return 0;
}