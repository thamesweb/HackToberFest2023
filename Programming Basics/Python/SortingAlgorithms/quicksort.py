def quick_sort(arr):
    length = len(arr)
    if length <= 1:
        return arr
    else:
        pivot = arr.pop()
        left_half = []
        right_half = []
        for num in arr:
            if num > pivot:
                right_half.append(num)
            else:
                left_half.append(num)

    return quick_sort(left_half) + [pivot] + quick_sort(right_half)


print(quick_sort([3, 4, 5, 6, 3, 2, 4, 1, 9]))





