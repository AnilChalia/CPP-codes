// // #include<iostream>
// // using namespace std;
// // int main(){

// //   int n;
// //   cout << "enter the number of input:" << endl;
// //   cin >> n;
// //   int count  = 0;

// //   for(int i=1; i<n; i++ ){
// //     for(int j=1; j<n; j++) {
// //       cout << count << " ";
// //       count = count +1 ;
// //     }
// //     cout << endl;
// //   }


// //   return 0;
// // }

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n;



// // start pattern triangle
//   // for(int i=1; i<n; i++) {
//   //   for(int j=1; j<i; j++) {
//   //     cout << "*"<< " ";
//   //   }
//   //   cout<<endl;
//   // }


// // print row vise number
//   // for(int i=1; i<n; i++) {
//   //   for(int j=1; j<i; j++) {
//   //     cout << i <<" ";
//   //   }
//   //   cout<<endl;
//   // }

//   // int count  = 0;
//   // for(int i=1; i<n; i++){
//   //   for(int j=1; j<i; j++) {
//   //     cout << count <<" ";
//   //     count = count + 1;
//   //   }
//   // }

//   // r(int i=0; i<n; i++) {
//   //   for(int j=1; j<i; j++) {
//   //     cout << j << " ";
//   //   }
//   //   cout<< endl;
//   // }fo

// // 1
// // 23
// // 345
// // 4567
//   // for(int i=1; i<n; i++ ){
//   //   for(int j=i; j<2*i; j++) {
//   //     cout << j <<" ";
//   //   }
//   //   cout << endl;
//   // }

//   for(int i=0; i<n; i++) {
//     for(int j=i; j<n; j++) {
//       cout<<i-j+1<<" ";
//     }cout<<endl;
//   }




//   return 0;

// }


#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;

// 1
// 21
// 321
// 4321
  // for(int i=1; i<=n; i++) {
  //   for(int j=1; j<=i; j++){
  //     cout<< i-j + 1<<" ";
  //   }cout<<endl;
  // }
  
// AAA
// BBB
// CCC
//   for(int i = 1; i<=n; i++) {
//     for(int j=1; j<=n; j++) {
//       char ch = 'A' + i - 1;
//       cout << ch <<" ";
//     }cout<<endl;
//   }

// for(int i=1; i<=n; i++) {
//   for(int j=1; j<=n; j++) {
//     char start  = 'A';
//     cout<< start <<" ";
//     start = start + 1;
//   }
//   cout<<endl;
// }


// ABC
// BCD
// DEF
// for(int i=1; i<=n; i++) {
//   for(int j=1; j<=n; j++){
//     char ch = 'A'+i+j-2;
//     cout<<ch <<" ";
//   }
//   cout<<endl;
// }



// A
// BB
// CCC
// for(int i=1; i<=n; i++) {
//   for(int j=1; j<=i;j++){
//     char ch = 'A'+i-1; 
//     cout<<ch <<" ";
//   }
// cout<<endl;
// }

// for(int i=1; i<=n; i++){
//   for(int j=1;j<=i;j++){
//     char ch = 'A';
//     cout<< ch <<" ";
//     ch = ch +1;
//   }
//   cout<<endl;
// }

// A 
// BC 
// CDE 
// EFGH 
//    for(int i=1; i<=n; i++){
//     for(int j=1;j<=i;j++){
//       char ch = 'A' +i+j-2;
//       cout<<ch <<" ";
//     }cout<<endl;
//    }

// D 
// C D 
// B C D 
// A B C D
// for(int i=1; i<=n;i++){
//   char ch = 'A'+ n-i;
//   for(int j=1;j<=i;j++){
//     // int val = ch ;
//     cout<< ch <<" ";
//     ch = ch + 1;
//   }
//   cout<<endl;
// }

//     *
//    **
//   ***
//  ****
   








  return 0;

}