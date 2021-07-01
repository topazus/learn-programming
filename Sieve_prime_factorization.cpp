#include <bits/stdc++.h>
#include <cmath>
using namespace std;
const int len = 1001;

void Sieve_of_Eratosthenes(int n)
{
    // intialzie a bool array to store the value of is_prime
    bool num[n];
    memset(num, true, sizeof(num));
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (num[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                num[j] = false;
            }
        }
    }
    vector<int> prime;
    for (int i = 2; i <= n; i++)
    {
        if (num[i])
        {
            prime.push_back(i);
        }
    }
    for (int i = 0; i <= prime.size() - 1; i++)
    {
        cout << prime[i] << " ";
    }
}

void least_prime_factor(int n)
{
    // intialize a vector to store least prime
    vector<int> least_prime(n + 1, 0);
    for (int i = 2; i < n; i++)
    {
        // if i is prime
        if (least_prime[i] == 0)
        {
            // least prime factor of the prime number is itself
            least_prime[i] = i;
            for (int j = i * i; j <= n; j += i)
            {
                // to gurantee that prime factor of the number is least
                // eg, 6 = 2 * 3
                if (least_prime[j] == 0)
                {
                    least_prime[j] = i;
                }
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        cout << "least prime factor " << i << ": " << least_prime[i] << "\n";
    }
}

void sieve(int n)
{
    int spf[len];
    // initialize the array and set all of its elements to 0
    fill_n(spf, len, 0);
    for (int i = 2; i < len; i++)
    {
        if (spf[i] == 0)
        {
            spf[i] = i;
            for (int j = i * i; j < len; j += i)
            {
                if (spf[j] == 0)
                {
                    spf[j] = i;
                }
            }
        }
    }

    vector<int> arr;
    cout << "prime factorization for " << n << " : ";
    while (n != 1)
    {
        arr.push_back(spf[n]);
        n /= spf[n];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 100;
    Sieve_of_Eratosthenes(n);
    least_prime_factor(n);
    sieve(n);
    return 0;
}