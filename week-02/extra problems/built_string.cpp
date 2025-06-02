#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        string c = "";
        int lenA = a.size();
        int lenB = b.size();
        int minLen = min(lenA, lenB);

        for (int i = 0; i < minLen; i++)
        {
            c += a[i];
            c += b[i];
        }
        if (lenA > minLen)
        {
            c += a.substr(minLen);
        }

        if (lenB > minLen)
        {
            c += b.substr(minLen);
        }
        cout << c << endl;
    }
    return 0;
}