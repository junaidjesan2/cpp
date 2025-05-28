#include <bits/stdc++.h>
using namespace std;

class Students
{
public:
    int roll;
    int age;
    double cgpa;

    Students(int r, int a, double c)
    {
        roll = r;
        age = a;
        cgpa = c;
    }
};
int main()
{
    Students data(23, 17, 3.5);
    cout << data.age << " " << data.cgpa << " " << data.roll << endl;
    return 0;
}