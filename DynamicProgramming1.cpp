// class Solution {
// public:
// //    dp top - down approach
//     int  solve(int n , vector<int> &dp){
//     //    base case
//        if(n==0 || n == 1) { 
//          return n;
//         }       
//         // step 3:if ans is exist then return ans
//         if(dp[n] != -1){
//             return dp[n];
//         }
//         // rec relation
//         // step2:store and return  ans using dp
//         dp[n] = solve(n-1,dp) + solve(n-2,dp);
//         return dp[n];
       
//     }


//     int fib(int n) { 
// // TABULATION APPROACHH DP::::::::::
//     // create dp arrau top down approach or tabulation approach 
//     vector<int>dp(n+1,-1);
//     // anaylyse base case and fill in dp array
//     dp[0] = 0;
//     if(n == 0){
//         return dp[0];
//     }
//     dp[1] = 1;
//     // bache hue part in dp array
//     // size = n+1;
//     // indx 0 -n;
//     // index bacha huea 2 -> n tk
//     // loop se traves
//     for(int i=2; i<=n; i++){
//         // /copy paset recursive relation replace with dp array
//         dp[i] = dp[i-1] + dp[i-2];
//     }
//     // ans create
//     // call n k liye kri use return krdo
//     return dp[n];







// // SOLVING USING RECURSION::::::::::::
//         // if(n==0) { 
//         //     return 0;
//         // }   

//         // if( n == 1){
//         //     return 1;
//         // }

//         // int ans = fib(n-1) + fib(n-2);
//         // return ans;




// // SOLVING USIN DP::::::::::::::::::::::
//     // top down aproach
//     // rec + memoization
//     // cretae dp array solution store n+1 numbers 0 - 6 = 6+1
//     // top down appproach  dp
//     // vector<int> dp(n+1,-1);
//     // int ans = solve(n,dp);
//     // return ans;


// // SOLVING USING SPACE OPTIMIZATION
//    int prev = 0;
//    if(n == 0){
//     return 0;
//    }
//    int curr = 1;
//    if(n == 1){
//      return 1;
//    }
//    int ans = 0;

//    for(int i=2; i<n; i++){
//     ans = curr + prev;
//     prev = prev -> next;
//     curr = curr -> next;
//    }
//    return ans;
//     }
// };

// // HOUSE ROBBER:::::::::::::::::::::::
// class Solution {
// public:
//     // using recursion
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
    
//     // using top-down in dpp
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
//       vector<int> &dp(n,-1);
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

//     // using space optimization
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
//         // int index = 0;
//         int n = nums.size();
//         int ans = SpaceOptimization(nums);
//         return ans;
//         // vector<int> dp(n+1,-1);

//         // int ans = UsingMEmoDp(nums,index,dp);

//         return ans;
//     }
// };

// COINE CHANGES:::::::::::::::::::::
// class Solution{
// public:

    // int SolvingUSingRecursion(vector<int> &coins,int amount){
    //     // bc
    //     if(amount == 0) {
    //         return 0;
    //     }

    //     // recursive relation
    //     int mini = INT_MAX;
    //     for(int i=0; i<coins.size(); i++) {
    //         // amount - bhi bn skta h
    //         if(amount - coins[i] >= 0){
    //             int recAns = SolvingUSingRecursion(coins,amount-coins[i]);
    //             if(recAns != INT_MAX){
    //             int ans = 1 + recAns;
    //             mini = min(mini,ans);
    //             }
    //         }
    //     }
    //     return mini;
    // }

//     int CoinChanges(vector<int> &coins,int amount){
//         return SolvingUSingRecursion(coins,amount);
//         if(ans == INT_MAX){
//               return -1;
//           }    
//              return ans;
//     }
// };


// // PERFETC SQUARE:::::::::::::::
// class Solution {
// public:
// // using bottom-up dp
//     int Bottomup(int n,vector<int> &dp) {
//         // // bc
//         // if(n == 0) return 0;
//         // if(n <= 0)  return 0;
        
//         // if(dp[n] != -1){
//         //     return dp[n];
//         // }

//         dp[0] = 1;

//         for(int i=1; i<=n; i++) {

//         int ans = INT_MAX;
//         int start = 1;
//         int end = sqrt(i);

//         while(start <= end) {
//             int perfects = start * start;
//             int numberS = 1 + dp[i-perfects];
//             if(numberS < ans) {
//                 ans = numberS;
//             }
//             start++;
//         }
//         dp[i] = ans;
//     }
//       return dp[n];
// }  


// // using top-down approach in dp
//     int UsingMemoization(int n,vector<int> &dp) {
//         // bc
//         if(n == 0) return 0;
//         if(n <= 0)  return 0;
        
//         if(dp[n] != -1){
//             return dp[n];
//         }

//         int ans = INT_MAX;
//         int i = 1;
//         int end = sqrt(n);

//         while(i <= end) {
//             int perfects = i * i;
//             int numberS = 1 + UsingMemoization(n-perfects,dp);
//             if(numberS < ans) {
//                 ans = numberS;
//             }
//             i++;
//         }
//         dp[n] = ans;
//         return dp[n];
//     }  

// // using recursion::::::
//     int PerfectSquare(int n) {
//         // bc
//         if(n == 0) return 0;
//         if(n <= 0)  return 0;
        
//         int ans = INT_MAX;
//         int i = 1;
//         int end = sqrt(n);

//         while(i <= end) {
//             int perfects = i * i;
//             int numberS = 1 + PerfectSquare(n-perfects);
//             if(numberS < ans) {
//                 ans = numberS;
//             }
//             i++;
//         }
//         return ans;
//     }
//     int numSquares(int n) {
//         vector<int> dp(n+1,-1);
//         // int ans = UsingMemoization(n,dp);
//         // return ans;
//         return Bottomup(n,dp) -1;
//     }
// };


// MINIMUM COST FOR TICKETS:::::::::::::::::::::::
// class Solution {
// public:
// // USING BOTTOM UP APPROACH IN DP:::::::::::::::::::::::
//     int mincostTickets_HelperUsindDpBottomApproach(vector<int>& days, vector<int>& costs,vector<int> &dp) {
//         dp[days.size()] = 0;
   
//         for(int index = days.size()-1; index >= 0; index--) {
//         // 1 Day
//         int cost1 = costs[0] + dp[index+1];
//         // 7 Day
//         int EndingDay = days[index] + 7 - 1;
//         int j = index;
//         while(j < days.size() && days[j] <= EndingDay){
//             j++;
//         }
//         int cost7 = costs[1] + dp[j];

//         // 30 Day
//         EndingDay = days[index] + 30 - 1;
//         j = index;
//         while(j < days.size() && days[j] <= EndingDay){
//             j++;
//         }
//         int cost30 = costs[2] + dp[j];

//         dp[index] =  min(cost1,min(cost7,cost30));
//        }
//        return dp[0];
//     }

// // USING DP+MEMOIZATION TOP DOWN APPROACH::::::::::::::::
//     //  int mincostTickets_HelperUsindDpMem(vector<int>& days, vector<int>& costs,int index,vector<int> &dp) {
//     //     // bc
//     //     if(index >= days.size()) {
//     //         return 0;
//     //     }

//     //     if(dp[index] != -1){
//     //         return dp[index];
//     //     }

//     //     // 1 Day
//     //     int cost1 = costs[0] + mincostTickets_HelperUsindDpMem(days,costs,index + 1,dp);

//     //     // 7 Day
//     //     int EndingDay = days[index] + 7 - 1;
//     //     int j = index;
//     //     while(j < days.size() && days[j] <= EndingDay){
//     //         j++;
//     //     }
//     //     int cost7 = costs[1] + mincostTickets_HelperUsindDpMem(days,costs,j,dp);

//     //     // 30 Day
//     //     EndingDay = days[index] + 30 - 1;
//     //     j = index;
//     //     while(j < days.size() && days[j] <= EndingDay){
//     //         j++;
//     //     }
//     //     int cost30 = costs[2] + mincostTickets_HelperUsindDpMem(days,costs,j,dp);

//     //     dp[index] =  min(cost1,min(cost7,cost30));
//     //     return dp[index];
//     // }


// // USING RECURSION:::::::::::::::::::
//     // int mincostTickets_Helper(vector<int>& days, vector<int>& costs,int index) {
//     //     // bc
//     //     if(index >= days.size()) {
//     //         return 0;
//     //     }

//     //     // 1 Day
//     //     int cost1 = costs[0] + mincostTickets_Helper(days,costs,index + 1);

//     //     // 7 Day
//     //     int EndingDay = days[index] + 7 - 1;
//     //     int j = index;
//     //     while(j < days.size() && days[j] <= EndingDay){
//     //         j++;
//     //     }
//     //     int cost7 = costs[1] + mincostTickets_Helper(days,costs,j);

//     //     // 30 Day
//     //     EndingDay = days[index] + 30 - 1;
//     //     j = index;
//     //     while(j < days.size() && days[j] <= EndingDay){
//     //         j++;
//     //     }
//     //     int cost30 = costs[2] + mincostTickets_Helper(days,costs,j);

//     //     return min(cost1,min(cost7,cost30));
//     // }

//     int mincostTickets(vector<int>& days, vector<int>& costs) {
//         vector<int> dp(days.size(),-1);
//         return mincostTickets_HelperUsindDpBottomApproach(days,costs,dp);



//         // return mincostTickets_HelperUsindDpMem(days,costs,0,dp);


//         // return mincostTickets_Helper(days,costs,0);
//     }
// };