#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int flag = 0;
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - 1 - i])
        {
            flag += 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}