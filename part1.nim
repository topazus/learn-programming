let
  a = 11
  b = 4

echo "a + b = ", a + b
echo "a - b = ", a - b
echo "a * b = ", a * b
echo "a / b = ", a / b
echo "a div b = ", a div b
echo "a mod b = ", a mod b

echo ('a' < 'A')
echo ("abc" < "abc ")

let age = 22
echo (age mod 3 == 0)

let height_cm = 183
let height_inch = float(height_cm) / 2.53
echo "my height is ", height_inch, " inches."

let pipeDiameterInch = 3 / 8
let pipeDiameterCm = pipeDiameterInch * 2.54
echo "the diameter of pipe is ", pipeDiameterCm, " cm."

let firstName = "Felix"
let secondName = "Wang"
let fullName = firstName & " " & secondName
echo "my name is ", fullName

let isGreater = 400 * 2 > 3.14 * 8 * 30
echo "has Alice earned more than Bob? ", isGreater