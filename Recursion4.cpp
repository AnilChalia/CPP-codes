#include<bits/stdc++.h>
using namespace std;

// PRINTING FENCE ALGO::::::::::::
// int PrintPollWays(int n,int k){
//   // same color
//   if(n == 1){
//     return k;
//   }
//   // same and diffrence color
//   if(n == 2){
//     return k + k*(k-1);
//   }

//   int ans = (k-1) * (PrintPollWays(n-2,k) + PrintPollWays(n-1,k));
//   return ans;
// }


// COUNT DERANGEMENT:::::::::::::::::
int CountDerangement(int n){
   if(n == 1){
    return 0;
   }
   if(n == 2){
    return 1;
   }

   int ans = (n-1) * (CountDerangement(n-1) + CountDerangement(n-2));
   return ans;
}



















// void LastOccurenceOfChar(string &str,int i,char x,int &ans ) {
//   // bc
//   if(i >= str.length()){
//     return;
//   }
//   // processing
//   if(str[i] == x){
//     ans = i;
//   }
//   // fc
//   LastOccurenceOfChar(str,i+1,x,ans);
// }

// void ReverseString(string &str,int s,int e){
//   // bc
//   if(S >= e){
//     return;
//   }
//   // processing
//   swap(str[s],str[e]);
//   // fc cal
//   ReverseString(str,s+1,e-1);
// }

// bool CheckPalindrome(string &str,int s,int e){
//   // bc 
//   if(s >= e) {
//     return true;
//   }
//   // processing
//   if(str[s] == str[e] ) {
//     return true;
//   }
//   else{
//     return false;
//   }

//   // fc call
//   CheckPalindrome(str,s+1,e-1);
// }

// void PrintSubarray(int arr[], int start, int end) {
//     for (int i = start; i <= end; i++) {
//         cout << arr[i] <<" ";
//     }
//     cout << endl;
// }

// void GenerateSubaary(int arr[],int n){
//   for(int i=0; i<n; i++){
//     for(int j=i; j<n; j++){
//       PrintSubarray(arr,i,j);
//     }
//   }
// }

// void PrintSubArray(int arr[],int s,int e){
//   if(s > e){
//     return;
//   }

//   for(int i=s; i<e; i++){
//     cout << arr[i];
//   }
//   cout << endl;

//   PrintSubArray(arr,s,e-1);
// }

// Subsequence Of String:::::::::::::::::
// void SubSequence(string &str){
  
//   // creating mapping in binary using string
//    int num_subs = pow(2,str.size());
//    for(int n = 0; n < num_subs; n ++) {
//     string output ;
//     int num = n;
//     while(num){
//       int b = (num&1);
//       cout << b <<" ";
//       num >>= 1;
//     }
//     cout << endl;
//    }




// }

int main(){
  int n = 3;
  int ans = CountDerangement(n);
  cout << ans << endl;
  // int k = 3;

  // int ans = PrintPollWays(n,k);
  // cout << ans << endl;

  // string str = "abc";
  // SubSequence(str);

  
  // int arr[5] = {1,2,3,4,5};
  // for(int i=0;i<5;i++){
  //   for(int j=i; j<5; j++){
  //   PrintSubArray(arr,i,j);
  //   }cout<<endl;
  // }

  // string str = "abccba";


  // bool ans = CheckPalindrome(str,0,str.length()-1);
  // if(ans){
  //   cout <<"palindrome:" << endl;
  // }
  // else{
  //   cout <<"not palindrome:"<< endl;
  // }
  // ReverseString(str,0,str.length()-1);
  // cout << str <<endl;
  // // char x;
  // cin >> x;

  // int ans = -1; 
  // LastOccurenceOfChar(str,0,x,ans);
  // cout << ans << endl;


  return 0;

}