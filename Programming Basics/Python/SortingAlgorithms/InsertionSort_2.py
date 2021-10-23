def insertion_sort(arr):
    indexing_length = range(1, len(arr))

    for i in indexing_length:
        value_to_sort = arr[i]

        while arr[i-1] > value_to_sort and i > 0:
            arr[i], arr[i-1] = arr[i-1], arr[i]
            i = i - 1

    return arr


print(insertion_sort([2, 5, 3, 4, 6]))
