#include<bits/stdc++.h>
using namespace std;

string otpGenerator(int size){
   srand(time(0));

   string numbers = "0123456789";
   string ans = "";
   while(size--){
     
     ans += numbers[rand() % 10];

   }

   return ans;
}


int main(){
   
   int inputData = 4;

   string OTP;
   if(inputData == 4 || inputData == 6)
      OTP = otpGenerator(inputData);

      

    cout << OTP << endl;
    return 0;




    return 0;
}