#include<bits/stdc++.h>
using namespace std;

// void print(int arr[],int n) {
//   for(int i=0; i<n; i++) {
//     cout <<arr[i]<<" ";
//   }cout<<endl;
// }

// vector:::
void Print (vector<int>&v) {
  for (int i=0; i<v.size(); i++) {
    cout<<v[i]<<" ";
  }cout<<endl;
}


int main() {

// static allocation::::
  //  int arr[5] = {1,2,3,5,6};
  //  print(arr,5);

// dynamic alloacation:::
  //  int n;
  //  cin>>n;
  //  int *arr = new int[n];
  //  for(int i=0; i<n; i++) {
  //   int data;
  //   cin>>data;
  //   arr[i]=data;
  //  }
  //  print(arr,n);




// vector:::::
   vector<int> v;
   v.push_back(2);
   v.push_back(1);
   v.push_back(30);
   v.push_back(39);
   v.push_back(45);
   v.push_back(3);
   v.push_back(8);
   v.push_back(6);
   Print(v);

   v.front();
   cout <<" size Of vector is :" << v.size() << endl;
   
   v.clear();

   cout <<" size Of vector is :" << v.size() << endl;



  return 0;
   
}