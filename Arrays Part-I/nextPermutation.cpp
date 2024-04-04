#include <bits/stdc++.h>
using namespace std;

vector<int> nextP(vector<int> &a)
{
    int n = a.size();
    int ind = -1;

    for(int i=n-2; i>=0; i--)
    {
        if(a[i] < a[i+1])
        {
            ind = i;
            break;
        }
    }

    if(ind == -1)
    {
        reverse(a.begin(), a.end());
        return a;
    }

    for(int i=n-1; i>=0; i--)
    {
        if(a[i] > a[ind])
        {
            swap(a[i], a[ind]);
            break;
        }
    }

    reverse(a.begin() + ind + 1, a.end());

    return a;
}


int main()
{
    vector<int> a = {2, 3, 1};
    vector<int> ans = nextP(a);

    for(auto it: ans)
    {
        cout << it << " ";
    }
    cout << endl;


    return 0;

}