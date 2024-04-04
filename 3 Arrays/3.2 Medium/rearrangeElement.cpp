#include <iostream>
#include <vector>
using namespace std;

vector<int> reArrange(int arr[], int n)
{
    vector<int> ans(n, 0);
    int posIndex = 0;
    int negIndex = 1;

    for(int i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            ans[negIndex] = arr[i];
            negIndex += 2;
        }

        else
        {
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        if(ans[i] == 0)
        {
            ans[i] = i + 1;
        }
    }

    return ans;
}


int main()
{
    int arr[] = {1,2,-3,-1,-2,-3};
    int n = 6;

    vector<int> ans = reArrange(arr, n);

    for(auto it: ans)
    {
        cout << it << " ";
    }


    return 0;
}