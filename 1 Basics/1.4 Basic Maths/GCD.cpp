#include <iostream>
using namespace std;

// bf -- O(n)
int gcd(int a, int b)
{
    int ans;
    for(int i=1; i<=min(a, b); i++)
    {
        if(a%i == 0 && b %i ==0)
            ans = i;
    }
    return ans;
}

// optimal -- O(log min(a, b))
int gcd1(int a, int b)
{
    if(b == 0)
        return a;

    return gcd1(b , a%b);
}


int main()
{
    int n1;
    cout << "Enter Number 1: ";
    cin >> n1;

    int n2;
    cout << "Enter Number 2: ";
    cin >> n2;

    // cout << gcd(n1, n2);

    cout << gcd1(n1, n2) << endl;



    return 0;
}