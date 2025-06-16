#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int result = 0;
    if (n < 6)
    {
        result = 1;
    }
    else
    {
        if (n % 5 != 0)
        {
            result = (n + 5 - 1) / 5;
        }
        else
        {
            result = n / 5;
        }
    }
    cout << result;
    return 0;
}