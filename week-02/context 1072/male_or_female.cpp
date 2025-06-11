#include <iostream>
using namespace std;

int main()
{
    string username;
    cin >> username;

    char unique[100];
    int unique_count = 0;

    for (int i = 0; i < username.length(); i++)
    {
        bool is_unique = true;

        for (int j = 0; j < unique_count; j++)
        {
            if (username[i] == unique[j])
            {
                is_unique = false;
                break;
            }
        }

        if (is_unique)
        {
            unique[unique_count] = username[i];
            unique_count++;
        }
    }

    if (unique_count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
