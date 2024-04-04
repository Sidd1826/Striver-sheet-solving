#include <iostream>
#include <vector>
using namespace std;

int consOne(int arr[], int n)
{
    int ans = 0;
    int maxi = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i] == 1)
            ans++;
        
        else    
            ans = 0;

        maxi = max(maxi, ans);
    }
    return maxi;
}


int main()
{
    int arr[] = {1, 1, 0, 1, 1, 1};
    int n = 6;

    cout << consOne(arr, n) << endl;
}