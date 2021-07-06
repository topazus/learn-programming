proc bubble_sort[T](arr: var openArray[T]) =
    let n = arr.len
    for i in 0..<(n-1):
        var swapped = false
        for j in 0..<(n-i-1):
            if arr[j] > arr[j+1]:
                swap(arr[j], arr[j+1])
                swapped = true
        if swapped == false:
            break


var arr = @[64, 34, 25, 12, 22, 11, 90]
echo "array is: ", arr
bubble_sort(arr)
echo "sorted array: ", arr
