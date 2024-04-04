#include <iostream>
#include <unordered_map>
using namespace std;

// Bruteforce -- O(n^2)
// int numAppear(int arr[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         int num = arr[i];
//         int cnt = 0;

//         for(int j=0; j<n; j++)
//         {
//             if(arr[j] == num)
//                 cnt++;
//         }

//         if(cnt == 1) return num;
//     }
//     return -1;
// }

// Better -- O(n) -- best case -- o(n) -- space
// int num(int arr[], int n)
// {
//     unordered_map<int, int> freq;

//     for(int i=0; i<n; i++)
//     {
//         freq[arr[i]]++;
//     }

//     for(auto it: freq)
//     {
//         if(it.second == 1)
//             return it.first;
//     }
//     return -1;
// }

// optimal
int num(int arr[], int n)
{
    int xorr = 0;

    for(int i=0; i<n; i++)
    {
        xorr = xorr ^ arr[i];
    }
    return xorr;

}

int main()
{
    int arr[] = {4,1,2,1,2};
    int n = 5;

    cout << num(arr, n) << endl;
}