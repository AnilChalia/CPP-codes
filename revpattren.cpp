#include<iostream>
using namespace std;

int main(){
  
  int n;
  cout<<"enter the number of star print:"<<endl;
  cin>>n;


  




// *****
// *  *
// * *
// **
// *
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<n-i;j++){
  //     if(i == 0 || i == n - 1) {
  //        cout<<"*";
  //     }
  //     else{
  //       if(j == 0 || j == n-i - 1){
  //          cout<<"*";
  //       }
  //       else{
  //         cout<<" ";
  //       }
  //     }
  //   }
  //   cout<<endl;
  // }

  //  for(int row=0;row<n;row++){
  //   for(int col=0;col<row+1;col++){
  //     int totalcol = row+1;
  //     if(col==totalcol - 1){
  //       cout<<row+1;
  //     }
  //     else{
  //       cout<<row+1<<"*";
  //     }
  //   }
  //   cout<<endl;
  //  }



// // 0
// // 1*1
// // 2*2*2
// // 3*3*3*3
// // 4*4*4*4*4
// // 5*5*5*5*5*5
//   for(int i=0; i<=n; i++){
//     for(int j=0;j<2*i+1;j++){
//       if(j%2 == 1){
//         cout<<"*";
//       }
//       else{
//         cout<<i+1;
//       }
//     }
//     cout<<endl;
//   }














// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****
  // // inverted half pyramid
  // for(int i=0; i<n; i++){
    
  //   for(int j=0; j<n-i; j++){
  //     cout<<"*";
  //   }
  // // inverted pyramid
  // for(int s=0;s<2*i+1;s++){
  //   cout<<" ";
  // }
  // // inverted half pyramid in right side
  //      for(int j=0; j<n-i; j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  // // 2nd part

  //  for(int i=0;i<n;i++){
  //   for(int j=0;j<i+1;j++){
  //     cout<<"*";
  //   }
  //   for(int s=0;s<2*n-2*i-1;s++){
  //     cout<<" ";
  //   }

  //   for(int j=0;j<i+1;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  //  }





  
//  for (int i = 0; i < n; i++) {
//         for (int s = 0; s < n - i - 1; s++) {
//             cout << " ";
//         }
//         int totalcol = n - i;
//         for (int j = 0; j < i + 1; j++) {
//             if (j == 0 || j == totalcol - 1) {
//                 cout << "* ";
//             } else {
//                 cout << "  "; // Two spaces to maintain spacing
//             }
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < n; i++) {
//         for (int s = 0; s < i; s++) {
//             cout << " ";
//         }
//         int totalcol = n - i;
//         for (int j = 0; j < totalcol; j++) {
//             if (j == 0 || j == totalcol - 1) {
//                 cout << "* ";
//             } else {
//                 cout << "  "; // Two spaces to maintain spacing
//             }
//         }
//         cout << endl;
//     }


// *    * 
//  *   *
//   *  *
//    * *
//     *
// for(int i=0; i<n;i++){
//   for(int s=0; s<i;s++){

//     cout<<" ";
//   }
//   int totlcol = n-i;
//   for(int j=0;j<n-i;j++){
//     if(j ==0 || j == totlcol-1){
//     cout<<"* ";
//   }
//     else{
//       cout<<" ";
//     }
//   }
//   cout<<endl;
// }






//     *
//    **
//   * *
//  *  *
// *   *
  // for(int i=0;i<n;i++){
  //   for(int s=0;s<n-i-1;s++){
  //     cout<<" ";
  //   }
  //   for(int j=0;j<i+1;j++){
  //     if(j==0||j==i){
  //      cout<<"* ";
  //     }
  //     else{
  //       cout<< " ";
  //     }
  //   }
  //   cout<<endl;
  // }





   
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * * 
//    * *
//     *
// for(int i=0; i<n; i++){
//   for(int s=0;s<n-i-1;s++){
//     cout<<" ";
//   }
//   for(int j=0;j<i+1;j++){
//     cout<<"* ";
//   }
//   cout<<endl;
// }

// for(int i=0;i<n;i++){
//   for(int s=0;s<i;s++){
//     cout<<" ";
//   }
//   for(int j=0;j<n-i;j++){
//     cout<<"* ";
//   }
//   cout<<endl;
// }




  //     *       
  //    * *      
  //   * * *     
  //  * * * *    
  // * * * * *   
  // for(int row = 0; row < n; row++){
  //   for(int space = 0; space < n-row+1; space ++){
  //     cout<<" ";
  //   }

  //   for(int col = 0; col < row+1; col++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

// // * * * * * 
// //  * * * *  
// //   * * *   
// //    * *    
// //     *
//    for(int i=0; i<n; i++){
//     for(int s = 0; s < i; s++){
//       cout<<" ";
//     }
//     for(int j=0; j<n-i;j++){
//       cout<<"* ";
//     }
//     cout<<endl;
//    }




  return 0;


}