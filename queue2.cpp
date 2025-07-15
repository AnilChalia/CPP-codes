// #include<bits/stdc++.h>
// using namespace std;

// // REVERSE ELEMENT IN QUEUE:::::
// void revrse(queue<int> &q){
//   stack<int> s;
//   while (!q.empty())
//   {
//     int FrontEle = q.front();
//     q.pop();
//     s.push(FrontEle);
//   }
//   while(!s.empty()){
//     int ele = s.top();
//     s.pop();
//     q.push(ele);
//   }  
  

//   // // using recursevely
//   // if(q.empty()){
//   //   return ;
//   // }

//   // int Ele = q.front();
//   // q.pop();

//   // reverse(q);
//   // q.push(Ele);
   
// }

// // REVERSE K ELEMENT IN QUEUE::::::::::
// void ReverseKele(queue<int>&q,int k){
// // first k ele into stack
// stack<int> s;
// if(k > q.size() || k == 0){
//   return;
// }

// for(int i=0; i<k; i++){
//   int temp = q.front();
//   q.pop();
//   q.push(temp);
// }
// // push stack ele to q
// while(!s.empty()){
//   int temp = s.top();
//   s.pop();
//   q.push(temp);
// }
// // n-k ele pop and push in q
// for(int i=0; i<q.size()-k;i++){
//   int temp = q.front();
//   q.pop();
//   q.push(temp);
//  }
// }

// // FIRST NON REPEATING CHARACTER IN STREAM::::::::



// int main(){



//   string str = "ababc";
//   queue<int> q;
//   int freq[26] = {0};

//   for(int i=0; i<str.length(); i++){
//     char ch = str[i];
//     freq[ch-'a']++;
//     q.push(ch);


//     // answer find kro
//     while(!q.empty()){
//       char front = q.front();
//       // frequency check kro
//       if(freq[front-'a'] > 1){ 
//         // ans nhi
//         q.pop();
//       }
//       else{
//         // == 1 case unique charcter
//         // yhi ans h
//         cout << front <<" -> ";
//         break;
//       }
//     }

//     if(q.empty()){
//       cout << "#" << " -> ";
//     }
//   }

//   // queue<int> q;
//   // q.push(1);
//   // q.push(2); 
//   // q.push(3);
//   // q.push(4);
//   // q.push(5);
//   // q.push(6);

//   // // revrse(q);
//   // int k = 4;
//   // ReverseKele(q,k);

//   // while(!q.empty()){
//   //   int ele = q.front();
//   //   q.pop();
//   //   cout << ele << " ";
//   // }cout << endl;








//   return 0;

// }


// IMPLEMENT QUEUE USING TWO STACK:::::::::::::::::
#include<bits/stdc++.h>
using namespace std;
class Queue{
  stack<int> s1,s2;

  public:

// push operation
  void push(int x){
     s1.push(x);
  }
// pop operation
  int pop(){
   if(s1.empty() && s2.empty()){
    return -1;
   }
   if(s2.empty()){
    while(!s1.empty()){
      s2.push(s1.top());
      s1.pop();
    }
   }
   int top = s2.top();
   s2.pop();
   return top;
  }

// empty operation
  bool Empty(){
    if(s1.empty() && s2.empty()){
      return true;
    }
    return false;
  }

  void interLeave(){
    queue<int> second;

    int n = q.size();
    for(int i=0; i<n/2; i++){
      int temp = q.front();
      q.pop();

      second.push(temp);
    }

    for(int i=0; i<n/2; i++){
      int temp = second.front();
      second.pop();

      second.push(temp);

      temp = q.front();
      q.pop();
      q.push(temp);
    }
    
  }


};

int main(){
  Queue q;
  q.push(1);
  q.push(2);
  q.push(7);
  q.push(5);
  q.push(4);
  cout << q.pop();
  q.push(8);
  q.pop();
  q.pop();
  q.pop();
  q.pop();
  q.pop();
  q.pop();

  return 0;
}