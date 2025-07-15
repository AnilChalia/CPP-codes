// HOUSE ROBER|| ::::::::::::::::::::::::
// class Solution {
// public:
//     int Solve(vector<int>& nums, int s, int e, vector<int>& dp) {
//         if (s > e) {
//             return 0;
//         }
        
//         if (dp[s] != -1) {
//             return dp[s];
//         }
        
//         int op1 = nums[s] + Solve(nums, s + 2, e, dp);
        
//         int op2 = Solve(nums, s + 1, e, dp);

//         dp[s] = max(op1, op2);
//         return dp[s];
//     }

//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         if (n == 1) {
//             return nums[0];
//         }
        
//         vector<int> dp1(n, -1);
//         vector<int> dp2(n, -1);
    
//         int op1 = Solve(nums, 0, n - 2, dp1);
//         int op2 = Solve(nums, 1, n - 1, dp2);

//         return max(op1, op2);
//     }
// };

// HOUSE ROBER 1::::::::::::::::::::::::
// class Solution {
// public:
    
//     int Solve(vector<int>& nums,int index) {
//         // bc
//         if( index >= nums.size()){
//             return 0;
//         }
//         // index ith pr chori krta h
//         int op1 = nums[index] + Solve(nums,index+2);
//         // index ith pr chori  nhi krta h
//         int op2 = 0 + Solve(nums,index+1);
//         int ans = max(op1,op2);
//         return ans;

//     }

//     int UsingMEmoDp(vector<int> &nums,int index,vector<int> &dp){
//     // Base case
//     if (index >= nums.size()) {
//         return 0;
//     }

//     if (dp[index] != -1) {
//         return dp[index];
//     }

//     // index ith pr chori krta h
//     int op1 = nums[index] + UsingMEmoDp(nums, index + 2, dp);
//     // index ith pr chori nhi krta h
//     int op2 = 0 + UsingMEmoDp(nums, index + 1, dp);
//     dp[index] = max(op1, op2);
//     return dp[index]; 
//     }

//     // using bottom up in dp
//     int usingTabulation(vector<int> &nums){
//     // create a dp array
//       int n = nums.size();
//       vector<int> dp(n,-1);
//     //   intialize answer for bc in tabulation method jo usme me pese pde h vo ans h
//       dp[n-1] = nums[n-1];
//     //  right to left (n-1 leliya h to loop n-2 se chlega)
//       for(int i=n-2; i>=0; i--){
//              int temp = 0;
//             //  is case me dp out of bound chla jayega is liye smabhala h alg se
//              if(i + 2 < n){
//                 temp = dp[i+2];
//              }
//              // index ith pr chori krta h
//              int op1 = nums[i] + temp;
//             // index ith pr chori nhi krta h
//             int op2 = 0 + dp[i+1];
//              dp[i] = max(op1, op2);
//       } 
//        return dp[0];
//     }

//         // using space optimization
//     int SpaceOptimization(vector<int> &nums) {
//         int n = nums.size();
//         int prev = nums[n-1];
//         int next = 0;
//         int curr = 0;

//         for(int i=n-2; i>=0; i--){
//             int temp = 0;
//             if(i + 2 < n) {
//                 temp = next;
//             }

//             int include = nums[i] + temp;
//             int exclude = 0 + prev;
//             curr = max(include,exclude);


//             next = prev;
//             prev = curr;
//         }


//         return prev;
//     }
   
   
//     int rob(vector<int>& nums) {

//         int n = nums.size();
//         int ans = SpaceOptimization(nums);
//         return ans;
//         // vector<int> dp(n+1,-1);

//         // int ans = usingTabulation(nums);

//         return ans;
//     }
// };

// COUNT DEARRANGEMENT 3::::::::::::::::::
// #include<bits/stdc++.h>
// using namespace std;
// int Solve(int n){
//   if(n == 1){
//     return 0;
//   }
//   if(n == 2){
//     return 1;
//   }

//   int ans = (n-1) * (Solve(n-1) + Solve(n-2));
//   return ans;
// }
// int main(){
//   int n = 4;
//   cout << Solve(n) << endl;

//   return 0;
// }

// PAINTING FENCE ALGORITHM 4::::::::::::::::
// #include<bits/stdc++.h>
// using namespace std;
// int GetpaintWays(int n,int k) {
//   if(n == 1) {
//     return k;
//   }
//   if(n == 2){
//     return k + k * (k-1);
//   }

//   int ans = (k-1) * (GetpaintWays(n-1,k) + GetpaintWays(n-2,k));
//   return ans;
// }
// int main(){
//   int n = 3;
//   int k = 3;
  
//   int ans = GetpaintWays(n,k);
//   cout << ans << endl;

//   return 0;
// }
