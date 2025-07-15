#include<bits/stdc++.h>
using namespace std;

// CHECK IF ARRAY IS SORTED OR NOT::::::::::
// bool CheckSorted(int arr[],int n,int i) {
//   // bc
//   if(i >= n){
//     return true;
//    }

//   //  prcsng
//   if(arr[i] > arr[i-1]){
//     bool ans = CheckSorted(arr,n,i+1);
//     return ans;
//   }
//   else{
//     return false;
//   }
// }

// BINARY SEARCH CODE:::::::::::::::::
// int BinarySearch(int arr[],int s,int e,int target) {
//    int mid = s+(e-s)/2;

//   //  bc
//   if(s > e){
//     return -1;
//   }

//   // procsng
//   if(arr[mid] == target){
//     return mid;
//   }
//   // rccall
//   if(arr[mid] < target){
//     return BinarySearch(arr,mid+1,e,target);
//   }
//   else{
//     return BinarySearch(arr,s,mid-1,target);
//   }
// }

// SUBSTRING OF STRING:::::::::::::::
// void Substring(string str,string ans,int i) {
//   // bs case
//   if(i >= str.length()){
//     cout << ans <<endl; 
//     return;
//   }
//   // processing
//   char ch = str[i];
//   // exclude
//   Substring(str,ans,i+1);
//   // include
//   ans.push_back(ch);
//   Substring(str,ans,i+1);
// }

// MAXIMIZE THE CUT SEGMENT::::::::
    // int maximizeTheCuts(int n, int x, int y, int z)
    // {
       
    //    if(n == 0) {
    //        return 0;
    //    }
       
    //    if(n < 0) {
    //        return INT_MIN;
    //    }
       
    //    int op1 = 1 +  maximizeTheCuts(n - x,x,y,z);
    //    int op2 = 1 +  maximizeTheCuts(n - y,x,y,z);
    //    int op3 = 1 +  maximizeTheCuts(n - z,x,y,z);
       
    //    int finalans = max(op1,max(op2,op3));
    //    return finalans;
    // }

// COIN CHANGES:::::::::::
// int solve(vector<int>& coins,int amount) {
//   // bc
//   if(amount == 0){
//     return 0;
//   }
//   if(amount < 0) {
//     return INT_MAX;
//   }
   
//   int mini = INT_MAX;
//   for(int i = 0; i < coins.size(); i++) {
//     int coin = coins[i];

//     // current coin ko tbi use kre jab uski value <= amount hove
//     if(coin <= amount){
//       int recans = solve(coins,amount-coin);
//       if(recans !=  INT_MAX){
//        int ans = 1 + recans;
//        mini = min(mini,ans);
//       }
//     }
//   }
//   return mini;
// }
// int coinnChange(vector<int> &coins,int amount){
//   int ans = solve(coins,amount);
   
   
//    if(ans == INT_MAX){
//     return -1;
//    }
//    else{
//     return ans;
//    }
// }


 


int main() {
   
  //  int arr[5] = {1,2,0,4,5};
  //  int n = 5;
  
  // string str = "abc";
  // string ans ="";
  // Substring(str,ans,0);

   




  //  int key = 0;

  //  int found = BinarySearch(arr,0,n-1,key);

  //  if(found){
  //   cout << "found:" << found;
  //  }
  //  else{
  //   cout<<"not found:" << found;
  //  }









  //  int i = 1;

  //  bool ans = CheckSorted(arr,n,i);
  //  if(ans){
  //   cout << "array is sorted:" << endl;
  //  }
  //  else{
  //   cout <<"array is not sorted:" << endl;
  //  }
  





  return 0;

}