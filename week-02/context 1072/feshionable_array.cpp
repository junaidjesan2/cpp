#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int mn = *min_element(a.begin(), a.end());
        int mx = *max_element(a.begin(), a.end());

        if ((mn + mx) % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            // count even and odd numbers
            int evenCount = 0, oddCount = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                    evenCount++;
                else
                    oddCount++;
            }
            cout << min(evenCount, oddCount) << endl;
        }
    }
    return 0;
}
