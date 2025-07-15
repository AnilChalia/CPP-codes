#include<bits/stdc++.h>
using namespace std;

int BinarySarch (int arr[],int n,int key) {
   int s = 0;
   int e = n-1;
   int mid = s+(e-s)/2;

   while(s<=e) {
    
    // found
    if(arr[mid] == key) {
      return mid;
    }
    
    // not found than right
    else if(arr[mid] < key){
      s = mid+1;
    }
    // left paprt
    else{
      e = mid-1;
    }

      mid = s+(e-s)/2;

   }

  //  kuch bhi return nhi hua , invalid index
  return -1;
}


int firstOccurence (int arr[],int n,int key) {
  int s = 0;
  int end = n - 1;
  int mid  = s + (end-s)/2;
  int ans = 0;

  while(s<=end){
    if(arr[mid] == key){
      ans = mid;
      end = mid-1;
    }
    
    else if(arr[mid] < key) {
      s = mid + 1;
    }

    else{
      end = mid - 1;
    }

   mid = s+(end-s)/2;

  }
return ans;

}

int endingOccurence (int arr[],int n,int key) {
  int s = 0;
  int end = n - 1;
  int mid  = s + (end-s)/2;
  int ans = 0;

  while(s<=end){
    if(arr[mid] == key){
      ans = mid;
      s = mid + 1;
    }
    
    else if(arr[mid] < key) {
      s = mid + 1;
    }

    else{
      end = mid - 1;
    }

   mid = s+(end-s)/2;

  }
return ans;

}

int lastOccueence (int arr[],int n,int key) {
  int first = firstOccurence(arr,n,key);
  int last = lastOccueence(arr,n,key);
  int total = first - last;
  return total;

}

int main () {

  int arr[7]={10,10,10,20,30,40,50};
  int n = 7;
  
  int target =  10;
  int index = BinarySarch(arr,n,target);
  cout<< "index of target value is :" << index << endl;


  int found  = firstOccurence(arr,n,target);
  // cout << "starting index is : "  << found << endl;
  if (found == -1) {
    cout <<"not found:"<< found << endl;

  }
  else{
    cout<<"found:"<<found << endl;
  }

  int ansIndex = endingOccurence(arr,n,target);
  if(ansIndex == -1){
    cout <<"not found:"<< ansIndex << endl;
  }
  else{
    cout<<"found:" << ansIndex << endl;
  }

  int Total = lastOccueence(arr,n,target);
  cout <<"toatal occurence is :" << Total << endl;

  return 0;

}



