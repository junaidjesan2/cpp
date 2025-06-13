#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string word = "";
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            word += s[i];
        }
        else
        {
            if (word == "Jessica")
            {
                flag = 1;
            }
            word = "";
        }
    }

    if (word == "Jessica")
    {
        flag = 1;
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
