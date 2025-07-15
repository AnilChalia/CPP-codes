// 1:Check Number is Even or Odd:::::::::::::
// #include<bits/stdc++.h>
// using namespace std;
// void checkEvenOrOdd(int n) {
//   if(n & 1){
//     cout << "ODD" << endl;
//   }
//   else{
//     cout << "EVEN" << endl;
//   }
// }
// int main(){
//   int n = 20;
//   checkEvenOrOdd(n);
//   return 0;
// }

// 2:GET ITH BIT::::::::::::::::::
// #include<bits/stdc++.h>
// using namespace std;
// void getIthBit(int n,int i){
//   int mask = {1 << i}; // mask create
//   int ans = n & mask;
//   if(ans == 0){
//     cout << "Bit -> 0" << endl;
//   }else{
//     cout << "bit -> 1" << endl;
//   }
// }
// int main(){
//   int n = 10;
//   int i = 3;
//   getIthBit(n,i);

//   return 0;
// }

// 3:SET ITH BIT:::::
#include<bits/stdc++.h>
using namespace std;
void SetBit(int n,int i) {
  int mask = (1 << i);
  n = n | mask;
  cout <<"updated number is:" << n << endl;
}

void ClearBit(int &n,int i) {
  int mask = ~(1<<i);
  n = n & mask;
  // cout << "updated number:" << n << endl;
}

void IthBit(int n,int i,int target){
  ClearBit(n,i);

  int  mask = (target << i);
  n = n | mask;
  cout<< "updation number is : "<< n << endl;
}

void clearlastIthBit(int n,int i){
  int mask = (-1<<i);
  n = n & mask;
  cout <<"update number:" << n << endl;
}
bool CheckPower(int n) {
  int count = 0;
  while(n != 0) {
    int lastBit = n & 1;
    if(lastBit){
      count++;
    }
    n = n >> 1;
  }
  if(count == 1){
    return true;
  }
  else{
    return false;
  }

}
int FstCountSetBit(int n){
  int count = 0;
  while(n != 0){
    count++;
    n = n & (n-1);
  }
  return coutn;
}

bool FsastPowerOf2(int n){
  if( (n & (n-1)) == 0){
    return true;
  }else{
    return false;
  }
}

// int Clearrange(int n, int i, int j) {
//     int a = (-1 << (j + 1));  // Shift left by (j + 1) to cover bits j to 0
//     int b = (1 << i) - 1;     // Shift left by i and subtract 1 to get bits i-1 to 0
//     int mask = a | b;         // Combine both masks
//     n = n & mask;             // Apply mask to n
//     cout << "Updated number: " << n << endl;
//     return n;                 // Return the updated number
// }
int main(){
     
     

  // int n =1024;
  // int i = 8;
  // int j = 1;
  // int ans =  Clearrange(n,i,j);
  // cout << ans << endl;

  

//  int n = 11;
//  cout<< FsastPowerOf2(n) << endl;

//  int i = 2;
    // clearlastIthBit(n,i);
//  int target = 0;
//  IthBit(n,i,target);
//  ClearBit(n,i);
    //  SetBit(n,i);
  return 0;
}

