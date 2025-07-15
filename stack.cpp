// #include<bits/stdc++.h>
// using namespace std;

// #include <iostream>
// const int MAX_SIZE = 5; // Maximum size of the stack

// class Stack {
// private:
//     int arr[MAX_SIZE];
//     int top;

// public:
//     Stack() {
//         top = -1;} // Initialize top to -1 to indicate an empty stack

//     bool isEmpty() {
//         return (top == -1);}

//     bool isFull() {
//         return (top == MAX_SIZE - 1);}

//     void push(int element) {
//         if (!isFull()) {
//             top++;
//             arr[top] = element;
//             std::cout << "Pushed element: " << element << " onto the stack.\n";
//         } else {
//             std::cout << "Stack is full. Cannot push element " << element << ".\n";
//         }
//     }

//     void pop() {
//         if (!isEmpty()) {
//             int poppedElement = arr[top];
//             top--;
//             std::cout << "Popped element: " << poppedElement << " from the stack.\n";
//         } else {
//             std::cout << "Stack is empty. Cannot pop from an empty stack.\n";
//         }
//     }

//     int topElement() {
//         if (!isEmpty()) {
//             return arr[top];
//         } else {
//             std::cout << "Stack is empty.\n";
//             return -1; // In this example, we consider -1 as an invalid value.
//         }
//     }
// };
// int main() {

//     Stack myStack;
//     // Push elements until the stack becomes full
//     for (int i = 1; i <= 5; ++i) {
//         myStack.push(i);
//     }
//     // Attempt to push more elements into the full stack
//     myStack.push(6);
//     // Pop all elements until the stack becomes empty
//     while (!myStack.isEmpty()) {
//         myStack.pop();
//     }


//     return 0;

// }


#include<bits/stdc++.h>
using namespace std; 

class Stack {
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size) {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void Push1(int data) {
        if (top1 + 1 == top2) { // Changed the condition here
            cout << "Stack overflow for stack 1." << endl;
        }
        else {
            top1++;
            arr[top1] = data;
        }
    }

    void Push2(int data) {
        if (top1 + 1 == top2) { // Changed the condition here
            cout << "Stack overflow for stack 2." << endl;
        }
        else {
            top2--;
            arr[top2] = data;
        }
    }

    void pop1() {
        if (top1 == -1) {
            cout << "Stack 1 underflow." << endl;
        }
        else {
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2() {
        if (top2 == size) {
            cout << "Stack 2 underflow." << endl;
        }
        else {
            arr[top2] = 0;
            top2++;
        }
    }

    void print() {
        cout << "top1: " << top1 << endl;
        cout << "top2: " << top2 << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
// insert at bottom in stack
void insetAtBottom(stack<int> &st,int ele){
  if(st.empty()){
    st.push(ele);
    return;
  }

  int temp = st.top();
  st.pop();

  insetAtBottom(st,ele);

  st.push(temp);
}

// Reverse stack
void Revrese(stack<int>&st){
  if(st.empty()){
    return;
  }
  int temp = st.top();
  st.pop();

  Revrese(st);

  insetAtBottom(st,temp);
}


// insert at sorted stack
void InsertAtSortedStack(stack<int>&st,int ele){
    if(st.empty() || ele > st.top()){
        st.push(ele);
        return;
    }

    int temp = st.top();
    st.pop();

    InsertAtSortedStack(st,ele);
    st.push(temp);
}

// sort the stack
void SortStack(stack<int>&st){
  if(st.empty()){
    return;
  }
  
  int temp = st.top();
  st.pop();

  SortStack(st);
  InsertAtSortedStack(st,temp);
}
int main(){
 // insert at bottom in stack
  // stack<int> st;
  // st.push(10);
  // st.push(20);
  // st.push(30);
  // st.push(40);
  // int elemenet = 420;
  // insetAtBottom(st,elemenet);
  // while(!st.empty()){
  //   cout<< st.top()<<" ";
  //   st.pop();
  // }cout<<endl;


// // reverse stack
//   stack<int> st;
//   st.push(10);
//   st.push(0);
//   st.push(30);
//   st.push(4);
//   // InsertAtSortedStack(st,14);
//  SortStack(st);
//   while(!st.empty()){
//    cout<< st.top()<<" ";
//    st.pop();
//   }cout<<endl;


   Stack st(6);
   st.print();
   st.Push1(1);
   st.print();
   st.Push1(3);
   st.Push1(4);
   st.print();
   st.Push2(7);
   st.Push2(8);
   st.Push2(9);
   st.print();
  return 0;

}