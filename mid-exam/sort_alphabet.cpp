#include <iostream>
using namespace std;

int main()
{
    char st[100005];

    while (cin.getline(st, 100005))
    {
        int cnt[26] = {0};

        for (int i = 0; st[i] != '\0'; i++)
        {
            if (st[i] >= 'a' && st[i] <= 'z')
            {
                cnt[st[i] - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < cnt[i]; j++)
            {
                cout << (char)(i + 'a');
            }
        }
        cout << '\n';
    }

    return 0;
}
