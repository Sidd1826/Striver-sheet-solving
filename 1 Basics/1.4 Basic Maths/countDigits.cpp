#include <iostream>
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

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    cout << count(n) << endl;

    return 0;
}