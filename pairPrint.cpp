// #include<bits/stdc++.h>
// using namespace std;

// int main () {

//   int arr[4]  {1,2,3,6};

//   int n = 4;


//   // outer loop
    
//     for (int i = 0; i < n; i++) {

//       // inner loop for column
        
//         for (int j=0; j < n; j++) {

//           //  print pair of i and column

//               cout << arr[i] <<" " << arr[j] << endl;

//         }
//     }





//   return 0;

// }

#include<iostream>
using namespace std;
int main(){
  
  int n = 5;
  int arr[5] = {10,20,30,40,50};

  for(int i =0; i<n; i++) {
    arr[i] >> 1;
     
    cout << arr[i] <<" "<<endl;


  }

   
  return 0;


}