proc bubble_sort[T](arr: var openArray[T]) =
    n = arr.len
    for i in 0..<(n-1):
        swapped = false
        for j in 0..<(n-i-1):
            if arr[j] > arr[j+1]:
                swap(arr[j], arr[j+1])
                swapped = true
        if swapped == false:
            break
    echo "sort"
