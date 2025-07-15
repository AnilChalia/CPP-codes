#include<bits/stdc++.h>
using namespace std;
string otp(int size){
    srand(time(0));

    string numbers = "1234567890";
    string ans = "";
    while(size--){
        ans += numbers[rand()%10];
    }
    return ans;
}
int main(){
   
    int inputdata = 4;
    string OTP;
    if(inputdata == 4 || inputdata == 6)
       OTP = otp(inputdata);

    

    cout << OTP << endl;





    return 0;
}