#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of patterns: " << endl;
  cin >> n;\
  






//     1 
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
//   for(int i=1;i<=n; i++) {
//     for (int s =0; s< n-i; s++) {
//       cout<<" ";
//     }
//     int c = 1;
//     for(int j=1; j<=i; j++){
//       cout << c <<" ";
//       c = c* (i-j)/j;
//     }
//     cout<<endl;
//   }




  //  1
  //  121
  //  12321
  //  121
  //  1
  // for(int i=1; i<n; i++){
  //   int j=1;
  //   for(;j<i+1;j++){
  //     cout<<j;
  //   }
  //   for(int r=j; r>=1;r--){
  //     cout<<r;
  //   }
  //   cout<<endl;
  // }


  // int count = 1;
  // for(int i=1; i<n; i++) {
  //   for (int j=1; j<=i; j++) {
  //     if(j==i){
  //     cout << count;
  //     }
  //     else{
  //     cout<<count<<"*";
  //     count++;
  //     }
  //   }
  //   cout<<endl;
  // }

  // int cnt = 1;
  // for(int i=n-1; i>=1; i--) {
  //   for (int j=1; j<=i; j++) {
  //     if(j==i){
  //     cout << count;
  //     }
  //     else{
  //     cout<<count<<"*";
  //     count++;
  //     }
  //   }
  //   cout<<endl;
  // }


    






  // 1
  // 2*3
  // 4*5*6
  // 4*5*6
  // 2*3
  // 1
  //  for (int i = 1; i <= n; i++) {
  //   int num = 1;
  //   for (int j = 1; j <= i; j++) {
  //     cout << num++;
  //     if (j < i) {
  //       cout << "*";
  //     }
  //     num++;
  //   }
  //   cout << endl;
  // }

  // for (int i = n-1; i >=1; i--) {
  //   int num = 1;
  //   for (int j = 1; j <= i; j++) {
  //     cout << num++;
  //     if (j < i) {
  //       cout << "*";
  //     }
  //     num++;
  //   }
  //   cout << endl;
  // }








  // *****1*****
  // ****2*2****
  // ***3*3*3***
  // **4*4*4*4**
  // for(int i=0; i<n; i++){
  //   for(int j=0;j<2*n-i;j++){
  //     cout<<"*";
  //   }
      
  //   for (int k = 1; k <= 2 * i - 1; k++) {
  //     if (k % 2 == 0) {
  //       cout << "*";
  //     } else {
  //       cout << i;
  //     }
  //   }

  //   for(int col = 0; col < 2*n - i; col ++) {
  //     cout <<"*";
  //   }
  //   cout<<endl;
  // }




  // for(int i=0; i<n; i++) {
  //   for(int s=0;s<n-i;s++){
  //     cout<<" ";
  //   }
  //   int j=1;
  //   for(; j<i+1;j++){
  //     cout<<j;
  //   }
  //   for(int r=j; r>=1;r--){
  //     cout<<r;
  //   }
  //   cout<<endl;
  // }



// 12345
// 2  5
// 3 5
// 45
// 5
//   // for(int i=0; i<n; i++) {
  //   for(int j=i+1; j<=n; j++) {
  //     if ( i == 0 || j == i+1 || j == n){
  //     cout<<j;
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }

  //   cout<<endl;
  // }


// 1
// 12
// 1 3
// 1  4
// 12345
//   for(int i=0; i<n; i++) {
//     for (int j=1; j<=i+1; j++) {
//       if (i == 0 || i == n-1) {
//         cout <<j;
//       }
//       else{
//         if(j == 1 || j == i+1) {
//           cout << j;
//         }
//         else{
//           cout<<" ";
//         }
//       }
//     }
//     cout<<endl;
//   }
  







// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
//     // invertde pyramid
//   for(int i=1;i<=n;i++){
//     for(int j=0;j<i+1;j++){
//       cout<<"*";
//     }
    
//     // inverted full pyranmid ulta
    
//     for(int s=0;s<2*n-2*i+2;s++){
          
//         if(s%2==1){
//           cout<<" ";
//         }  
//         else{
//           cout<<" ";
//         }
//     }
    
//     // inverted half pyramid ulta
    
//     for(int j=0;j<i+1;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }


//   // 2nd part
    

//     for(int i=0;i<n;i++){
//       for(int j=0;j<n-i;j++){
//         cout<<"*";
//       }

//  for (int s = 1; s <= 2 * (n - i); s++) {
//       cout << " ";
//     }


//     // print half pyramid
//    for(int j=0;j<i+1;j++){
//       cout<<"*";
//     }
//     cout<<endl;

//   }








// 1 2 
// 3 4 5 
// // 6 7 8 9        
// // 10 11 12 13 14 
//  int count = 0;
// for(int i=1;i<=n;i++){
//   for(int j=0;j<=i;j++){
//     count ++;
//     cout<<count<<" ";                   
//   }
//   cout<<endl;
// }



// *       
// **      
// ***    
// ****  
// *****
// ****  
// ***    
// **      
// *        
//   for(int i=0;i<n;i++){
//     int j=0;
//     for(;j<i+1;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }

//   for(int i=n-1;i>=1;i--){
//     for(int j =0; j<i;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }


// *****1******
// ****2*2*****
// ***3*3*3****
// **4*4*4*4***
// *5*5*5*5*5**

  // // print ulta half pattern
  //  for(int i=1;i<=n;i++){
  //   for(int j=0;j<n-i+1;j++){
  //     cout<<"*";
  //   }

  //   // number print with start
    
  //   for(int n=0; n < i; n ++ ) {
  //     cout<<i<<"*";
  //   }
      


  //   // print start
  //   for(int j=0;j<n-i+1;j++){
  //     cout<<"*";
  //   }

  //   cout<<endl;
  //  }

   



//       1
//      121
//     12321
//    1234321
//   123454321
// //  12345654321
//   for(int i=1; i<n; i++) {
//     //  for space 
//     int j = 1;
//     for(int s= 0; s<n-i; s++) {
//        cout<< " ";
//     }

//     for(; j<i;j++){
//       cout<<j;
//     }
//     for(int b = j; b>=1;b--){
//       cout<<b;
//     }
//     cout<<endl;
//   }




// A
// ABB
// ABCCB
// ABCDDCB
// ABCDEEDCB
//   for(int i=0; i<n; i++) {
//     char ch;
//     for(int j =0;j<i+1;j++){
//        ch = 'A'+j+1-1;
//       cout<<ch;
//     }
//     for(char a = ch; a>'A';a--){
//       cout<<a;
//     }
//     cout<<endl;
//   }





  // for(int i = 1; i <= n; i++) {
  //   for(int j = 1; j <= i; j++) {
  //     // space print
  //     if(i == 1 || i == n) {
  //       cout << j;
  //     }
  //     else {
  //       int totalcol = n - i;
  //       if(j == 1 || j == totalcol) {
  //         cout << j;
  //       }
  //       else {
  //         cout << " ";
  //       }
  //     }
  //   }
  //   cout << endl;
  // }







return 0;
}
