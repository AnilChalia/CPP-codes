#include<iostream>
using namespace std;
int main(){
  // for(int i=0;i<10;i++){
  //   cout<<"hello:"<<endl;
  //   // break;
  // }

  // int i = 0;
  // while(i<=5){
  //   cout<<"hello:"<<endl;
  //   i = i+1;
  // }

  // cout<<"break of loop:"<< endl;

  // for(int i=0;i<3;i++){
  //   cout<<"outer loop:"<< i <<endl;
  //   for(int j=0;j<3;j++){
  //     cout<<"innner loop:"<< j << endl;
  //   }
  // }
  // int i = 1;
  // for(;i<5;){
    
  //     cout<<"hello"<<endl;
    
  //   i++;
  // }


  // for(int i=0; i<11; i++){
  //   cout<<"name:"<<endl;
  // }


  // int n;
  // cin>>n;

  // for(int i=1; i<=10; i++) {
  //   cout<<n<<"*"<<i<<"="<<n*i<<endl;
  // }
  int n;
  cin>>n;
  for(int i=1; i<n; i++){
    if(n%2!=0){
      cout<<"odd is :" << i << endl;
    }
  }


  return 0;

}