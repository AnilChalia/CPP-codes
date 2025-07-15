#include<bits/stdc++.h>
using namespace std;


// column wise print::::::
// void print(int arr[][3],int r,int c) {
//   for (int i=0; i<c; i++) {
//     for(int j=0; j<r; j++) {
//       cout << arr[j][i]<<" ";
//     }
//     cout<<endl;
//   }
// }


// rows wise print::::::
void print(int arr[][3],int r,int c) {
  for (int i=0; i<r; i++) {
    for(int j=0; j<c; j++) {
      cout << arr[i][j]<<" ";
    }
    cout<<endl;
  }
}


// FOUND VALUE IN ::::::::::
// bool Found (int arr[][3],int row,int col ,int Key) {
//      for(int i=0; i<row; i++) {
//       for (int j=0; j<row; j++) {
//         if(arr[i][j] == Key){
//           return true;
//         }
//       }
//      }

//      return false;


// }


// MAXIMUM IN ARRAY::::::::::::::
int MaxiMum(int arr[][3],int row,int col ) {

      int max = INT_MIN;

      for(int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
          if (max < arr[i][j]){
            max = arr[i][j];
          }
        }
      }
      return max;

}

// MINIMUM VALUE IN 2D ARRAY:::::::::::::::
int MiniMum(int arr[][3],int row,int col ) {

      int min = INT_MAX;

      for(int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
          if (min > arr[i][j]){
            min = arr[i][j];
          }
        }
      }
      return min;

}

// ROW WISE PRINT SUM::::::::::
void RowWiseSum(int arr[][3],int row,int col) {
  for(int i=0; i<row; i++) {
    int sum = 0;
    for(int j=0; j<col; j++) {
      sum += arr[i][j];
    }
    cout <<"sum is rowwise:" << sum << endl;
  }
}

// COLUMN WISE SUM PRINT::::::::
void ColWiseSum(int arr[][3],int row,int col) {
  for(int i=0; i<col; i++) {
    int sum = 0;
    for(int j=0; j<row; j++) {
      sum += arr[j][i];
    }
    cout <<"sum is rowwise:" << sum << endl;
  }
}


// TRANSPOSE:::::::
void TransPose(int arr[][3],int row,int col){

   for (int i=0; i<row; i++) {
    for(int j=i; j<col; j++) {
      swap(arr[i][j],arr[j][i]);
    }
    cout<<endl;
  }


}

int main () {

  // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  // int row = 3;
  // int col = 3;
  
  //  print(arr,row,col);

   
  //  TransPose(arr,row,col);
  //  cout <<"after Transpose :" << endl;
  //  print(arr,row,col);

  // cout <<"maximum is in array:" << MaxiMum(arr,row,col) << endl;
  // cout <<"minimum is in array:" << MiniMum(arr,row,col) << endl;

  // // int Key;
  // // cout <<"inter the target value:" << endl;
  // // cin >> Key;

  // // bool ans  = (arr,row,col,Key);
  // // if(ans) {
  // //   cout<<"found:"<<endl;
  // // }
  // // else{
  // //   cout<<"not found :" << endl;
  // // }


  // RowWiseSum(arr,row,col);
  // ColWiseSum(arr,row,col);








  return 0;

}