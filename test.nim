import math
const acc=1.0e-7

proc func(x: float): float =
    return (ln(x) + x - 3)
var a=func(10.0)
echo a