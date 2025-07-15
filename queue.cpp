#include<bits/stdc++.h>
using namespace std;

class Queue{
  public:
  int *arr;
  int size;
  int front;
  int rear;


  Queue(int size){
    arr = new int[size];
    this -> size = size;
    front = -1;
    rear = -1;
  }

  void push(int val){
    // full
    if(rear == size - 1){
      cout << "queue is full" << endl;
      return;
    }
    // empty case
    else if(front == -1 && rear == -1){
          front++;
          rear++;
          arr[rear] = val;
    }
    // normal case
    else{
      rear++;
      arr[rear] = val;
    }
  }

void pop(){
    // empty case
    if(front == -1 && rear == -1){
      cout <<"queue is underflow:" << endl;
      return ;
    }
    // single element
    else if(front == rear){
      arr[rear] = -1;
      rear = -1;
      front = -1; // Add a semicolon here
    }
    // normal case
    else{
      arr[front] = -1;
      front++;
    }
}
 

  bool isEmpty(){
    if(front == -1 && rear == -1){
      return true;
    }
    else{
      return false;
    }
  }

  int getSize(){
    return rear - front + 1;
  }

  int GetFront() {
    if(front == -1){
      cout<<"No elemnt prsent in queue:" << endl;
      return -1;
    }
    else{
    return arr[front];
    }
  }

  void print(){
    cout<<"printing the queue:" << endl;
    for(int i = front; i <= rear; i++){
      cout<< arr[i] <<" ";
    }
    cout<<endl;
  }


};




int main(){
   
   Queue q(5);
   q.print();

   
 
 
 


  // // creation
  //  queue<int>q;
  // // insertion
  // q.push(15);
  // q.push(25);
  // q.push(15);
  // q.push(51);
  // // size
  // cout << "size of queue is :" << q.size() << endl;
  // // empty or not
  // if(q.empty() == true){
  //   cout << "q is empty:" << endl;
  // }
  // else{
  //   cout << "q is not empty:" << endl;
  // }


  // // rempval
  // q.pop();
  // // size
  // cout << "size of queue is :" << q.size() << endl;
  // // empty or not
  // if(q.empty() == true){
  //   cout << "q is empty:" << endl;
  // }
  // else{
  //   cout << "q is not empty:" << endl;
  // } 

  // // front
  // cout << "front of q is :" << q.front() << endl;
  // // rear or back or last
  // cout << "last ele is q is :" << q.back() << endl;




  return 0;

}