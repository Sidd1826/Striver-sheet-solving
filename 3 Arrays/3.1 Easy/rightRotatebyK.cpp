#include <iostream>
using namespace std;

// bruteforce -- O(n * k)
void rightRotate(int arr[], int n, int k)
{
    while(k != 0)
    {
        int i = 0;
        int j= n-1;
        while(i<j)
        {
            swap(arr[i], arr[j]);
            i++;
        }
        k--;
    }
}

// optimal -- O(n)
void reverse(int arr[], int start, int end)
{
    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rightRotate1(int arr[], int n, int k)
{
    reverse(arr, 0, n-k-1);

    reverse(arr, n-k, n-1);

    reverse(arr, 0, n-1);
}

void leftRotate(int arr[], int n, int k)
{
    reverse(arr, 0, k-1);

    reverse(arr, k, n-1);

    reverse(arr, 0, n-1);
}


void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;

    print(arr, n);

    rightRotate(arr, n, 2);

    print(arr, n);

    // 2 baar isliye kiya bcoz pehle se ek baar right rotate kiya hai
    leftRotate(arr, n, 2);
    leftRotate(arr, n, 2);

    print(arr, n);
}