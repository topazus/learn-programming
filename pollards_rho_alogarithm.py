from itertools import count
from math import gcd
import sys

number = 600851475143
x = 2

for cycle in count(1):
    y = x
    print("loop", cycle)
    count = 1
    for i in range(2 ** cycle):
        x = (x * x + 1) % number
        factor = gcd(x - y, number)
        print("count =", count, "x =", x, "y =", y, "factor =", factor)
        count += 1
        if factor > 1:
            print("in loop", cycle, "factor is", factor)
            sys.exit()
