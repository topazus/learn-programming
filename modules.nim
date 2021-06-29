import strutils
import math

let
  a = "My string with whitespace"
  b = '!'

echo a.split()
echo a.toUpperAscii()
echo b.repeat(5)

var
  c = 30.0
  cRadians = c.degToRad()

echo cRadians
echo sin(cRadians)

echo 2^5