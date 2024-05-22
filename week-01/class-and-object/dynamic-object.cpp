#include<bits/stdc++.h>
using namespace std;

class Students
{
    public:
    int roll;
    int cls;
    double gpa;

    Students(int roll, int cls, double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};

Students *fun()
{
    Students *rahim= new Students(1,12,4.33);

    return rahim;
}

int main()
{  
    Students *res=fun();
    cout<< res->cls<<endl;
    return 0;
}