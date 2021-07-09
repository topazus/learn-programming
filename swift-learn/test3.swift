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
