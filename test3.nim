var
  tup = (longestLength: 0, startingNumber: 2)

for i in 2..100:
  var
    num: int = i
    collatz_num: seq[int]
  while num != 1:
    collatz_num.add(num)
    if num mod 2 == 0:
      num = num div 2
    else:
      num = num * 3 + 1

  if collatz_num.len > tup.longestLength:
    tup.longestLength = collatz_num.len
    tup.startingNumber = collatz_num[0]

echo tup