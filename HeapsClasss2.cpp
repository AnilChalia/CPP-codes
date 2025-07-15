#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int data;
     int row;
     int col;

    Node(int data,int row,int col) {
      this -> data = data;
      this -> row = row;
      this -> col = col;
    }
};
    class compare{
      bool operator()(Node* a,Node* b){
        return a -> data > b -> data;
      }
};

vector<int> MergeKArray(int arr[][3],int k ,int n){
   
   priority_queue<int,vector<int> ,compare> mh;

  //  push first k aarrye elemne t in mh
  for(int i = 0; i < k; i++) {
    Node* temp = new Node(arr[i][0],i,0);
    mh.push(temp);
  }

  vector<int> ans;

  while(!mh.empty()){
    Node* temp = mh.top();
    int topEle =  temp -> data;
    int topr = temp -> row;
    int topc = temp -> col;
    mh.pop();

    ans.push_back(topEle);

    if(topc + 1 < n) {

         Node* temp = new Node(arr[topr][topc + 1],topr,topc+1);
         mh.push(temp);

    }
  }
    
    return ans;

}

int main(){
  
 int arr[][3] ={ {4,5,2},{1,7,9},{90,3,0}};
 int k = 3;
 int n = 3;

 vector<int> ans = MergeKArray(arr,k,n);
 for(auto i:ans){
  cout << ans[i] <<" ";
 }cout << endl;

  return 0;
}