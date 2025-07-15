// #include<bits/stdc++.h>
// using namespace std;

// int DeciToBinary(int n) {
    
    // int binary = 0;
    // int i = 0;

    // while(n > 0) {
      
    //   int digit = n%2;
    //   binary = digit *pow(10,i++) + binary;
    //   n = n/2;
    //   // cout<<n<<endl;
    // }

    // return binary;
   

// }

// int main(){
//   int n;
//   cout<<"enter the number of:"<<endl;
//   cin>>n;

//   int ans = DeciToBinary(n);
//   cout<<"binary is:"<<ans<<endl;

//   // return 0;

// }


// method : 2 using bitwise Method

// #include<bits/stdc++.h>
// using namespace std;

// int DeciToBinary(int n) {
     
//     int binary = 0;
//     int i = 0;

//     while(n > 0) {
      
//       int bit = ( n & 1);
//       binary = bit *pow(10,i++) + binary;
//       n = n >> 1;
//       // cout<<n<<endl;
//     }

//     return binary;
  
// }

// int main(){
//   int n;
//   cin>>n;

//   int ans = DeciToBinary(n);
//   cout<<ans<<endl;
// }



#include<iostream>
#include<math.h>
using namespace std;

int DecimalToBinary(int n) {
   
   int Binary = 0;
   int i = 0;

   while (n > 0) {
      
      int bit = n % 1;
      Binary = bit * pow(10, i++) + Binary;
      n = n / 2;

   }
  
   return Binary;
}

int main() {
  int n;
  cin >> n;

  int Binary = DecimalToBinary(n);

  cout << Binary << endl;

  return 0;
}

