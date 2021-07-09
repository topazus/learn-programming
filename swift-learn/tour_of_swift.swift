print("hello world")

// Use let to make a constant and var to make a variable.
// The value of a constant doesn’t need to be known at compile time,
// but you must assign it a value exactly once.
var a = 42
a = 50
let b = 1

let c: Double = 10
print("a=\(a), b=\(b), c=\(c)")

let len = 10
print("the length is " + String(len))

let sentence = """
sea,
flower.
"""

// arrays and dictionaries
var shoppingList = ["catfish", "water", "tulips"]
shoppingList[1] = "bottle of water"

var occupations = [
    "Malcolm": "Captain",
    "Kaylee": "Mechanic",
]
occupations["Jayne"] = "Public Relations"

shoppingList.append("blue paint")
print(shoppingList)
print(occupations)

let emptyArray: [String] = []
let emptyDictionary: [String: Float] = [:]

// control flow
let individualScores = [75, 43, 103, 87, 12]
var teamScore = 0
for score in individualScores {
    if score > 50 {
        teamScore += 3
    } else {
        teamScore += 1
    }
}

print(teamScore)

var optionalString: String?
print(optionalString == nil)
optionalString = "Hello"
print(optionalString == nil)

var optionalName: String?
var greeting = "Hello!"
if let name = optionalName {
    greeting = "Hello, \(name)"
} else {
    greeting = "Hello, everyone"
}

print(greeting)

// ?? operator to provide a default value
let nickname: String? = nil
let fullName: String = "John Appleseed"
let informalGreeting = "Hi \(nickname ?? fullName)"

let vegetable = "red pepper"
switch vegetable {
case "celery":
    print("Add some raisins and make ants on a log.")
case "cucumber", "watercress":
    print("That would make a good tea sandwich.")
case let x where x.hasSuffix("pepper"):
    print("Is it a spicy \(x)?")
default:
    print("Everything tastes good in soup.")
}

let interestingNumbers = [
    "Prime": [2, 3, 5, 7, 11, 13],
    "Fibonacci": [1, 1, 2, 3, 5, 8],
    "Square": [1, 4, 9, 16, 25],
]
var largest = 0
var number_class = ""
for (kind, numbers) in interestingNumbers {
    for number in numbers {
        if number > largest {
            number_class = kind
            largest = number
        }
    }
}

print(number_class, largest)

var n = 2
while n < 2 {
    n *= 2
}

print(n)

var m = 2
repeat {
    m *= 2
} while m < 2
print(m)

var total = 0
for i in 0 ..< 10 {
    total += i
}

print(total)

func greet(person: String, day: String) -> String {
    return "Hello \(person), today is \(day)."
}

let greet_one = greet(person: "Bob", day: "Tuesday")

func greet(_ person: String, on day: String) -> String {
    return "Hello \(person), today is \(day)."
}

let greet_two = greet("John", on: "Wednesday")

func calculateStatistics(scores: [Int]) -> (min: Int, max: Int, sum: Int) {
    var min = scores[0]
    var max = scores[0]
    var sum = 0

    for score in scores {
        if score > max {
            max = score
        } else if score < min {
            min = score
        }
        sum += score
    }
    return (min, max, sum)
}

let statistics = calculateStatistics(scores: [5, 3, 100, 3, 9])
print(statistics.sum)
print(statistics.2)

func returnFifteen() -> Int {
    var y = 10
    func add() {
        y += 5
    }
    add()
    return y
}

let fifteen = returnFifteen()
print(fifteen)

func makeIncrementer() -> ((Int) -> Int) {
    func addOne(number: Int) -> Int {
        return 1 + number
    }
    return addOne
}

var increment = makeIncrementer()
let increment_res = increment(7)
print(increment_res)

func hasAnyMatches(list: [Int], condition: (Int) -> Bool) -> Bool {
    for item in list {
        if condition(item) {
            return true
        }
    }
    return false
}

func lessThanTen(number: Int) -> Bool {
    return number < 10
}

var numbers = [20, 19, 7, 12]

var match_res = hasAnyMatches(list: numbers, condition: lessThanTen)

let multiplyThree = numbers.map { (number: Int) -> Int in
    let result = 3 * number
    return result
}

print(multiplyThree)

let isOdd = numbers.map { (number: Int) -> Int in
    if number % 2 != 0 {
        return 1
    } else {
        return 0
    }
}

print(isOdd)

let mappedNumbers = numbers.map { number in 3 * number }
print(mappedNumbers)

func isPositive(x: Int) -> Bool {
    if x > 0 {
        return true
    } else {
        return false
    }
}

// sort numbers in descending order
let sortedNumbers = numbers.sorted { $0 > $1 }
print(sortedNumbers)
