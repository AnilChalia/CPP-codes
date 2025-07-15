#include<bits/stdc++.h>
using namespace std;
// 1 : HOUSE ROBBERll:::::::::::::
// class Solution {
// public:
    
//     int Solve(vector<int>& nums,int s,int e) {
//         // bc
//         if( s > e){
//             return 0;
//         }

//         // index ith pr chori krta h
//         int op1 = nums[s] + Solve(nums,s+2,e);

//         // index ith pr chori  nhi krta h
//         int op2 = 0 + Solve(nums,s+1,e);

//         int ans = max(op1,op2);
//         return ans;
//     }


//     int rob(vector<int>& nums) {

//         int n = nums.size();
//         if(n==1){
//             return nums[0];
//         }
//      last index pr chori  0 -> n-2 tk
//         int op1=Solve(nums,0,n-2);
//      0 index pr chori 1 -> n-1
//         int op2=Solve(nums,1,n-1);
//         int ans = max(op1,op2);

//         return ans;
        
//     }
// };



// 2 : COUNT DERANGEMENT::::::::::
// int Solve(int n){
//   // bc
//   if( n == 1){
//     return 0;
//   }
//   if(n == 2){
//     return 1;
//   }

//   int ans = (n-1) * (Solve(n-1) + Solve(n-2));
//   return ans;
// }  


// 3 : PAINTING FENCE ALGORITHM:::
// int Solve(int n,int k){
//   // bc
//   if(n == 1){
//     return k;
//   }
//   if(n == 2){
//     // same and diffrence case
//     // same = k , diffrence = k * (k-1);
//     return k + k *  (k-1);
//   }
  
//   int ans = (k-1) *  (Solve(n-1,k) + Solve(n-2,k));
//   return ans;
// }


// 4 : EDIT DISTANCE::::::::::::::
// class Solution {
// public:
//     int Solve(string &str1,string& str2,int i,int j){
        // str1 cmplt hogit to str2 ka return krdo baki
//         if(i >= a.length()){
//             return b.length()-j;
//         }
        //  str2 cmplt hogi to str1 ki length return
//         if(j >= n.length()){
//             return a.lengt h()-i;
//         }

//         int ans = 0;
          //  char match t agle char pr jao
//         if(str1[i] == str2[j]){
//             ans = 0 + Solve(str1,str2,i+1,j+1);
//         }
          // no match
//         else{
//             // insert 1 opreation to hoga baki rc call
//             int op1 = 1 + Solve(str1,str2,i,j+1);
//             // remove  1 opreation to hoga baki rc call
//             int op2 = 1 + Solve(str1,str2,i+1,j);
//             // replace 1 opreation to hoga baki rc call
//             int op3 = 1 + Solve(str1,str2,i+1,j+1);
            
//             int ans = min(op1,min(op2,op3));
//             return ans;
//         }
//     int minDistance(string word1, string word2) {
//         int i = 0;
//         int j = 0;
//         Solve(word1,word2,i,j);
//     }
// };



// 5 : MAXIMUM SQUARE:::::::::::::
// ???????????????




int main(){
  // int n = 4;
  // int ans = Solve(n);
  // cout << ans << endl;


  // int n = 3;
  // int k = 3;

  // int ans = Solve(n,k);
  // cout << ans << endl;





  return 0;

} 