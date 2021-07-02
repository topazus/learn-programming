import math
import algorithm
const len=1000

proc Sieve_of_Eratosthenes(n: int)=
    # initialize the array and fill all its elements with true
    var a: array[len, bool]
    a.fill(true)

    for i in 2..int(sqrt(n.float)):
        if a[i]:
            for j in countup(i*i, n, i):
                if a[j]:
                    a[j]=false

    var prime: seq[int] = @[]
    for i in 2..n:
        if a[i]:
            prime.add(i)
    echo prime

proc least_prime_factor(n: int)=
    var a: array[len, int]
    a.fill(0)
    for i in countup(2, int(sqrt(n.toFloat))):
        if a[i]==0:
            a[i]=i
            for j in countup(i*i, n, i):
                a[j]=i

    var num: seq[int]
    for i in 2..n:
        num.add(i)
    echo "the least prime factor is"
    echo num
    echo a[2 .. n]

var n=100
Sieve_of_Eratosthenes(n)
least_prime_factor(n)