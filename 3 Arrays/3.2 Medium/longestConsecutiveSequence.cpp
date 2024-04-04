#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int ele)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == ele)
        {
            return true;
        }
    }
    return false;
}

int longestSuccessiveElements(int arr[], int n)
{
    int longest =1;

    for(int i=0; i<n; i++)
    {
        int x = arr[i];
        int cnt = 1;

        while(linearSearch(arr, n, x+1) == true)
        {
            x = x + 1;
            cnt += 1;
        }

        longest = max(longest, cnt);
    }
    return longest;
}


int main()
{
    int arr[] = {100, 200, 1, 2, 3, 4};
    int n = 6;

    int ans = longestSuccessiveElements(arr, n);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}