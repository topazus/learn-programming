func commonElements<T: Sequence, U: Sequence>(_ lhs: T, _ rhs: U) -> [Int]
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

let commonElem = commonElements([1, 2, 3], [1, 3, 2])
print(commonElem)
