#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int ct = 0;

        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == s[i + 1])
            {
                s[i + 1] = s[i + 2];
                ct++;
                i += 2;
            }
            else
            {
                ct++;
            }
        }
        cout << ct << endl;
    }
    return 0;
}