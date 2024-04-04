#include <bits/stdc++.h>
using namespace std;

// T.c -- O((n1+n2)log(n1+n2))
// s.c -- O(n1+n2)
vector<int> unionArrays(int arr1[], int arr2[], int n1, int n2)
{
    set <int> s;
    vector<int> Union;

    for(int i=0; i<n1; i++)
    {
        s.insert(arr1[i]);
    }

    for(int i=0; i<n2; i++)
    {
        s.insert(arr2[i]);
    }

    for(auto &it: s)
        Union.push_back(it);

    return Union;
}

vector<int> unionArrays1(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0; 
    int j = 0;
    vector<int> Union;

    while(i < n1 && j < n2)
    {
        if(arr1[i] <= arr2[j])
        {
            if(Union.size() == 0 || Union.back() != arr1[i])
            {
                Union.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if(Union.size() == 0 || Union.back() != arr2[j])
            {
                Union.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i < n1)
    {
        if(Union.back() != arr1[i])
        {
            Union.push_back(arr1[i]);
        }
        i++;
    }

    while(j < n2)
    {
        if(Union.back() != arr2[j])
        {
            Union.push_back(arr2[j]);
        }
        j++;
    }
    return Union;
}

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,4,5};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    vector<int> ans = unionArrays1(arr1, arr2, n1, n2);

    for(auto &it: ans)
    {
        cout << it << " ";
    }

}