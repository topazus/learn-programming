for index, item in ["a", "b"].pairs:
    echo item, " at index ", index
# => a at index 0
# => b at index 1

# break statement leaves the innermost construct,
# unless a label of a block is given
block myblock:
    echo "entering block"
    while true:
        echo "looping"
        break # leaves the loop, but not the block
    echo "still in block"
echo "outside the block"

block myblock2:
    echo "entering block"
    while true:
        echo "looping"
        break myblock2 # leaves the block (and the loop)
    echo "still in block" # it won't be printed
echo "outside the block"

#[ The when statement is almost identical to the if statement, but with these differences:
1. Each condition must be a constant expression since it is evaluated by the compiler.
2. The statements within a branch do not open a new scope.
3. The compiler checks the semantics and produces code only for the statements that
    belong to the first condition that evaluates to true.
]#
when system.hostOS == "windows":
    echo "running on Windows!"
elif system.hostOS == "linux":
    echo "running on Linux!"
elif system.hostOS == "macosx":
    echo "running on Mac OS X!"
else:
    echo "unknown operating system"


# computes fac(4) at compile time:
const fac4 = (var x = 1; for i in 1..4: x *= i; x)

# procedures
proc yes(question: string): bool =
    echo question, " (y/n)"
    while true:
        case readLine(stdin)
        of "y", "Y", "yes", "Yes": return true
        of "n", "N", "no", "No": return false
        else: echo "Please be clear: yes or no"

if yes("Should I delete all your important files?"):
    echo "I'm sorry Dave, I'm afraid I can't do that."
else:
    echo "I think you know what the problem is just as well as I do."

proc sumTillNegative(x: varargs[int]): int =
    for i in x:
        if i < 0:
            return
        result = result + i

echo sumTillNegative() # echos 0
echo sumTillNegative(3, 4, 5) # echos 12
echo sumTillNegative(3, 4, -1, 6) # echos 7

proc printSeq(s: seq, nprinted: int = -1) =
    var nprinted = if nprinted == -1: s.len else: min(nprinted, s.len)
  for i in 0 ..< nprinted:
        echo s[i]

printSeq(@[1, 2, 3], 4)

proc divmod(a, b: int; res, remainder: var int) =
    res = a div b # integer division
    remainder = a mod b # integer modulo operation

var
    m, n: int
divmod(8, 5, m, n) # modifies x and y
echo m
echo n


# overloaded procedures
proc toString(x: int): string =
    result =
        if x < 0: "negative"
    elif x > 0: "positive"
    else: "zero"

proc toString(x: bool): string =
    result =
        if x: "yep"
    else: "nope"

assert toString(13) == "positive" # calls the toString(x: int) proc
assert toString(true) == "yep" # calls the toString(x: bool) proc

# iterator
iterator countup(a, b: int): int =
    var res = a
    while res <= b:
        yield res
        inc(res)

# data types
let
    i1 = 0     # x is of type ``int``
    i2 = 0'i8  # y is of type ``int8``
    i3 = 0'i64 # z is of type ``int64``
    i4 = 0'u   # u is of type ``uint``

var
    f1 = 0.0     # x is of type ``float``
    f2 = 0.0'f32 # y is of type ``float32``
    f3 = 0.0'f64 # z is of type ``float64``

# internal type representation
var
    myBool = true
    myCharacter = 'n'
    myString = "nim"
    myInteger = 42
    myFloat = 3.14
echo myBool, ":", repr(myBool)
# --> true:true
echo myCharacter, ":", repr(myCharacter)
# --> n:'n'
echo myString, ":", repr(myString)
# --> nim:0x10fa8c050"nim"
echo myInteger, ":", repr(myInteger)
# --> 42:42
echo myFloat, ":", repr(myFloat)
# --> 3.1400000000000001e+00:3.1400000000000001e+00
