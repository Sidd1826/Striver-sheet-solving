#include <bits/stdc++.h>
using namespace std;

// ?brueforce -- O(nlogn + n)  and space -- O(N)
int removeDuplicates(int arr[], int n)
{
    set<int> ans;

    for(int i=0; i<n; i++)
    {
        ans.insert(arr[i]);
    }
    
    int setSize = ans.size();
    int j=0;
    for(int i: ans)
    {
        arr[j++] = i;
    }
    return setSize;
}

// optimal -- O(n)
int remDuplicates(int arr[], int n)
{
    int i = 0;
    for(int j=1; j<n; j++)
    {
        if(arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main()
{
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    // int k = removeDuplicates(arr, n);
    int k = remDuplicates(arr, n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " "; 
    }

    return 0;
}