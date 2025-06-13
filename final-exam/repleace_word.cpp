#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;

        string result = "";

        for (int i = 0; i < s.size();)
        {
            if (i + x.size() - 1 < s.size() && s.substr(i, x.size()) == x)
            {
                result += "#";
                i += x.size();
            }
            else
            {
                result += s[i];
                i++;
            }
        }

        cout << result << endl;
    }

    return 0;
}