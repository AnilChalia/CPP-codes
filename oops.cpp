// #include<bits/stdc++.h>
// using namespace std;
// // ENCAPSULATION::
// // class demo {
// //     private:
// //         //private member hidden from outside world
// //         int var;
         
// //     public:
// //         //to set the value of var
// //         void set_var(int temp)
// //         {
// //             var =temp;
// //         }
         
// //         //to get the value of var
// //         int get_var()
// //         {
// //             return var;
// //         }
// // };

// // INHERITENCE
// // class base_class{
// //     public:
// //     int data;
   
// //     //a function to set the value of data
// //     void set_data(int new_data){
// //         data = new_data;
// //     }

// //     //a function to get the value of data
// //     int get_data(){
// //         return data;
// //     }
// // };

// // //derivinf class from base class
// // class derived_class: public base_class{
// // public:
// //     int data2;
// //     void print_message(){
// //         cout<<"Method of derived class";
// //     }
// // };



// // implement classs
// class Student{
//    public:
//    int age;
//    string name;

//   //  default constructo
//   Student(){
//     cout << "hello default constructor:"<< endl;
//   }
//   //  parametrize constructo
//   Student(int age,string name){
//     this -> age = age;
//     this -> name = name;
//   }
//   // copy constructo srcobj s1 hoga
//   Student(const Student&srcobj){
//     this -> age = srcobj.age;
//     this -> name = srcobj.name;
//   }

// };

// int main(){
  
//   // 4 byte with one object in class
//   cout << sizeof(Student) << endl;

 

  



//   return 0;

// }

#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    bool is;
    bool kl;
    int age;
    int id;
    string name;

    Student(){
      cout <<" default constructor:" << endl;
    }
    Student(bool is,bool kl,int age,string name){
      this -> is = is;
      this ->kl = kl;
      this -> age = age;
      this -> name = name;
    }

    // copy ctor // data variable copy in copy cnstructor
    Student(const Student&srcobj){
      this -> age = srcobj.age;
      this -> name = srcobj.name;
      this -> kl = srcobj.kl;
    }
    

    void sleep(){
      cout << "sleeping: "<< endl;
    }
    void run(){
      cout << "runnning:" << endl;
    }
    void eat(){
      cout << "Eating:" << endl;
    }
};
int main(){
  // cout << sizeof(Student) << endl;
  Student s1;
  s1.age = 23;

  Student s2(1,1,34,"anil");
  cout << s2.age << endl;
  cout << s2.name << endl;



  return 0;
}