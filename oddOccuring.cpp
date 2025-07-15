#include<bits/stdc++.h>
using namespace std;

int FindOccuringElement(int arr[],int n) {
   
   int s = 0;
   int e = n -1;
   int mid = s+(e-s)/2;

   while(s <= e) {
        
        if(s == e){
          return s;
        }

        if(mid & 1) {
          // odd number
          if( arr[mid-1] >= 0 && arr[mid-1] == arr[mid]){
            s = mid + 1;
          }
          else{
            e = mid - 1;
          }
        }

        else{
          // even number
          if(arr[mid+1] <= n && arr[mid] == arr[mid+1]){
            s = mid + 2;
          }
          else{
            // right pr hu or ans pr khda hu
            e = mid;
          }
        }

        mid = s+(e-s)/2;
   }

   return -1;

}

int main () {

  int arr[11] = {1,1,5,5,2,2,3,3,1,4,4};
  int n = 11;

  int ans = FindOccuringElement(arr,n);

  cout <<"final answer is :" << arr[ans] << endl;
 

  return 0;


}