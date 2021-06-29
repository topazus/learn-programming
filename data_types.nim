var
  letter: char = 'n'
  lang = "N" & "im"
  nLength: int = len(lang)
  boat: float
  truth: bool = false
let
  legs = 400
  arms = 2_000
  pi = 3.1416
const
  debug = true
  compileBadCode = false

# data structure
var
  child: tuple[name: string, age: int]
  today: tuple[sun: string, temp: float]

child = (name: "smith", age: 2)
today.sun = "overcast"
today.temp = 70.1

var
  drinks: seq[string]

drinks = @["water", "juice", "chocolate"]
drinks.add("milk")

if "milk" in drinks:
  echo "we have milk and ", drinks.len - 1, " other drinks."

let myDrink = drinks[2]
echo "my drink is ", myDrink, "."

type
  Color = enum cRed, cBlue, cGreen
  Direction = enum
    dNorth
    dWest
    dEast
    dSouth

var
  orient = dNorth
  pixel = cGreen

type
  DieFaces = range[1..20]
var
  my_roll: DieFaces = 13

type
  RollCounter = array[DieFaces, int]
  DirNames = array[Direction, string]
  Truths = array[42..44, bool]

var
  counter: RollCounter
  directions: DirNames
  possible: Truths

possible = [false, false, false]
possible[42] = true
echo possible

directions[dNorth] = "ahh. the great white north!"
directions[dWest] = "no, don't go there"
echo directions

my_roll = 13
counter[my_roll] += 1
echo counter

# IO and control flow
echo "read any good books lately?"
case readLine(stdin)
of "no", "No":
  echo "go to your local library."
of "yes", "Yes":
  echo "carry on, then."
else:
  echo "that's great, I assume."

import strutils as str
echo "I'm thinking of a number between 41 and 43. guess which"
let number: int = 42
var
  raw_guess: string
  guess: int

while guess != number:
  raw_guess = readLine(stdin)
  if raw_guess == "":
    continue
  guess = str.parseInt(raw_guess)
  if guess > number:
    echo "no, too big number"
  elif guess < number:
    echo "too small"
    continue
  else:
    echo "good guess"

for i, elem in ["yes", "no"]:
  echo elem, " is at index: ", i

for k, v in items(@[(person: "you", power: 100), (person: "me", power: 200)]):
  echo v

let myString = """
an <example>
`string` to
play with
"""

for line in splitLines(myString):
  echo line

for i, c in myString:
  if i mod 2 == 0:
    continue
  elif c == 'X':
    break
  else:
    echo c

type Answer = enum Yes, No

proc ask(question: string): Answer =
  echo question, "(y/n)"
  while true:
    case readLine(stdin)
    of "y", "Y", "yes", "Yes":
      return Answer.Yes
    of "n", "N", "no", "No":
      return Answer.No
    else:
      echo "please be clear: yes or no"

proc addSugar(amount: int = 2) =
  assert(amount > 0 and amount < 100, "crazy sugar")
  for a in 1..amount:
    echo a, " sugar"

case ask("would you like sugar in your tea")
of Yes:
  addSugar(3)
of No:
  echo "oh do take a little"
  addSugar()

proc strcmp(a, b: string): cint {.importc: "strcmp", nodecl.}
let cmp = strcmp("C?", "easy")
