#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ups;
    for (auto c : s)
    {
        ups += toupper(c);
    }

    int e=0, g=0, y=0, p=0, t=0;
    for (auto c : ups)
    {
        if (c == 'E')
        {
            e++;
        }
        else if (c == 'G')
        {
            g++;
        }
        else if (c == 'Y')
        {
            y++;
        }
        else if (c == 'T')
        {
            t++;
        }
        else if (c == 'P')
        {
            p++;
        }
    }

    cout << min({e, g, y, p, t});
    return 0;
}