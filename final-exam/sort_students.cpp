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

bool cmp(Student a, Student b)
{
    int total_a = a.math_mark + a.english_mark;
    int total_b = b.math_mark + b.english_mark;

    if (total_a != total_b)
        return total_a > total_b;
    else
        return a.id < b.id;
}

int main()
{
    int n;
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_mark >> students[i].english_mark;
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << " "
             << students[i].math_mark << " " << students[i].english_mark << endl;
    }

    return 0;
}
