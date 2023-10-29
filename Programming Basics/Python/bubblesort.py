def bubblesort(arr):
    for i in range(len(arr)):
        print(arr)
        for j in range(0, len(arr)-i-1):
            print(arr)
            if arr[j] > arr[j+1]:
                swap = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = swap
    return arr

arr = [2,12,4,0,1]
bubblesort(arr)