#include<bits/stdc++.h>
using namespace std;
int main () {

// SWITCH CASE ALTERNATIVE IF ELSE :::

  int a , b;
  cout << "enter the value of a and b:"<<endl;
  cin >> a >> b;

  int  op;
  cout << "enter the operation:"<<endl;
  cin>>op;

  int ans = 0;

  switch(op) {
    case 0:
        ans = a + b;
        break;


    case 1:
        ans = a - b;
        break;


    case 2:
        ans = a * b;
        break;


    case 3:
        ans = a / b;
        break;


    default:
        cout <<"invalid operation:"<<endl;
        return 0;
  }

  cout << "ans is :" << ans  << endl;


















// example using if else create clucuter
// int a , b;
// cout << " enter the value of a and valu of b:" << endl;
// cin >> a >> b;

// int op = 0;
// cout << "what do operatiom performto integer:" << endl;
// cin >> op;

// int ans = 0;

// if (op == 0) {
//   ans = a+b;
// }
// else if (op == 1) {
//   ans = a*b;
// }
// else if(op == 2){
//   ans = a - b;
// }
// else if (op == 3){
//   ans = a/b;
// }
// else{
//   cout << "invalid operation:" << endl;
//   return 0;
// }

// cout << ans << endl;


//   return 0;


}