proc selection_sort[T](arr: var openArray[T]) =
    let n = arr.len
    for i in 0..<n:
        var min_index = i
        for j in (i+1)..<n:
            if arr[j] < arr[min_index]:
                min_index = j
        swap(arr[min_index], arr[i])
    echo "sorted array: ", arr

var arr = @[64, 25, 12, 22, 11]
echo "array is:", arr
selection_sort(arr)
