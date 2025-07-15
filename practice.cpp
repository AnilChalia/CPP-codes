#include<bits/stdc++.h>
using namespace std;
class Queue{
  public:
  stack<int> s1,s2;
  Queue(){

  }

  void Push(int val){
    s1.push(val);

  }

  int Pop(){
    int pop = -1;
    if(!s2.empty()){
      pop = s2.top();
    }
    else{
      while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
      }
    }
    pop = s2.top();
    return pop;
  }

  int Front(){
    int front = -1;
    if(!s2.empty()){
      front = s2.top();
    }else{
      while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
      }
    }
    front = s2.top();
    return front;
  }

  bool Isempty(){
    return s1.empty() && s2.empty();
  }
};
int main(){












  return 0;
}