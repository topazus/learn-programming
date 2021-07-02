#include <iostream>
#include <iomanip>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    double a = 101;
    cout.precision(12);
    cout << fixed;
    cout << sqrt(a) << endl;
    cout << sqrtf(a) << endl;
    cout << sqrtl(a) << endl;

    long long b = LLONG_MAX; // 2^63 - 1, or __LONG_LONG_MAX__
    cout << sqrt(b) << endl;
    cout << sqrtl(b) << endl;

    long long c = 999999999999999999;
    cout << sqrt(c) << endl;
    cout << sqrtl(c) << endl;

    return 0;
}