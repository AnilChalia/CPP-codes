#include<bits/stdc++.h>
using namespace std;
class Heap{
  public:
  int *arr;
  int caps;
  int n;

  Heap(int caps) {
    arr = new int[caps];
    this -> caps = caps;
    this -> n = 0;
  }

  void Insert(int val) {
    if(n == caps){
      cout <<"stack overflow:" << endl;
      return;
    }
    n++;
    int index = n;
    arr[index] = val;

    while(index > 1){
     int parent = index/2;
     if(arr[index] > arr[parent]){
      swap(arr[index],arr[parent]);
      index = parent;
     }
     else{
      break;
     }
    }
  }
   
   void print(){
    for(int i=1;i<n;i++){
      cout<<arr[i]<<" ";
    }cout<<endl;
   }

int Deletion() {
    int ans = arr[1];
    arr[1] = arr[n];
    n--;

    int i = 1;
    while (i < n) {
        int left = 2 * i;
        int right = 2 * i + 1;
        int largest = i;  // Fix the typo here

        if (left <= n && arr[largest] < arr[left]) {
            largest = left;
        }
        if (right <= n && arr[largest] < arr[right]) {
            largest = right;
        }

        if (largest == i) {
            break;
        } else {
            swap(arr[largest], arr[i]);
            i = largest;  // Fix here: update the value of i
        }
    }
    return ans;
  }
};

void Heapification(int *arr, int n, int index) {
    int left = 2 * index;
    int right = 2 * index + 1;
    int largestKaIndex = index;

    if (left <= n && arr[largestKaIndex] < arr[left]) {
        largestKaIndex = left;
    }
    if (right <= n && arr[largestKaIndex] < arr[right]) {
        largestKaIndex = right;
    }

    if (index != largestKaIndex) {
        swap(arr[largestKaIndex], arr[index]);
        Heapification(arr, n, largestKaIndex);  // Fix here: pass largestKaIndex instead of index
    }
}

void buildHeap(int arr[], int n) {
    for (int index = n / 2; index > 0; index--) {
        Heapification(arr, n, index);
    }
}


int main(){
  int n = 5;
  int arr[n] = {23,67,89,12,5};
  buildHeap(arr,n);

  cout << "printing heap: " << endl;
  for(int i=1; i<=n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Heap h(20);

  // h.Insert(12);
  // h.Insert(112);
  // h.Insert(62);
  // h.Insert(19);
  // h.Insert(82);
  // h.print();

  // cout <<"deleteing after heap:" << endl;
  // int ans = h.Deletion();
  // cout << ans << endl;
  //  h.print();




  return 0;
}