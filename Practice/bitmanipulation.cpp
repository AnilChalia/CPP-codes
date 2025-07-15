#include<bits/stdc++.h>
using namespace std;
void checkOdd(int n){
  if(n & 1){
    cout <<"odd number:" << endl;
  }else{
    cout <<"even number"<< endl;
  }
}
void checkIthbit(int n,int i){
  int mask = (1 << i);
  int ans = n & mask;
  if(ans == 0){
    cout <<"bit->0"<<endl;
  }
  else{
    cout<<"bit->1"<<endl;
  }
}

void setIthbit(int n,int i){
  int mask = (1 << i);
  n = n | mask;
  cout <<"updated number" << n << endl;
}

int main(){
  // int n = 19;

  // checkOdd(n);
  setIthbit(10,3);




  return 0;
}