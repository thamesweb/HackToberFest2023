#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

void merge(vector<int> &arr, vector<int> &aux, int start, int mid, int end) {
    int k = start;
    int i = start;
    int j = mid;
    
    while (i < mid || j < end) {
        if (i < mid && j >= end) {
            aux[k] = arr[i];
            i++;
            k++;
        } else if (i >= mid && j < end) {
            aux[k] = arr[j];
            k++;
            j++;
        } else if (arr[i] < arr[j]) {
            aux[k] = arr[i];
            i++;
            k++;
        } else if (arr[j] < arr[i]) {
            aux[k] = arr[j];
            k++;
            j++;
        }
    }

    for (int index = start; index < end; index++) {
        arr[index] = aux[index];
    }
}

int main() {
    vector<int> arr = {34, 12, 44, 11, 66, 33, 10, 1};
    int size = arr.size();
    vector<int> aux(size);

    for (int window = 1; window < size; window = window * 2) {
        for (int start = 0; start < size - window; start = start + (2 * window)) {
            int mid = start + window;
            int end = min(start + (2 * window), size);
            merge(arr, aux, start, mid, end); 
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ",";
    }

    return 0;
}


