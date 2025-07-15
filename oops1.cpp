#include<bits/stdc++.h>
using namespace std;
class Student{
  public:
// properties of student member function of class
  int id;
  int age;
  // string name;
  // int nos;

  double d;
  double f;
  char c;
  
// dfault constructo  no return type class value assign krne k liye by default garbage value assign ctor
  Student(){
    cout<<"const called:"<<endl;
  }

  // parameterize ctor 
  Student(int b ,int d){
    id = b;
    age = d;
    cout <<"parameterize ctor:" << endl;
  }

// functions behaviours
  void study(){
    cout <<"study:"<<endl;
  }
  void bunk(){
    cout<<"bunked:"<<endl;
  }
};

// inline functions 
inline vvoid NumberShow(int num){
  cout << num << endl;
}

int main(){
//  class classified with new object 
  // Student s1;
  // Student s2;
  // s1.age = 12;
  // s1.id = 3;
  // s1.name = "aman";

  // cout <<"size of class is:" << sizeof(Student) << endl;


// INLINE  FC 
  NumberShow(6);
  NumberShow(63);
  NumberShow(65);
  NumberShow(65);




  return 0;
}