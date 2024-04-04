#include <bits/stdc++.h>
using namespace std;

void name(int n)
{
    if(n == 0)
        return;

    cout << "Siddhant -- " << n << endl;
    name(n-1);
}

void onetoN(int i, int n)
{
    if(i > n)
        return;

    cout << i << endl;
    onetoN(i+1, n);
}

void NtoOne(int i, int n)
{
    if(i > n)
        return;

    NtoOne(i+1, n);
    cout << i << endl;
}

int sumN(int n)
{
    if(n < 1)
        return n;

    return n + sumN(n-1);
}

int fact(int n)
{
    if(n <= 1)
        return n;

    return n * fact(n-1);
}

void reverse(int arr[],int s, int e)
{
    if(s>=e)
        return;

    swap(arr[s], arr[e]);
    reverse(arr, s+1, e-1);
}

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool isPallindrome(string st, int i)
{
    int n = st.length();
    
    if(i >= n/2)
        return true;
    
    if(st[i] != st[n-i-1])
        return false;
    
    return isPallindrome(st, i+1);
}

int fib(int n)
{
    if(n<=1)
        return n;

    return fib(n-1) + fib(n-2);
}


int main()
{
    // int n;
    // cout << "Enter Number: ";
    // cin >> n;

    // name(n);

    // onetoN(1, n);
    // NtoOne(1, n);

    // cout << sumN(n) << endl;

    // cout << fact(n) << endl;

    // int arr[] = {1, 2, 3, 4, 5};
    // int n = 5;
    // print(arr, n);
    // reverse(arr, 0, n-1);
    // print(arr, n);

    string s = "A man, a plan, a canal: Panama";
    int n = s.length();

    for(int i=0; i<=n; i++)
    {   
        cout << s[i];
    }
    cout << endl;

    cout << isPallindrome(s, 0) << endl;

    return 0;

    // for(int i=0; i<n; i++)
    // {
    //     cout << fib(i) << endl;
    // }

}
