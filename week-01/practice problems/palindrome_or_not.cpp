#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = n / 2;
    int end = n - 1;
    int flag = 0;
    for (int i = 0; i <= start; i++)
    {
        if (arr[i] != arr[end])
        {
            flag = 1;
            break;
        }
        end--;
    }
    if (flag == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}