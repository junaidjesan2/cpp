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
        // roll=r;
        // cls=c;
        // gpa=g;

        // (*this).roll=roll;
        // (*this).cls=cls;
        // (*this).gpa=gpa;

        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};

int main()
{  
    Students rahim(1,12,4.33);

    cout<< rahim.cls<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
    return 0;
}