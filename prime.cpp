#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int number)
{
    if (number % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 10403;
    if (is_prime(n))
    {
        cout << n << " is prime";
    }
    else
    {
        cout << n << " is composite";
    }
}