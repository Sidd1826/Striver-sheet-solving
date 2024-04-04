#include <bits/stdc++.h>
using namespace std;

void divisors(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
            cout << i << " ";
    }
}

void divisors1(int n)
{
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            cout << i << " ";
            if(i != n/i) cout << n/i << " ";
        }
    }   
}

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    divisors(n);
    cout << endl;
    divisors1(n);


    return 0;
}