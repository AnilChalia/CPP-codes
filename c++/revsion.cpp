#include<bits/stdc++.h>
using namespace std;
bool IsPrime(int n) {
    for(int i = 2; i < n; i ++) {
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int n = 5;
    bool ans = IsPrime(n);

    if(ans){
        cout <<"Prime" << endl;
    }
    else{
        cout <<"Not Prime" << endl;
    }

      



    return 0;
}