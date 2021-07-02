#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 8, 1, 3, 6};
    int len = *(&arr + 1) - arr;
    cout << "The length of the array is: " << len;
    return 0;
}