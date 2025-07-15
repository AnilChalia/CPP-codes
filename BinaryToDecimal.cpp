#include<iostream>
#include<math.h>
using namespace std;

int BinaryToDecimal (int n) {
    
    int deci = 0;
    int i = 0;

    while(n) {
      int bit = n%10;
      deci = deci + bit*pow(2,i++);
      n = n/10;
    }

return deci;

}

int main () {
  
  int n;
  cout<<"enter the binary number :" << endl;
  cin >> n;

  int ans = BinaryToDecimal(n);

  cout<<"decimal is:" << ans << endl;
  


  return 0;

}