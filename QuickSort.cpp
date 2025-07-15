// #include<bits/stdc++.h>
// using namespace std;

// int Partition(int arr[],int s,int e){
//   int pivot = arr[s];
//   int cnt = 0;

// for(int i=s+1; i<=e; i++){
//   if(arr[i] <= pivot){
//     cnt++;
//     }
//   } 

//   // place pivot at right place
//   int pi = s + cnt;
//   swap(arr[pi],arr[s]);

//   // left part and right place
//   int i = s , j = e;

//   if(i < pi && j > pi){
//     while(arr[i] < pivot){
//        i++;
//     }
 
//     while(arr[j] > pivot){
//       j--;
//     }
    
//     if(i < pi && j > pi){
//       swap(arr[i++],arr[j--]);
//      }
//   }

// return pi;

// }

// void QuickSort(int arr[],int s,int e){
   
//    if(s >= e){
//     return;
//    }
//   // Partition
//    int p = Partition(arr,s,e);
//   //  leftpart
//   QuickSort(arr,s,p-1);
//   // rightpart
//   QuickSort(arr,p+1,e);

//   // if(s >= e){
//   //   return;
//   // }
  
//   // int pivot = e;
//   // int i = s+1;
//   // int j = s;

//   // while(i < pivot){
//   //   if(arr[j] < arr[pivot]){
//   //     i++;
//   //     swap(arr[i],arr[j]);
//   //   }
//   //   j++;
//   // }

//   // i++;
//   // swap(arr[i],arr[pivot]);
//   // QuickSort(arr,s,i-1);
//   // QuickSort(arr,i+1,e);
// }


// // // int main(){
// // //   int arr[5] = {8,4,9,1,3};
// // //   int n  = 5;
// // //   QuickSort(arr,0,n-1);
// // //   return 0;
// // // }









// // // void solve(string str,int index,string &ans) {
      
// // //         if(index >= str.length()) {
// // //              ans.push_back(str);
// // //              return ;
// // //          }

// // //          for(int j=index; j<str.length(); j++) {
// // //              swap(str[index],str[j]);
// // //              solve(str,index+1,ans);
// //                 // backtrack
// // //              swap(str[index],str[j]);
// // //          } 
         
// // // }

// // // vector<string> generatePermutations(string &str)
// // // {
    
// // //        vector<string> ans="";
// // //        int index = 0;
// // //        solve(str,index,ans);
// // //        return ans;

// // // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // void QuickSort(int arr[],int s,int e){
// //   // bc
// //   if(s >= e){
// //     return;
// //   }

// //   // processing
// //   int Pivot = e;
// //   int j = s;
// //   int i = s - 1;
   
// //   while(j < Pivot){
// //     if(arr[j] < arr[Pivot]){
// //       i++;
// //       swap(arr[i],arr[j]);
// //     }
// //     j++;
// //   }
// //   i++;
// //   swap(arr[i],arr[Pivot]);

// //   // functioncall
// //   QuickSort(arr,s,i-1);
// //   QuickSort(arr,i+1,e);
// // }

// int main(){
  
//   int arr[5]={5,6,8,3,1};
//   int n = 5;
//   QuickSort(arr,0,n-1);

//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }cout<<endl;



//   return 0;

// }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //   int arr[] = {7,9,1,8,6,32,80,12};
// //   int n = 8;
  


// //   return 0;
// // }
#include <bits/stdc++.h>
using namespace std;

int PartitionArray(int arr[], int s, int e) {
    int pivot = arr[s]; // First element as pivot
    int count = 0;
    
    // Count how many elements are less than or equal to the pivot
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }

    // Pivot's correct position
    int PIndex = s + count;
    swap(arr[PIndex], arr[s]);  // Put the pivot in its correct position

    // Rearrange elements around the pivot
    int i = s, j = e;
    while (i < PIndex && j > PIndex) {
        // Move left pointer until we find an element larger than pivot
        while (arr[i] <= pivot) {
            i++;
        }

        // Move right pointer until we find an element smaller than pivot
        while (arr[j] > pivot) {
            j--;
        }

        // Swap elements to their correct sides of the pivot
        if (i < PIndex && j > PIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return PIndex;  // Return pivot index
}

void QuickSort(int arr[], int s, int e) {
    if (s >= e) {
        return;  // Base case
    }

    // Partition the array
    int part = PartitionArray(arr, s, e);
    
    // Sort left part
    QuickSort(arr, s, part - 1);

    // Sort right part
    QuickSort(arr, part + 1, e);
}

int main() {
    int arr[] = {10, 1, 7, 4, 8, 2, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, n - 1);

    // Print the sorted array
    for(int i = 0; i < n; i++) {
      cout << arr[i] <<" ";
    }cout << endl;
   
}