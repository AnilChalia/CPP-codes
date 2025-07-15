// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a,int b) {
//   if(a == 0) return b;
//   if(b == 0) return a;

//   while(a > 0 && b > 0) {
//     if(a > b) {
//       a = a - b;
//     }
//     else{
//       b = b - a;
//     }
//   }
//   return a == 0 ? b : a;
// }
// int main(){
//  int a = 24;
//  int b = 71;
 
//  int ans = gcd(a,b);
// //  int lcm = a * b; 
// //  int divide = ans/lcm;
// //  cout <<"lcm is:" << divide << endl;
//  cout << "gcd of a and b is:"  << ans << endl;


//   return 0;
// }

// SLOW EXPONATION A KI POWER B
#include<bits/stdc++.h>
using namespace std;
int slowExpontation(int a,int b){
  int ans = 1;
  for(int i=0; i<b; i++){
    ans*=a;
  }
  return ans;
}
// FAST EXPONATTION
int fastExponation(int a,int b) {
  int ans = 1;
  while(b > 0) {
    if(b & 1) {
      ans = ans * a;
    }
    a = a*a;
    b >>=1 ;
  }
  return ans;
}
int main(){

 cout << "a ki power b is:" << fastExponation(5,4) << endl;

  return 0;

}