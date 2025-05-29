#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, S;
        cin >> N >> S;
        int A[100];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        bool flag = false;

        for (int i = 0; i < N && !flag; i++)
        {
            for (int j = i + 1; j < N && !flag; j++)
            {
                for (int k = j + 1; k < N && !flag; k++)
                {
                    if (A[i] + A[j] + A[k] == S)
                    {
                        flag = true;
                    }
                }
            }
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
