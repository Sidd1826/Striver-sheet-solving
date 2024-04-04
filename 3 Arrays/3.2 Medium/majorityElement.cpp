#include <bits/stdc++.h>
using namespace std;

// bf -- O(n2)
// int majority(int arr[], int n)
// {
//     int size = n/2;

//     for(int i=0; i<n; i++)
//     {
//         int cnt = 0;
//         for(int j=0; j<n; j++)
//         {
//             if(arr[j] == arr[i])
//             {
//                 cnt++;
//             }
//         }

//         if(cnt > size)
//         {
//             return arr[i];
//         }
//     }
//     return -1;
// }

// optimal -- O(n) + O(n)
int majority(int arr[], int n)
{
    int cnt = 0;
    int el;

    for(int i=0; i<n; i++)
    {
        if(cnt == 0)
        {
            cnt = 1;
            el = arr[i];
        }

        else if(el == arr[i])
            cnt++;

        else    
            cnt--;
    }
        
    int cnt1 = 0;
    for(int i=0; i<n; i++)
    {
        if(el == arr[i])
            cnt1++;
    }

    if(cnt1 > (n/2))
        return el;
    return -1;
}

int main()
{
    int arr[] = {3, 2, 3};
    int n = 3;

    cout << majority(arr, n) << endl;
}