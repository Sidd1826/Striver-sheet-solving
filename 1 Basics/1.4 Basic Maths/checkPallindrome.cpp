#include <iostream>
using namespace std;

int reverse(int n)
{
    int rev = 0;

    while(n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    return rev;
}

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    int ans = reverse(n);

    if(n == ans)
        cout << "Pallindrome" << endl;
    else
        cout << "Not a Pallindrome" << endl;

    return 0;
}