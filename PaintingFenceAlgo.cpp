#include<bits/stdc++.h>
using namespace std;

int SolveUsingRec(int n,int k) {
  // bc
  if(n == 1){
    return k;
  }
  if(n == 2){
    return (k + (k*(k-1)));
  }
  
  int ans = (SolveUsingRec(n-1,k) + SolveUsingRec(n-2,k))*(k-1);
  return ans;

}
// SOLVING USING DP + MEMOIZATION
     int SolveUsingRec(int n,int k,vector<int> &dp) {
       // bc
       if(n == 0){
           return 0;
       }
       if(n == 1){
        return k;
       }
       if(n == 2){
        return (k + (k*(k-1)));
       }
       
       if(dp[n] != -1){
           return dp[n];
       }
  
       dp[n] = (SolveUsingRec(n-1,k,dp) + SolveUsingRec(n-2,k,dp))*(k-1);
        return dp[n];
      }

// SOLVING USING TABULATION:::::::::
     int SolvingUsingTabulation(int n,int k) {
      vector<int> dp(n+1,-1);
      dp[1] = k;
      dp[2] = k + k*(k-1);
      for(int i=3; i<=n; i++) {
         dp[i] = (dp[i-1] + dp[-2])*(k-1);
      }
      return dp[n];
     }

// uisng space optimization in dp ::::::::::::::::
     int SpaceOptimization(int n,int k) {
        int prev2 = k;
        int prev1 = k + k*(k-1);
        if(n == 1){
          return prev2;
        }
        if(prev == 2){
          return prev1;
        }
        int curr = 0;

        for(int i=3; i<=n; i++) {
          curr = ((prev1 + prev2) * (k-1));

          prev2 = prev1;
          prev1 = curr;
        }
         return prev1;
     }

int main(){
 
  int n = 3;
  int k = 3;

  // vector<int> dp(n+1,-1);


  int ans = SolveUsingRec(n,k);
  cout << "Anss:" << ans << endl;
 




  return 0;

}