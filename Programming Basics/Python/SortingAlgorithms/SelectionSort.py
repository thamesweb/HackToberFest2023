def selection_sort(arr):
    for ele in range(0, len(arr)-1):
        min_val = ele
        for next_ele in range(ele+1, len(arr)):
            if arr[next_ele] < arr[min_val]:
                min_val = next_ele
        if min_val != ele:
            arr[min_val], arr[ele] = arr[ele], arr[min_val]

    return arr


print(selection_sort([1, 3, 4, 5, 2, 7, 6, 9]))
