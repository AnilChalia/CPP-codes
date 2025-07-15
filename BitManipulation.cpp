#include<bits/stdc++.h>
using namespace std;

void CheckOddEven(int n) {
  if(n & 1) {
    cout << "ODD Number:" << endl;
  }else{
    cout <<"Even Number" << endl;
  }
}

void GetIthBit(int n , int i) {
  int mask = (1 << i);
  int ans = n & mask;

  if(ans == 0) {
    cout << "0" << endl;
  }else{
    cout << "1" <<endl;
  }
}

void setIthBit(int n,int i) {
  int mask = (1 << i);
  int ans = n | mask;
  cout <<"ipdated number is:" << ans << endl;
}

void ClearIthBit(int &n,int i){
  int mask = ~(1<<i);
  int ans = n & mask;
  cout <<"updated number is :" << ans << endl;
}

void UpdateIthbit(int &n,int i,int t){
  ClearIthBit(n,i);
  int mask = t << i;
  n = n | mask;
  cout <<"after udate:" << n << endl;
}


int main(){

  int n = 10;
  // CheckOddEven(n);
  // GetIthBit(n,1);
  UpdateIthbit(n,0,1);
 
  








  return 0;
}