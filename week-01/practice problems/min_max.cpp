#include <iostream>

using namespace std;

int main() {
    long long A, B, C;
    cin >> A >> B >> C;

    long long min_val;
    long long max_val;

    min_val = A;
    if (B < min_val) {
        min_val = B;
    }
    if (C < min_val) {
        min_val = C;
    }

    max_val = A;
    if (B > max_val) {
        max_val = B;
    }
    if (C > max_val) {
        max_val = C;
    }

    cout << min_val << " " << max_val << endl;

    return 0;
}