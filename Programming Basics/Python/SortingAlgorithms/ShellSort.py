def shell_sort(arr):
    indexing_length = range(0, len(arr)-1)
    gap = 3
    for i in indexing_length:
        value_to_sort = arr[i + gap]

        while arr[i] > value_to_sort and i + gap < len(arr)-1:
            arr[i], arr[i+gap] = arr[i+gap], arr[i]
            i = i + gap

        gap = gap - 1

    return arr


print(shell_sort([3, 2, 5, 1, 6]))