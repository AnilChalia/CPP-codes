#include<bits/stdc++.h>
using namespace std;
int NearlySorted(int arr[],int n,int target) {
   
     int s = 0;
     int e = n - 1;
     int mid = s + (e - s) /2;

     while (s <= e) {
          
          if(arr[mid - 1] >= 0 && arr[mid - 1] == target ) {
                return mid - 1;
          }
          if(arr[mid] == target) {
            return mid;
          }
          if(arr[mid+1] <= n && arr[mid+1] == target) {
            return mid+1;
          }

          if(target > arr[mid]){
            s = mid + 2;
          }
          else{
            e = mid - 2;
          }
       
        mid = s + (e - s)/2;

    }

    return -1;
}


int main () {

  int arr[7] = {20,10,30,50,40,70,60};
  int target = 70;

  int found = NearlySorted(arr,7,target);
  
 
  cout << "found or not  :" << found << endl;
  






  return  0;


}