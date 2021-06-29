proc findBiggest(a: seq[int]): int =
  var max = a[0]
  for num in a:
    if num > max:
      max = num
  return max

var d = @[1, 2, -2]
echo findBiggest(d)

proc findMax2(a, b: int): int =
  if a > b:
    result = a
  else:
    result = b

proc findMax3(a, b, c: int): int =
  result = findMax2(findMax2(a , b), findMax2(b, c))

var max3 = findMax3(11, -48, 47)
echo max3

proc addTuple(p1, p2: tuple[x: float, y: float]): tuple[x: float, y: float] =
  result = (p1.x + p2.x, p1.y + p2.y)

var res = addTuple((1.0, 5.0), (-7.0, 12.0))
echo res

proc tick() =
  echo "tick"

proc tock() =
  echo "tock"

var
  times = 0

while times <= 20:
  tick()
  tock()
  times += 2