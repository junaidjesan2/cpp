#include <iostream>
using namespace std;

int main()
{
    long long X, Y;
    std::cin >> X >> Y;
    long long summation = X + Y;
    long long multiplication = X * Y;
    long long subtraction = X - Y;
    std::cout << X << " + " << Y << " = " << summation << std::endl;
    std::cout << X << " * " << Y << " = " << multiplication << std::endl;
    std::cout << X << " - " << Y << " = " << subtraction << std::endl;
    return 0;
}
