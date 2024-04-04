#include <bits/stdc++.h>
using namespace std;

// bf -- tc -- O(n2)  sc -- O(n)
// vector<int> leaderArray(int arr[], int n)
// {
//     vector<int> ans;

//     for(int i=0; i<n; i++)
//     {
//         bool leader = true;
//         for(int j=i+1; j<n; j++)
//         {
//             if(arr[j] > arr[i])
//             {
//                 leader = false;
//                 break;
//             }
//         }

//         if(leader == true)
//             ans.push_back(arr[i]);
//     }
//     return ans;
// }


vector<int> leaderArray(int arr[], int n)
{
    vector<int> ans;

    int maxi = arr[n-1];
    ans.push_back(arr[n-1]);

    for(int i=n-2; i>=0; i--)
    {
        if(arr[i] > maxi)
        {
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }
    return ans;
}

int main()
{
    int arr[] = {10, 22, 12, 3, 0, 6};
    int n = 6;

    vector<int> ans = leaderArray(arr, n);

    for(int i=ans.size()-1; i>=0; i--)
    {
        cout << ans[i] << " ";
    }


}