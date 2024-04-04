#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    int ans = 0;
    while(n != 0)
    {
        n = n / 10;
        ans++;
    }
    return ans;
}

bool armstrong(int n)
{
    int ognum = n;
    int cnt = count(n);
    int sum = 0;
    while(n != 0)
    {
        int digit = n%10;
        sum = sum + pow(digit , cnt);
        n = n/10;
    }

    return (sum == ognum);
}

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    if (armstrong(n))
    {
        cout << "Yes, it is an Armstrong Number\n";
    }
    else
    {
        cout << "No, it is not an Armstrong Number\n";
    }

    return 0;
}
