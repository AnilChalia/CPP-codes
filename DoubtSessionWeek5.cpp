#include<bits/stdc++.h>
using namespace std;

int main(){


  int *pr;

// ERROR::::::::::::
  // cout << "*ptr:" << *ptr << endl;
  // cout << "ptr:" << ptr << endl;
  //   int arr[5] = {1,2,4,5,6};
  // a = a + 1;


// SOLVE::::::::::::::
  // int a;
  // int *ptr;
  // if(ptr != 0){
  //   a = *ptr;
  // }
  // cout << *ptr ;


  // char *ptr = "lovr";
  // ptr[4];

  // int arr[5] = {1,2,3,4,5};
  // // int *ptr = &arr;   ERROR:::: solve ->

  // int (*ptr)[5] = &arr;

  int x = 10;
  int *ptr = &x;
  // 0 answer -> (10 + 20 - 30) = 0
  cout << *ptr + 2**ptr - 3**ptr;










  return 0;


}