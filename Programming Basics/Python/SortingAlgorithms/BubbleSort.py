def bubble_sort(arr):
    for numbers in range(len(arr)-1, 0, -1):
        for times in range(numbers):
            if arr[times] > arr[times + 1]:
                tmp = arr[times]
                arr[times] = arr[times + 1]
                arr[times+1] = tmp


arr = [5, 4, 2, 7, 8]
bubble_sort(arr)
print(arr)
