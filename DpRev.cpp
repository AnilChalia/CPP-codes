// // #include<bits/stdc++.h>
// // using namespace std;
// // int Solveusingrec(int n,int k){
// //   if(n == 1){
// //     return k;
// //   }
// //   if(n == 2){
// //     return (k+k*(k-1));
// //   }

// //   int ans = (Solveusingrec(n-1,k) + Solveusingrec(n-2,k))*(k-1);
// //   return ans;
// // }
// // int main(){
// //   int n = 3;
// //   int k = 3;

// //   int ans = Solveusingrec(n,k);
// //   cout << ans << endl;
// //   return 0;
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int Solve(int capacity,int wt[],int profit[],int i,int n){
// //   // bc
// //   if(i == n-1){
// //     if(wt[i] <= capacity){
// //       return profit[i];
// //     }else{
// //       return 0;
// //     }
// //   }

// //   // include
// //   int include = 0;
// //   if(wt[i] <= capacity){
// //     include = profit[i] + Solve(capacity-wt[i],wt,profit,i+1,n);
// //   } 
// //   // exclude
// //   int exclude = 0;
// //   exclude = 0 + Solve(capacity,wt,profit,i+1,n);
// //   int ans = max(include,exclude);
// //   return ans;


// // }
// // int main(){
// //   int capacity = 50;
// //   int wt[] = {10,20,30};
// //   int profit[] = {60,100,120};
// //   int n = 3;
// //   int index = 0;

// //   int ans = Solve(capacity,wt,profit,index,n);
// //   cout << ans << endl;


// //   return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// class Heap{
// public:
//    int *arr;
//    int size;
//    int capacity;

//    Heap(int capacity){
//     arr = new int[capacity];
//     size = 0;
//    }

//    void Insert(int val){
//     if(size == capacity){
//       cout<<"stack overflow:" << endl;
//       return;
//     }
//     size++;
//     arr[index] = val;

//     // heapification
//     while(index > 1){
//       int pi = index/2;
//       if()
//     }

//    }
// };
// int main(){





//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Heap {
public:
    int *arr;
    int size;
    int capacity;

    Heap(int capacity) {
        arr = new int[capacity + 1]; // Adjusting for 1-based indexing
        this->size = 0;
        this->capacity = capacity;
    }

    void Insertion(int val) {
        if (size == capacity) {
            cout << "Heap overflow:" << endl;
            return;
        }

        size++;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parenti = index / 2;
            if (arr[index] > arr[parenti]) {
                swap(arr[index], arr[parenti]);
                index = parenti;
            } else {
                break;
            }
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int Delete() {
        if (size == 0) {
            cout << "Heap underflow:" << endl;
            return -1;
        }

        int ans = arr[1];
        arr[1] = arr[size];
        size--;

        // heapify
        int index = 1;
        while (index <= size) {
            int lefti = 2 * index;
            int righti = 2 * index + 1;
            int largest = index;

            if (lefti <= size && arr[largest] < arr[lefti]) {
                largest = lefti;
            }
            if (righti <= size && arr[largest] < arr[righti]) {
                largest = righti;
            }

            // no change
            if (index == largest) {
                break;
            } else {
                swap(arr[index], arr[largest]);
                index = largest;
            }
        }
        return ans;
    }
};

void Heapify(int *arr,int n,int index) {
   int Leftindex = 2*index;
   int rightindex = 2*index+1;
   int largest = index;
   if(largest <= n && arr[Leftindex] > largest){
    largest = Leftindex;
   }
   if(largest <= n && arr[rightindex] > largest){
    largest = rightindex;
   }

   if(index != largest) {
    swap(arr[index],arr[largest]);
    index = largest;
    Heapify(arr,n,index);
   }
}

// buildheap
void BuildHeap(int arr[],int n) {
  for(int index = n/2; index > 0; index--){
     Heapify(arr,n,index);
  }
}

void HeapSort(int arr[],int n){
  while(n!=1){
    swap(arr[1],arr[n]);
    n--;
    Heapify(arr,n,1);
  }
}

int main() {
    int arr[] = {-1,5,20,15,10,25};
    int n = 5;
    BuildHeap(arr,n);

    cout << "printing the heap:" << endl;
    for(int i=1; i<=n; i++) {
      cout << arr[i] <<" ";
    }cout << endl;

    HeapSort(arr,n);
    cout <<"printing the heap sort:" << endl;
    for(int i=1; i<=n; i++) {
      cout << arr[i] <<" ";
    }cout << endl;


    // Heap h(20);
    // h.Insertion(10);
    // h.Insertion(20);
    // h.Insertion(5);
    // h.Insertion(11);
    // h.Insertion(6);

    // cout << "Printing the content of the heap:" << endl;
    // h.print();

    // int ans = h.Delete();
    // cout <<"dleted elemnt is:" << ans << endl;

    return 0;
}
