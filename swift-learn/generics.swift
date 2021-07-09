// generics
func makeArray<Item>(repeating item: Item, numberOfTimes: Int) -> [Item] {
    var result: [Item] = []
    for _ in 0 ..< numberOfTimes {
        result.append(item)
    }
    return result
}

let knockArr = makeArray(repeating: "knock", numberOfTimes: 4)
print(knockArr)

enum OptionalValue<Wrapped> {
    case none
    case some(Wrapped)
}

var possibleInteger: OptionalValue<Int> = .none
possibleInteger = .some(100)
print(possibleInteger)

// judge the two arrays have common elements
func anyCommonElements<T: Sequence, U: Sequence>(_ lhs: T, _ rhs: U) -> Bool
    where T.Element: Equatable, T.Element == U.Element
{
    for lhsItem in lhs {
        for rhsItem in rhs {
            if lhsItem == rhsItem {
                return true
            }
        }
    }
    return false
}

let anyCommonElem = anyCommonElements([1, 2, 3], [3])

// get the common elements of two arrays
func commonElements<T: Sequence, U: Sequence>(_ lhs: T, _ rhs: U) -> [T.Element]
    where T.Element: Equatable, T.Element == U.Element
{
    var a: [T.Element] = []
    for lhsItem in lhs {
        for rhsItem in rhs {
            if lhsItem == rhsItem {
                a.append(lhsItem)
            }
        }
    }
    return a
}

let commonElem = commonElements([1, 2, 3], [4, 3, 2])
print(commonElem)

// use intersect() function in set
let fruitsArray = ["apple", "mango", "blueberry", "orange"]
let vegArray = ["tomato", "potato", "mango", "blueberry"]
let fruitsSet = Set(fruitsArray)
let vegSet = Set(vegArray)
let output = Array(fruitsSet.intersection(vegSet))
