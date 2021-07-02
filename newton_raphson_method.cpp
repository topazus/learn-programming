#include <iostream>
#include <cmath>
#include <iomanip>
#define EPSILON 1.0e-7
using namespace std;

double f(double x)
{
    return exp(x) + x - sqrt(2);
}

double deriv_f(double x)
{
    return exp(x) + 1;
}

void newton_raphson(double x)
{
    double h = f(x) / deriv_f(x);
    while (abs(h) >= EPSILON)
    {
        h = f(x) / deriv_f(x);
        x = x - h;
    }
    cout << "the root is " << setprecision(10) << x;
}

int main()
{
    double x0 = 1;
    newton_raphson(x0);
    return 0;
}