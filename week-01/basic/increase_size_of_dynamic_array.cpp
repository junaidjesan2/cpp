#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int *b = new int[8];
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    b[5] = 10;
    b[6] = 30;
    b[7] = 100;
    delete[] a;
    for (int i = 0; i < 8; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}