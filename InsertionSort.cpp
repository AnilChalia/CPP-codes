#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& array) {
    int n = array.size();
    
    for (int i = 1; i < n; ++i) {
        int key = array[i];
        int j = i - 1;

        // Move elements of array[0..i-1] that are greater than key to one position ahead of their current position
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            --j;
        }

        array[j + 1] = key;
    }
}

int main() {
    vector<int> array = {12, 11, 13, 5, 6};
     
    cout << "Original array: ";
    for (int num : array) {
        cout << num << " ";
    }
    
    insertionSort(array);

        cout << "\nSorted array: ";
    for (int num : array) {
        cout << num << " ";
    }
}