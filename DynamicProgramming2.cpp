// #include<bits/stdc++.h>
// using namespace std;
// // int SolveUsingRecursion(int capacity,int wt[],int pro[],int index,int n) {
// //     // bc
// //     if(index == n-1) {
// //       if(wt[index] <= capacity){
// //         return pro[index];
// //       }
// //       else{
// //         return 0;
// //       }
// //     }

// //     // in ex
// //     int include = 0;
// //     if(wt[index] <= capacity){
// //       include = pro[index] + SolveUsingRecursion(capacity-wt[index],wt,pro,index+1,n);
// //     }
// //       int exclude = 0 + SolveUsingRecursion(capacity,wt,pro,index+1,n);
// //       int ans = max(include,exclude);
// //       return ans;
// // }


// // SOLVING USING MEM DP 2D
// int SolvingUsingMem(int capacity,int wt[],int pro[],int index,int n,  vector<vector<int> > &dp) {
//     // bc
//     if(index == n-1) {
//       if(wt[index] <= capacity){
//         return pro[index];
//       }
//       else{
//         return 0;
//       }
//     }

//     if(dp[capacity][index] != -1){
//       return dp[capacity][index];  
//     }

//     // in ex
//     int include = 0;
//     if(wt[index] <= capacity){
//       include = pro[index] + SolvingUsingMem(capacity-wt[index],wt,pro,index+1,n,dp);
//     }
//       int exclude = 0 + SolvingUsingMem(capacity,wt,pro,index+1,n,dp);
//       dp[capacity][index] = max(include,exclude);
//       return dp[capacity][index];
// }

// // Solving USING TABULATION:::::::::::::

// int SolvingUsingTabulation(int capacity,int wt[],int pro[],int n) {
//   // create 2d dp
//   vector<vector<int> > dp(capacity+1,vector<int>(n+1,-1));

//   for(int row = 0; row <= capacity; row++) {
//     dp[row][n] = 0;
//   }  

//   for(int i=0; i<=capacity; i++) {
//     for(int j = n-1; j>=0; j--) {
//       int include = 0;
//       if(wt[j] <= i){
//         include = pro[j] + dp[i-wt[j]][j+1];
//       }
//       int exluce = 0 + dp[i][j+1];
//       dp[i][j] = max(include,exluce);
//     }
//   }
//   return dp[capacity][0];
// }



// int main(){
//   int capacity = 50;
//   int wt[] = {10,20,30};
//   int pro[] = {60,100,120};
//   int index = 0;
//   int n = 3;
//   // create 2d dp
//   vector<vector<int> > dp(capacity+1,vector<int>(n+1,-1));
//   int ans = SolvingUsingMem(capacity,wt,pro,index,n,dp);
//   return ans;
   
//   // int ans = SolveUsingRecursion(capacity,wt,pro,index,n);
//   // cout <<"maxprofit is:" << ans << endl;

//   return 0;
// }


// LONGEST SUBSEQUENCE OF A STRING USING 2DP :::::::::::::::::::::::::::::::::::::::::::::::::::::::::     ::::::::::::::: ::::::::::::: :::::::::\
class Solution {
public:
    int UsingSpaceOptimization(string a,string b){
          vector<int> curr(a.length()+1,0);
        //   colm create isliye a length
          vector<int> next(a.length()+1,0);

        for(int j=b.length()-1; j>=0; j--) {
            for(int i=a.length()-1; i>=0;i--){
                int ans = 0;
                if(a[i] == b[j]){
                    ans = 1 + next[i+1];
                }
                else{
                    ans = 0 + max(next[i],curr[i+1]);
                }
                curr[i] = ans;
            }
            // shifting
            next = curr;

        }
              return next[0];
    }

    // int UsingTabulationDp(string &a,string &b) {
    //     vector<vector<int> >dp(a.length()+1,vector<int>(b.length()+1,0));
        
        // for(int i=a.length()-1; i>=0; i--) {
        //     for(int j=b.length()-1; j>=0;j--){
        //         int ans = 0;
        //         if(a[i] == b[j]){
        //             ans = 1 + dp[i+1][j+1];
        //         }
        //         else{
        //             ans = 0 + max(dp[i][j+1],dp[i+1][j]);
        //         }
        //         dp[i][j] = ans;
        //     }
        // }
        //       return dp[0][0];
    // }
    // int UsingDPmemoIzation(string &a,string &b,int i,int j,vector<vector<int>>&dp) {
    //     // bc
    //     if(i >= a.length()){
    //         return 0;
    //     }
    //     if(j >= b.length()){
    //         return 0;
    //     }
        
    //     if(dp[i][j] != -1){
    //         return dp[i][j];
    //     }

    //     int ans = 0;
    //     if(a[i] == b[j]) {
    //         ans = 1 + UsingDPmemoIzation(a,b,i+1,j+1,dp);
    //     }
    //     else{
    //         ans = 0 + max(UsingDPmemoIzation(a,b,i,j+1,dp),UsingDPmemoIzation(a,b,i+1,j,dp));
    //     }
    //     dp[i][j] = ans;
    //     return dp[i][j];
    // }
    // int SolvingUsingRecursion(string a,string b,int i,int j) {
        // // bc
        // if(i >= a.length()){
        //     return 0;
        // }
        // if(j >= b.length()){
        //     return 0;
        // }
        
        // int ans = 0;
        // if(a[i] == b[j]) {
        //     ans = 1 + SolvingUsingRecursion(a,b,i+1,j+1);
        // }
        // else{
        //     ans = 0 + max(SolvingUsingRecursion(a,b,i,j+1),SolvingUsingRecursion(a,b,i+1,j));
        // }

        // return ans;
    // }
    int longestCommonSubsequence(string text1, string text2) {
        // create 2d dp
        // vector<vector<int>>dp(text1.length()+1,vector<int>(text2.length()+1,-1));
        // int ans = UsingDPmemoIzation(text1,text2,0,0,dp);
        // return ans;

        int ans = UsingSpaceOptimization(text1,text2);
        return ans;


        // int i = 0;
        // int j = 0;
        // int ans = SolvingUsingRecursion(text1,text2,i,j);
        // return ans;
    
    }
};