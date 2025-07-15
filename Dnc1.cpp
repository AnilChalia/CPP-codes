#include<bits/stdc++.h>
using namespace std;
void MergeArray(int arr[],int start,int end,int mid) {
  int LeftLength = mid - start + 1;
  int RightLength = end - mid;

  // copy value wiht size of left and right
  int *LeftArray = new int[LeftLength];
  int *RightArray = new int[RightLength];
  // copy values in left and right array
  int k = start;
  for(int i=0; i<LeftLength; i++){
    LeftArray[i] = arr[k];
    k++;
  }
  k = mid+1;
  for(int i=0; i<RightLength; i++){
    RightArray[i] = arr[k];
    k++;
  }

  // actual logic
  int i = 0;
  int j = 0;
  // actual arr me merging stored because mainindex start = with start index
  int MainIndex = start;
  while(i < LeftLength && j < RightLength){
    if(LeftArray[i] < RightArray[j]){
      arr[MainIndex] = LeftArray[i];
      i++;
    }else{
      arr[MainIndex] = RightArray[j];
      j++;
    }
    MainIndex++;
  }
  // copy exscost values
  while(i < LeftLength){
    arr[MainIndex] = LeftArray[i];
    i++;
    MainIndex++;
  }
  while(j < RightLength){
    arr[MainIndex] = RightArray[j];
    j++;
    MainIndex++;
  }
  // delte default array
  delete[] LeftArray;
  delete[] RightArray;
}
void MergeSort(int arr[], int start, int end) {
    // base case
    if (start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;
    MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);
    MergeArray(arr, start, end,mid);
}

int main() {
    int arr[] = {2, 1, 6, 9, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int e = n - 1;
    cout <<"befor e merge sort array is:" << endl;
    for(int i=0; i<n; i++){
      cout << arr[i] <<" ";
    }cout<<endl;
    MergeSort(arr, s, e);
    cout << "After merge sort:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
