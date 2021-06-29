import strutils, sequtils, math

let contents = readFile("people.txt")
echo contents

let people = contents.splitLines()
echo people

let contents_strip = readFile("people.txt").strip()
echo contents_strip

let people_strip = contents_strip.splitLines()
echo people_strip

echo "year of birth:"
var birthYear = readLine(stdin).parseInt()

var age = 2021 - birthYear
echo age

var
  strNums = readFile("numbers.txt").strip().splitLines()
  nums = strNums.map(parseFloat)

var
  sumNums = sum(nums)
  average = sumNums / nums.len.float

echo sumNums, " ", average

# reverse the string
proc reverseStr(a: string): string =
  for i in countdown(a.len - 1, 0):
    result.add(a[i])

var rev_str = reverseStr("Nim-lang")
echo rev_str