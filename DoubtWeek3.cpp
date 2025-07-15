#include<iostream>
using namespace std;

void CountBit(int n ) {
 

  int cnt = 0;
  while(n) {
    n = n&(n-1);
    n >>= 1;
    cnt++;
  }

cout << cnt << endl;
}

int main(){
  
  int n;
  cin >> n;

  CountBit(n);


  return 0;

}