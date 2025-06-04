#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int rollNo;
    int marks;
};
bool cmp(Student a, Student b)
{
    if (a.marks > b.marks)
    {
        return true;
    }
    else if (a.marks == b.marks)
    {
        if (a.rollNo < b.rollNo)
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    Student student_data[n];
    for (int i = 0; i < n; i++)
    {
        cin >> student_data[i].name >> student_data[i].age >> student_data[i].rollNo >> student_data[i].marks;
    }
    int max = INT_MAX;
    sort(student_data, student_data + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << student_data[i].name << " " << student_data[i].age << " " << student_data[i].rollNo << " " << student_data[i].marks << endl;
    }
    return 0;
}