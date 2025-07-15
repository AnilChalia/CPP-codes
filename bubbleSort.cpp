#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[],int n) {
   
  //  for 1 to n-1 round
  bool swapped = false;
   for(int i=1; i<n; i++) {
      
      // check 1 element greator then 2nd elment
       for(int j=0; j<n-i; j++) {
        if(arr[j] > arr[j+1]){
          swap(arr[j],arr[j+1]);
          swapped = true;
        }
       } 

       if(swapped == false){
        break;
       }
   }
}

void print(int arr[],int n){
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int arr[5] ={9,3,1,6,10};
  int n = 5;

  BubbleSort(arr,n);
  print(arr,n);


  return 0;

}