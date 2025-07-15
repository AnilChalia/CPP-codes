#include<bits/stdc++.h>
using namespace std;

// PERMUTATION OF STRING:::::::
   void PrintPermutationString(string &str,int index){
    // bc
    if(index >= str.length()){
        cout << str <<" ";
        return;
    } 
      
     for(int j=index; j<str.length(); j++){
      swap(str[index],str[j]);

      PrintPermutationString(str,index+1);

      swap(str[index],str[j]);
     }
   }

int main(){
 
  // string str = "abc";
  // int index = 0;
  // cout << "all permutation of string: " << endl;
  // PrintPermutationString(str,index);



  int Maze[4][4] = { {1,0,0,0},{1,1,0,0},{1,1,1,0},{1,1,1,1}};
  int row = 4;
  int col = 4;

  int srcx = 0;
  int srcy = 0;
  string output = "";
  PrintMaze(Maze,row,col,srcx,srcy,output);

  return 0;

}