//QUESTION :1 //PERMUTATION OF ARRAY ALL PERMUTATION PRINT:::::::::::::
// class Solution {
// private:
//    void solve(vector<int>nums,vector<vector<int>>& ans,int index){
//        if (index >= nums.size()){
//            ans.push_back(nums);
//            return;
//        }
//        for(int j=index;j<nums.size();j++){
//            swap(nums[index],nums[j]);
//            solve(nums,ans,index+1);

//         //    backtrack same states k liye
//            swap(nums[index],nums[j]);
//        }
//    }
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>>ans;
//         int index = 0;
//         solve(nums,ans,index);
//         return ans;
        
//     }
// };

// QUESTION :2 PERMUTATION OF STRING:::::::
// #include<bits/stdc++.h>
// using namespace std;
// void PrintPermutation(string &str,int index){
//   if(index >= str.length()){
//     cout << str <<" ";
//     return;
//   }

//   for(int j=index; j<str.length();j++){
//     swap(str[index],str[j]);
//     PrintPermutation(str,index+1);
//     // backtack
//     swap(str[index],str[j]);
//   }
// }
// int main(){
//   string str = "abc";
//   int index = 0;
//   PrintPermutation(str,index);
//   return 0;
// }

//QUESTION : 3 RAT IN A MAZE:::::::::::::::
#include<bits/stdc++.h>
using namespace std;

bool IsSafe(int newx, int newy, int maze[][4], int row, int col, vector<vector<bool>> &vis) {
  if (newx >= 0 && newx < row && newy >= 0 && newy < col && maze[newx][newy] == 1 && !vis[newx][newy]) {
    return true;
  } else {
    return false;
  }
}

void PrintAllWays(int maze[][4], int row, int col, int srcx, int srcy, string output, vector<vector<bool>>& vis) {
  // base case: destination reached
  if (srcx == row-1 && srcy == col-1) {
    cout << output 
    
    
     << endl;
    return;
  }

  // up
  int newx = srcx - 1;
  int newy = srcy;
  if (IsSafe(newx, newy, maze, row, col, vis)) {
    vis[newx][newy] = true;
    PrintAllWays(maze, row, col, newx, newy, output + 'U', vis);
    vis[newx][newy] = false;
  }

  // down
  newx = srcx + 1;
  newy = srcy;
  if (IsSafe(newx, newy, maze, row, col, vis)) {
    vis[newx][newy] = true;
    PrintAllWays(maze, row, col, newx, newy, output + 'D', vis);
    vis[newx][newy] = false;
  }

  // left
  newx = srcx;
  newy = srcy - 1;
  if (IsSafe(newx, newy, maze, row, col, vis)) {
    vis[newx][newy] = true;
    PrintAllWays(maze, row, col, newx, newy, output + 'L', vis);
    vis[newx][newy] = false;
  }

  // right
  newx = srcx;
  newy = srcy + 1;
  if (IsSafe(newx, newy, maze, row, col, vis)) {
    vis[newx][newy] = true;
    PrintAllWays(maze, row, col, newx, newy, output + 'R', vis);
    vis[newx][newy] = false;
  }
}

int main() {
  int maze[4][4] = { {1, 0, 0, 0},
                     {1, 1, 0, 0},
                     {1, 1, 1, 0},
                     {1, 1, 1, 1} };

  int row = 4;
  int col = 4;
  int srcx = 0;
  int srcy = 0;
  string output;
  vector<vector<bool>> vis(row, vector<bool>(col, false));

  if (maze[0][0] == 0) {
    cout << "No path exists." << endl;
    return 0;
  } else {
    vis[srcx][srcy] = true;
    PrintAllWays(maze, row, col, srcx, srcy, output, vis);
  }

  return 0;
}
