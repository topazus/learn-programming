func isPositive(x: Int) -> Bool {
    if x > 0 {
        return true
    } else {
        return false
    }
}

var nums = [1, -2, -8, 7, -5]
let positive_res = nums.map { num in isPositive(num) }
print(positive_res)
