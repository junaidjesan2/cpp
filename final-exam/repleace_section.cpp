#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int cls;
    char section;
    int id;
    int math_mark;
    int english_mark;
};

int main()
{
    int n;
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_mark >> students[i].english_mark;
    }

    for (int i = 0; i < n / 2; i++)
    {
        int j = n - i - 1;
        char temp = students[i].section;
        students[i].section = students[j].section;
        students[j].section = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << endl;
    }

    return 0;
}
