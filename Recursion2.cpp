#include<bits/stdc++.h>
using namespace std;

// 1 : Climbing Nth Stairs :::::::::::
 
  //  int climbStairs(int n) {
  //       if(n < 0){
  //           return 0;
  //       }
  //       if(n == 0 || n == 1){
  //           return 1;
  //       }

  //       int ans = climbStairs(n-1) + climbStairs(n-2);
  //       return ans;
        
  //   }

// 2 : PRINT ARRAY:::::::::::::
  
  // void PrintArray(int arr[],int n,int i) {
  //     //  bc
  //     if(i >= n) {
  //       return;
  //     }

  //     // processing
  //     cout << arr[i]<<" ";
      
  //     // fc
  //     PrintArray(arr,n,i+1);
  // }

// 3 : Search In Array:::::::::::
  
  // bool SearchArray(int arr[],int n,int key,int i) {
  //   //  bc
  //   if(i >= n){
  //     return false;
  //   }
  //   if(arr[i] == key){
  //     return true;
  //   }

  //   // processing

  //   // fc call
  //   bool ans = SearchArray(arr,n,key,i+1);
  //   return ans;
  // }

// 4 : FIND MINIMUM NUMBER OF ARRAY:::::::
  
  // void FIndMinimum(int arr[],int n,int i,int &mini) {
  //   // bc
  //   if(i >= n){
  //     return;
  //   }
  //   // processing
  //   mini = max(mini,arr[i]);
  //   // fc call
  //   FIndMinimum(arr,n,i+1,mini);
  // }

// 5 : PUSH ALL EVEN NUMBER PUSH IN VECTOR::::
  
  // void PushAllEven(int arr[],int n,int i,vector<int> &ans) {
  //   // bc
  //   if(i >= n) {
  //     return;
  //   }

  //   // processing
  //   if(arr[i] % 2 == 0) {
  //     ans.push_back(arr[i]);
  //   }
  //   // fc call
  //   PushAllEven(arr,n,i+1,ans);
  // }

// 6 : DOUBLE ALL ELEMNT IN ARRAY::::::

  // void DoubleN(int arr[],int n,int i) {
  //   // bc 
  //   if(i >= n){
  //     return;
  //   }
  //   // processing
  //   arr[i] = 2 * arr[i];
  //   // fc call
  //   DoubleN(arr,n,i+1);
  // }

// 7 : FINDiNDEX OF TARGET IN ARRAY:::::::::
  
//  int FindIndex(int arr[],int n,int i,int key) {
//   // bc
//   if(i >= n){
//     return -1;
//   }
//   // processing
//   if(arr[i] == key){
//   print index
//     return i;
//   print all index cout << i;
//   }
//   // fc call
//   FindIndex(arr,n,i+1,key);
//  }

// 9 : PRINT INDEX OF ALL OCCURENCE OF TARGET IN ARRAY:::::
  //  void printAlltarget(int arr[],int n,int i,int key) {
  //     //  bc
  //     if(i >= n) {
  //       return;
  //     }
  //     // proc
  //     if(arr[i] == key){
  //        cout << i;
  //     }

  //     // fc call
  //     printAlltarget(arr,n,i+1,key);

      
  //  }



// 10 : PRINT DIGIT USING NUMBER::::::
  //  void printDigits(int n) {
  //   // Base case: If n is a single-digit number, print it and return.
  //   if (n == 0) {
  //       return;
  //   } 

  //   // processing
  //   int digit = n % 10;
  //   n = n / 10;

  //   // fc call
  //   printDigits(n);
  //   cout <<digit << " ";
  //  }
  
  // void Digit(int arr[],int n,int i){
  //   // bc
  //   if(i >= n) {
  //     return;
  //   }

  //   // processing
  //   int digit = arr[i] % 10;
  //   arr[i] = arr[i] / 10;

  //   // fc call
  //   Digit(arr,n,i+1);
  //   cout << digit << " ";

  // }

// 10 : PRINT TARGET CHARCATER IN STRING::::::::
   
  void TargetCharcterFind(string str,int i,vector<string>&ans) {
    // bc case
     if( i >= str.length()){
      return;
     }
    // processing
    if(str[i] == 'a'){
      cout << str[i]<<" ";
    }

    // fc call
   TargetCharcterFind(str,i+1,ans);

  }



int main(){

  // int arr[5] = {1,5,4,5,6};
  // Digit(arr,5,0); 

  string str = "babaar";
  vector<string> ans;
  TargetCharcterFind(str,0,ans);


  

  
  // printAlltarget(arr,5,0,5);
  


  // PrintArray(arr,5,0);

  // int key = 4;

  // cout <<"target Found Or Not:" << SearchArray(arr,5,0,key) << endl;

  // int mini = INT_MIN;
  // FIndMinimum(arr,5,0,mini);
  // cout <<"minimum number is : " << mini << endl;
  
  // vector<int> ans;
  // PushAllEven(arr,5,0,ans);

  // // for eachloop using acces element in ans arr
  // for(int num:ans){
  //   cout << num <<" ";
  // }

  // DoubleN(arr,5,0);
  // for(int i=0; i<5; i++){
  //   cout<<arr[i]<<" ";
  // }cout<<endl;
  
  // int ans = FindIndex(arr,5,0,4);
  // cout << ans ;
  
  // int n;
  // cin>>n;
  // printDigits(n);
  // cout << n <<" ";


  return 0;


}