#include<bits/stdc++.h>
using namespace std;

int* sort_it(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a,a+n,greater<int>());
    return a;
}

int main()
{  
    int n;
    cin >> n;
    int a[n];
    
    
    int* arr=sort_it(a,n);

    for (int f = 0; f < n; f++)
    {
        cout << arr[f] <<" ";
    }
    return 0;
}