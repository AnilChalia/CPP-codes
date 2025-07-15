/*  #include <bits/stdc++.h>
using namespace std;

int main() {
 

    char ch[] = "abcde"; // No need to specify the size
    cout << ch << endl;

    char *ptr;
    ptr = &ch[0]; // Assign the address of ch[0] to ptr
    cout << ptr << endl;

    //  int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    //  cout << "addres is :" << arr << endl;
    //  cout << "addres is :" << &arr[0] << endl;
    //  int *ptr = &arr[0];
    //  cout << "value is :" << *ptr << endl;
    //  (*ptr)++;
    //  *ptr = *ptr + 1;
    //  cout << *ptr <<  endl;

    //  cout <<"size of arr is:" << sizeof(arr) << endl;
    //  cout <<"size of arr is:" << sizeof(*ptr) << endl;
      

    //  int i = 9;
    //  int*ptr = &i;
    //  cout << "bfore:"<< i << endl;
    // (*ptr)++;
    //  cout << "after increasing:" << i << endl;
    //  int *srt  = ptr;
    //  cout << "ptr is" <<  *ptr << endl;
    //  cout << "srt is" << *srt << endl;


  // int i = 5;
  // int *ptr = 0;
  //  ptr = &i;
  //  cout << ptr << endl;;
  //  cout << *ptr;

//   int  i = 0;
//   int *ptr = &i;

//   cout << "address of  is : " << &i << endl;

// // value show using this type ponter in this lne 
//   cout << "adderess of s :" << *ptr << endl;

  //  double d = 4.2;
  //  double *ptr = &d;

  //  cout << *ptr << endl;
  //  cout << "size of pointer is :" << sizeof(d) << endl;
  //  cout << "size of pointer is :" << sizeof(ptr) << endl;

//   char ch[10] = "babbar";
//   cout << &ch[0];
//   char* cptr = &ch;

//   char ch[10] = "a";
//   char *cptr = ch;
//   cout << cptr;


//   int arr[5] = {1,2,3,4,5};
//   arr = arr + 1;




//   int a = 5;
//   int* p = &a;

//   p = p + 1;
//   cout << *p;
//   int* ptr = 0;
//   cout << *ptr << endl;


//   int a = 5;
//   cout << a << endl;
//   cout << "address of a : "<< &a << endl;
  

//   //pointer creation
//   int* ptr = &a;
//   //acessing value stored at address stored in ptr
//   cout << ptr << endl;
//   cout << "Accessing: " << *ptr << endl;
//   cout << &ptr << endl;






  return 0;
} */

// #include<bits/stdc++.h>
// using namespace std;
// void print(int *p){
//   cout << *p << endl;
// }
// void update(int *p){
//   *p = *p + 1;
// }
// int main(){
//   int v = 5;
//   int *p = &v;

//   print(p);
//   cout << "before update:" << *p << endl;
//   update(p);
//   cout <<"after update:"  << *p << endl;

//   return 0;

// }

#include<iostream>
using namespace std;
// is me arr[] yeh srf pointer h isme addrsss dtore h
void Solve(int arr[],int n){
  // cout << "size of Solve :" << sizeof(arr) << endl;
   
   cout << "Inside main arr: " << arr << endl;
   cout << "Inside main &arr: " << &arr << endl;
   
   *arr = *arr + 1;

}


int main(){



  

  // ERROR::::::::::::::::
  // int arr[5] = {1,2,3,4,5};
  // int *ptr = &ar  r;

  //  SOLVE:::::::::::::::
  //  int arr[5] = {1,2,3,4,5};
  //  int (*ptr)[5] = &arr; 
   
  //  int arr[5] = {1,2,3,4,5};
  // //  cout <<"size of:" << sizeof(arr) << endl;
  //  Solve(arr,5);

  //  for(int i =0; i<5; i++){
  //   cout  << arr[i] <<" ";
  //  }

  //  cout << "Inside main arr: " << arr << endl;
  //  cout << "Inside main &arr: " << &arr << endl;

  return 0;

}