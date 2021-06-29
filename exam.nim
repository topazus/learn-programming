
var
  p1,p2,p3: tuple[x: float, y: float]

p1=(1.0, 5.0)
p2=(-7.0, 12.0)

p3.x = p1.x+p2.x
p3.y = p1.y+p2.y
echo p3

proc f(a: tuple[x: float, y: float]): tuple[x: float, y: float] =
  result = a

f((1.0, 5.0))