// #include<bits/stdc++.h>
// using namespace std;
// class Heap{
//   public:

//   int *arr;
//   int size;
//   int capacity;

//   Heap(int capacity){
//     this -> arr = new int[capacity];
//     this -> size = 0;
//     this -> capacity = capacity;
//   }

//   void Insert(int val) {
//     if(size == capacity) {
//       cout << "heap is overflow:" << endl;
//       return;
//     }

//     size++;
//     int index = size;
//     arr[index] = val;

//     while(index > 1) {
//       int parenti = index/2;
//       if(arr[index] > arr[parenti]){
//         swap(arr[index],arr[parenti]);
//         index = parenti;
//       }
//       else{
//         break;
//       }
//     }
//   }

// void  deleteElement() {
//     int answer = arr[1];
//     arr[1] = arr[size];
//     size--;

//     int index = 1;
//     while (index < size) {
//         int lefti = 2 * index;
//         int righti = 2 * index + 1;
//         int largerChildIndex = index;

//         if (lefti <= size && arr[index] < arr[lefti]) {
//             largerChildIndex = lefti;
//         }
//         if (righti <= size && arr[largerChildIndex] < arr[righti]) {
//             largerChildIndex = righti;
//         }

//         if (index == largerChildIndex) {
//             break;
//         } else {
//             swap(arr[index], arr[largerChildIndex]);
//             index = largerChildIndex;
//         }
//     }
//     return answer;
// }

//   void print(){
//     for(int i=1; i<=size; i++){
//       cout << arr[i] <<" ";
//     }
//     cout << endl;
//   }

// };
// int main(){
//   Heap h(30);
//   h.Insert(12);
//   h.Insert(11);
//   h.Insert(233);
//   h.Insert(9);

//   h.print();

  
//   return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
  
 unordered_map<string,int> map;
 map<string,,int> q("love",23);
 pair<string,int> r;
 r.first = "ajirjr";
 r.second = 89;







  return 0;
}