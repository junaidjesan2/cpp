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
int main()
{
    int n;
    cin >> n;
    Student student_data[n];
    for (int i = 0; i < n; i++)
    {
        cin >> student_data[i].name >> student_data[i].age >> student_data[i].rollNo >> student_data[i].marks;
    }
    for (int i = 0; i < n; i++)
    {
        cout << student_data[i].name << " " << student_data[i].age << " " << student_data[i].rollNo << " " << student_data[i].marks;
    }
    return 0;
}