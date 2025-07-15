#include<bits/stdc++.h>
using namespace std;

// 1: factorial of n number:::::
int factorial(int n) {
  //  base case
  if(n == 0 || n == 1) {
    return 1;
  }
  
  // rr call
  int ans = n * factorial(n-1);
  return ans;
  // processing

}

// 2 : print n  number:::::::::
void Print (int n) {
  // base case
  if(n == 1){
    cout << 1;
    return;
  }
  // processing
  // fc call
  Print(n-1);
  cout << n <<" ";

}

// 3 : print fibonacci series:::::::::
int fibonacci(int n) {
  // bc
  if(n == 0) {
    return 0;
  }

  if(n == 1) {
    return 1;
  }
  // fc call
  int ans = fibonacci(n-1) + fibonacci(n-2);
  // processing
  return ans;

}

// 4 : power of 2 ki power n:::::::::
int power(int n){
  // base case
  if(n==0){
    return 1;
  }
  
  // fc call
  int ans = 2 * power(n-1);
  // processing
  return ans;
}

// 5 : n se 1 tk Sum ::::::::::: 

int SumOfN(int n) {
  //  bc
  if(n == 1) {
    return 1;
  }
  // fc call

  int ans = n + SumOfN(n-1);

  // rc

  return ans;
   

}

int main(){
  int n;
  cout << "enter the n number:" << endl; 
  cin >> n;
  cout  << "factorial of n number is : " << factorial(n) << endl;
  Print(n);
  cout << endl;
  cout <<"power of 2*(n-1) is: " << power(n) << endl;

  cout <<"sum is :" << SumOfN(n) << endl;


  return 0;

}