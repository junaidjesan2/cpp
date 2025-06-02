#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int start = 0;
    int n = s.length();
    for (int i = 0; i <= n; i++)
    {
        if (i == n || s[i] == ' ')
        {
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;
        }
    }
    cout << s;
    return 0;
}