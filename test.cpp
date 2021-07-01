#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void sieve(int n)
{
    const int len = 1001;
    int spf[len];
    fill_n(spf, len, 0);
    for (int i = 2; i <= len; i++)
    {
        if (spf[i] == 0)
        {
            spf[i] = i;
            for (int j = i * i; j <= len; j++)
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
        cout << n << " ";
        arr.push_back(spf[n]);
        cout << spf[n] << " ";
        n /= spf[n];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 50;
    sieve(n);

    return 0;
}