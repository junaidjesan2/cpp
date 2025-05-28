#include <bits/stdc++.h>
using namespace std;
class First_class
{
public:
    int age;
    char name[50];
    int height;
};
int main()
{
    First_class val;
    val.age = 20;
    char temp[] = "John Doe";
    strcpy(val.name, temp);

    cout << val.age << " " <<val.name << endl;
    return 0;
}