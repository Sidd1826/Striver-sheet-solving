#include <iostream>
using namespace std;

bool isValid(char ch)
{
    if((ch >= 'a' && ch <= 'z') && (ch >= 'A' && ch <= 'Z') && (ch >= 0 && ch <= 9))
    {
        return true;
    }
    return false;
}

char toLower(char ch)
{
    if((ch >= 'a' && ch <= 'z') && (ch >= 0 && ch <= 9))
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPallindrome(string s)
{
    int l = 0;
    int r = s.length()-1;

    while(l<=r)
    {
        if(s[l] != s[r])
            return false;
        else{
            l++;
            r--;
        }
    }
    return true;
}



int main()
{
    string s = "A man, a plan, a canal: Panama";
    int n = s.length();

    string temp = "";

    for(int i=0; i<n; i++)
    {
        if(isValid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    for(int i=0; i<temp.length(); i++)
    {
        temp[i] = toLower(temp[i]);
    }

    if(isPallindrome(temp))
        cout << " is a Pallindrome" << endl;
    else    
        cout << " not a Pallindrome" << endl;

}



