#include <iostream>
#include <cmath>
#include <iomanip>
#define EPSILON 1.0e-7
using namespace std;

double f(double x)
{
    return sin(x) - x + 1;
}

void regula_falsi(double a, double b)
{
    if (f(a) * f(b) >= 0)
    {
        cout << "You did't assumed right the root is between a and b\n";
        return;
    }
    double c;
    while ((b - a) >= EPSILON)
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        if (f(c) == 0)
        {
            break;
        }
        else if (f(c) * f(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    cout << "the value of root is " << setprecision(20) << c;
}

int main()
{
    regula_falsi(0, 4);
    return 0;
}