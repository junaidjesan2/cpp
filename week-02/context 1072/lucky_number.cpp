#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int flag = 0;
    for (char c : n)
    {
        if (c == '4' || c == '7')
        {
            flag++;
        }
    }
    if (flag == 7 || flag == 4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
        return 0;
    }
    return 0;
}