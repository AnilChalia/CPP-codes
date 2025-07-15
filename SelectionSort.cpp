#include<bits/stdc++.h>
using namespace std;
  void SelectionSort(int arr[],int n){
        for(int i=0; i<n-1; i++){
          int MinIndex = i;
          for(int j = i+1; j<n; j++){
            if(arr[j] < arr[MinIndex]){
              MinIndex = j;
            }
          }
          swap(arr[MinIndex],arr[i]);
        }
  }

int main(){

  int arr[5] = {64,25,12,22,11};
  int n = 5;
  
  SelectionSort(arr,n);

  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }cout<<endl;


  return 0;

}