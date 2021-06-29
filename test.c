#include <stdio.h>
#include <math.h>

int int_to_bin(int k)
{
  return (k == 0 || k == 1 ? k : ((k % 2) + 10 * int_to_bin(k / 2)));
}

int main()
{
  int num = 5;
  int res = int_to_bin(num);
  printf("%d", res);
}