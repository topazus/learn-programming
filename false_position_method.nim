import math
const acc = 1.0e-7

proc f(x: float): float =
    return sin(x) - x + 1

proc bisection(a1, b1: float) =
    var
        a = a1
        b = b1
    if f(a1)*f(b1) >= 0:
        echo "You did't assumed right the root is between a and b\n"
        return
    var c: float
    while (b-a) >= acc:
        c = (a*f(b)-b*f(a)) / (f(b)-f(a))
        if f(c) == 0:
            break
        elif f(a)*f(c) < 0:
            b = c
        else:
            a = c
    echo "the value of root is ", c;

bisection(0.0, 4.0)
