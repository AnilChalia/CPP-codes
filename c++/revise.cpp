// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans = 0,i=1;
//     while(n!=0){
//     int bit = n % 2;
//     ans = ans + (bit * i);
//     n = n / 2;
//     i*=10;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
