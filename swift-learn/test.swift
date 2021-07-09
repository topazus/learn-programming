
var a = [1, 2, 3]
var b = [5, 7, 3]
var c: [Int] = []
for i in a {
    for j in b {
        if i == j {
            c.append(i)
        }
    }
}

print(c)
