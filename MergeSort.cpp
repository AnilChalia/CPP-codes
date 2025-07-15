#include<bits/stdc++.h>
using namespace std;

void Merge2Sorted(int arr[], int s, int e) {
    // find mid for divide array in two part
    int mid = s + (e - s) / 2;
// length of left and right part
    int leftPart = mid - s + 1;
    int rightPart = e - mid;

// create lft array allocate heap memory
    int *first = new int[leftPart];
// create rightn array
    int *second = new int[rightPart];

// copy value from original array into new arary
// k -> s copy value in left array
    int k = s;
    for (int i = 0; i < leftPart; i++) {
        first[i] = arr[k++];
    }
// copy k -> m + 1 value in rigthn part
    k = mid + 1;
    for (int i = 0; i < rightPart; i++) {
        second[i] = arr[k++];
    }

// left array is olraedy sorted rigth part already sorted
    int leftIndex = 0;
    int rghtIndex = 0;
// tnki main array mer traves kr pau
    k = s;

    // copy values in arrays
    while (leftIndex < leftPart && rghtIndex < rightPart) {
// agar left part ki value choti h snd array se to copy fist values in original array
        if (first[leftIndex] < second[rghtIndex]) {
            arr[k++] = first[leftIndex++];
        }
        else {
            arr[k++] = second[rghtIndex++];
        }
    }
    
    // copy value in arr 
    while (leftIndex < leftPart) {
        arr[k++] = first[leftIndex++];
    }
    
    // copy values in arr   
    while (rghtIndex < rightPart) {
        arr[k++] = second[rghtIndex++];
    }
// deallocate heap memory
    delete[] first;
    delete[] second;
}

void MergeSort(int arr[], int s, int e) {
    if (s >= e) {
        return;
    }
    int mid = s + (e - s) / 2;
    // Left part Sort
    MergeSort(arr, s, mid);
    // Right part sort
    MergeSort(arr, mid + 1, e);
    // Merge 2 arrays
    Merge2Sorted(arr, s, e);
}

int main() {
    int arr[5] = {10, 3, 9, 11, 4};
    int n = 5;

    MergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
