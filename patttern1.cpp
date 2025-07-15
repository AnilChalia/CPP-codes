#include<iostream>
using namespace std;
int main(){

int n;
cin >> n;
















//  int count = 0;
// for(int i=1;i<=n;i++){
//   int j=0;
//   for(;j<=i;j++){
//     count ++;
//     cout<<count<<" ";                   
//   }
//   cout<<endl;
// }
// for(int i=1;i<=n;i++){
//   int count =0;
//   int j=0;
//   for(;j<=n-i;j++){
//     count++;
//     cout<<count;
//   }
//   cout<<endl;
// }










// for(int i=0; i<n; i++){
//   for(int j=0; j<n-i; j++){
//     cout<<"*";
//   }
//   for(int j=1;j<=i+1;j++){
//     cout<<i<<"*";
//   }
//   for(int s=0;s<n-i;s++){
//     cout<<"*";
//   }
//   cout<<endl;
// }











// *
// **
// ***
// ****
// *****
// *****
// ****
// ***
// **
// *
// for(int i=0; i<n; i++){
//   for(int j=0;j<i+1;j++){
//     cout<<"*";
//   }
//   cout<<endl;
// }

// for(int i=0;i<n;i++){
//   for(int j=0;j<n-i;j++){
//     cout<<"*";
//   }
//   cout<<endl;
// }









//   1
//  121
// 12321
// for(int row=0;row<=n;row++){
//   for(int s=0;s<n-row;s++){
//     cout<<" ";
//   }
//   int j=1;
//   for(;j<row;j++){
//     cout<<j;
//   }
//   for(int r=j;r>=1;r--){
//     cout<<r;
//   }
//   cout<<endl;
// }


// 12345
// 1  5
// 1 5
// 5
// for(int i=0; i<n; i++){
//   for(int j=i+1; j<=n; j++){
//     if(j == i+1 || j == n || i == 0) {
//     cout<<j;
//     }
//     else{
//       cout<<" ";
//     }
//   }
//   cout<<endl;
// }



// // 1 
// // 1 2
// // 1 2 3
// // 1 2 3 4 
// // 1 2 3 4 5
// for(int i=0; i<5;i++){
//   for(int j=0; j<i+1;j++){
//     cout<<j+1<<" ";
//   }
//   cout<<endl;
// }





// // 1*
// // 2*2*
// // 3*3*3*
// // 4*4*4*4*
// for(int row = 1; row < 5; row++){
//   for(int col = 1; col<2*row+1;col++){
//     if(col%2==1){
//       cout<<"*";
//     }
//     else{
//       cout<<row+1;
//     }
//   }
//   cout<<endl;
// }





// //      *
// //     **
// //    * *
// //   *  *
// //  *   *
// // *    *
// for(int i=0; i<6; i++){
//   for(int j=0; j<6-i-1;j++){
//        cout<<" ";
//   }

//      for(int col = 0; col < i +1; col++){
//       if(col == 0 || col == i +1 - 1){
//            cout<<"*";
//       }
//       else{
//         cout<<" ";
//       }
//      }
//      cout<<endl;
    
// }



// //  
// //  * * * * *
// //   * * * * 
// //    * * *
// //     * *
// //      *
// for(int row =0; row<6; row++){
//   for(int space =0; space<row; space ++){
//     cout<<" ";
//   }

//   for(int col =0; col<6-row; col++){
//     cout<<"* ";
//   }
//   cout<<endl;
// }




// //      *      
// //     * *     
// //    * * *    
// //   * * * *   
// //  * * * * *  
// // * * * * * * 
// for(int i=0; i<6; i++){
//   for(int j=0; j<6-i-1;j++){
//        cout<<" ";
//   }

//      for(int col = 0; col < i +1; col++){
//       cout<<"* ";
//      }
//      cout<<endl;
    
// }






// // ******
// // *   *
// // *  *
// // * *
// // **
// // *
// int n;
// cin>>n;
// for(int i=0; i<n;i++){
//   for(int j=0; j<n; j++){
//     if(i == 0 || j == 0 || j == n-i-1){
//       cout<<"*";
//     }
//     else{
//       cout<<" ";
//     }
//   }
//   cout<<endl;
// }



// // ****
// // ***
// // **
// // *
// for(int i=1;i<5;i++){
//   for(int j=1;j<5-i+1;j++){
//     cout<<"*";
//   }
//   cout<<endl;
// }




// // *
// // **
// // ***
// // ****
// // *****
//    for(int i=0;i<5;i++){
//     for(int j=0;j<i+1;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//    }


// // *****
// // *   *
// // *   *
// // *   *
// // *****
//  for(int row=0;row<5;row++){
//   for(int col=0;col<5;col++){
//     if(row==0||row==4){
//       cout<<"*";
//     }
//     else{
//       // print start
//       if(col ==0 || col==4){
//         cout<<"*";
//       }     
//       //  print space
//       else{
//         cout<<" ";
//       }
//     }
//   }
//   cout<<endl;
//  }


// // *****
// // *****
// // *****
//   int n;
//   cin>>n;
//   for(int i=0;i<3;i++){
//     for(int j=0;j<n;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }


  // ***
  // ***
  // ***
  // int n;
  // cout<<"enter the number of start row and column:"<<endl;
  // cin>>n;
  // for(int i=1;i<n;i++){
  //   for(int j=0;j<n;j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }


  return 0;

}