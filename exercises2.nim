import strutils as str

var
  num: int
  times = 0

echo "give a positive number:"
num = str.parseInt(readLine(stdin))

while num != 1:
  if num mod 2 == 0:
    num = num div 2
  else:
    num = num * 3 + 1
  times += 1
  echo "the ", times, " times, ", num

let fullName = "Felix Wang"

for i in fullName:
  case i
  of 'a', 'e', 'i', 'o', 'u':
    echo i
  else:
    discard

var nums: array[10, int]
for i in 0..9:
  nums[i] = 10 * (i + 1)
echo nums

for i in 0..9:
  if i mod 2 != 0:
    echo nums[i]

for i in 0..9:
  if i mod 2 == 0:
    nums[i] *= 5
echo nums


import strutils

var
  collatz_num: seq[int]
  num: int

echo "give a positive number:"
num = strutils.parseInt(readLine(stdin))
collatz_num.add(num)

while num != 1:
  if num mod 2 == 0:
    num = num div 2
  else:
    num = num * 3 + 1
  collatz_num.add(num)

echo "the length of sequence is ", collatz_num.len
echo "the sequence is ", collatz_num

var
  collatz_num: seq[int]
  tup = (longestLength: 0, startingNumber: 0)

for num in 2..100:
  while num != 1:
    if num mod 2 == 0:
      num = num div 2
    else:
      num = num * 3 + 1
    collatz_num.add(num)

  if collatz_num.len > tup.longestLength:
    tup.longestLength = collatz_num.len
    tup.startingNumber = collatz_num[0]
