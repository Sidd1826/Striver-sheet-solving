#include <iostream>
using namespace std;

int buySellStock(int arr[], int n)
{
    int maxPro = 0;
    int mini = INT16_MAX;

    for(int i=0; i<n; i++)
    {
        mini = min(mini, arr[i]);
        maxPro = max(maxPro, arr[i] - mini);
    }
    return maxPro;
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};

    int n = sizeof(arr)/ sizeof(arr[0]);

    cout << "Max Profit is: " << buySellStock(arr, n) << endl;

    return 0;

}