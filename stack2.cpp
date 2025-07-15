// #include<bits/stdc++.h>
// using namespace std;
// // IMPLEMENT TWO STACK USING ARRAY::::::::::
// class Stack{
//   public:
//   int *arr;
//   int size;
//   int top1;
//   int top2;
  
//   Stack(int size){
//     arr = new int[size];
//     this -> size = size;
//     top1 = -1;
//     top2 = size;
//   }

//   void Push1(int data) {
//     if(top2 - top1 == 1){
//       cout << "stack overflow:" << endl;
//     }
//     else{
//     top1++;
//     arr[top1] = data;
//     }
//   } 

//   void Push2(int data){
//     if(top2 - top1 == 1){
//       cout<<"stack overflow:"<<endl;
//     }
//     else{
//     top2--;
//     arr[top2] = data;
//    } 
//   }

//   void pop1(){
//     if(top1 == -1){
//       cout<<"underflow:"<<endl;
//     }
//     else{
//     arr[top1] = 0;
//     top1--;
//     }
//   }

//   void pop2(){
//     if(top2==size){
//       cout<<"underflow:"<<endl;
//     }
//     else{
//     arr[top2] = 0;
//     top2++;
//    }
//   }

//   void print(){
//     cout << endl;
//     cout <<"top1:" << top1 << endl;
//     cout<<"top2:"<< top2 << endl;
//     for(int i=0;i<size;i++){
//       cout<<arr[i]<<" ";
//     }cout<<endl;
//   }

// };
// int main(){
//   Stack st(6);
//   st.print();
  
//   st.Push1(2);
//   st.print();

//   st.Push2(4);
//   st.print();

//   st.Push1(8);
//   st.print();

//   st.Push2(88);
//   st.print();

 





//   return 0;

// }

// MIN STACK IMPLEMENT::::::::::::::::::::::::::::::::::::::::::::::
// class MinStack {
// public:
//     vector<pair<int,int> > st;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//          pair<int,int> p;
//         if(st.empty()){
//             p.first = val;
//             p.second = val;
//             st.push_back(p);
//         }
//         else{
//             p.first=val;
//             int puranMin = st.back().second;
//             p.second = min(puranMin,val);
//             st.push_back(p);
//         }
//     }
    
//     void pop() {
  // pop back piche se he pop kr rha hota h//
//         st.pop_back();
//     }
    
//     int top() {
//         pair<int,int> RightPair = st.back();
//         return RightPair.first;
//     }
    
//     int getMin() {
//         pair<int,int> RightPair = st.back();
//         return RightPair.second;
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */ 

// FIND NEXT SMALLER ELEMENT IN ARRAY::::::::::::::
#include<bits/stdc++.h>
using namespace std;
vector<int>  FindPrevtSmallerElement(int arr[],int n,vector<int> &ans){
   stack<int> s;
   s.push(-1);
   for(int i=0; i<n; i++){
    int curr = arr[i];
    while(s.top() >= curr){
      s.pop();
    }
    ans[i] = s.top();
    s.push(curr);
   }
   return ans;
}
int main(){

  int arr[5]={8,4,6,2,3};
  int n = 5;

//NEXT SMALLER ELEMNT:::::::::::::::: 
  // vector<int> ans(n);
  // ans = FindNextSmallerElement(arr,n,ans);
  // for(auto i:ans){
  //   cout << i <<" ";
  // }
  // cout<<endl;

// PREV SMALLERELEMNT :::::::::::::::
  vector<int> prev(n);
  prev = FindPrevtSmallerElement(arr,n,prev);
  for(auto i:prev){
    cout << i <<" ";
  }
  cout<<endl;

 
  return 0;
}