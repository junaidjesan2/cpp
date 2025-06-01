#include <iostream> // Required for input/output operations

using namespace std; // Use the standard namespace

int main()
{
    int N;
    cin >> N; // Read the number of elements

    long long max_num;
    long long current_num;

    cin >> max_num;

    for (int i = 1; i < N; ++i)
    {
        cin >> current_num;

        if (current_num > max_num)
        {
            max_num = current_num;
        }
    }

    cout << max_num;

    return 0;
}