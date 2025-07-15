// #include<iostream>
// using namespace std;

// int main(){

//   // cout << "love" << endl << "babar " << '\n'cout<<"anil"<<endl;
   
//   //  integer
//    int a  = 23;
//    cout << a << endl;
//    cout << sizeof(a) << endl;
  
//   // character
//    char ch = 'A';
//    cout << ch << endl;
//    cout << sizeof(ch) << endl;
   
//   // float
//    float ff = 1.2;
//    cout << ff << endl;
//    cout << sizeof(ff) << endl;
  
//   // double
//    double p = 22;
//    cout << p << endl;
//    cout << sizeof(p) << endl;
  
//   // long
//    long num = 23;
//    cout << num << endl;
//    cout << sizeof(num) << endl;


//    int val = 125;
//    cout <<"here is:" << val << endl;

//   return 0;

// }






// #include<iostream>
// using namespace std;
// bool checkPrime(int n) {
//   for(int i=2;i<n; i++){
//     if(i%n == 0) {
//       return false;
//     }
//   }
//   return true;
// }

// int main(){
//   int n;
//   cin>>n;

//   for(int i=1;i<=n;i++){
//     bool ans = checkPrime(i);
//     if(ans){
//       cout<<i<<" ";
//     }
//   }


//   return 0;

// }




// #include<iostream>
// using namespace std;
// int main(){

//   // int n;
//   // cin >> n;

//   // n = n/2;
//   // cout << n << endl;

//   // return 0;

  


// }


#include<iostream>
using namespace std;
void fun(int &num,int k) {
  num&= (~(1<<k));
}
int main(){
   int num = 7;
   int k = 1;
   fun(num,k);
   cout << num << endl;
   return 0;


}
