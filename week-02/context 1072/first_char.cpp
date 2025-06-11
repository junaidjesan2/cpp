#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string text;
        getline(cin >> ws, text);
        string result;

        bool newWord = true;

        for (char c : text)
        {
            if (c == ' ')
            {
                newWord = true;
            }
            else if (newWord)
            {
                result += c;
                newWord = false;
            }
        }

        cout << result << endl;
    }
    return 0;
}
