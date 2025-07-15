#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(){
    cout<<"default ctor:" << endl;
  }

  Node(int data){
    this -> data = data;
    this -> next = NULL;
  }
};

Node* reverse(Node* &head){
  Node* prev = NULL;
  Node* curr = head;
  while(curr != NULL){
    Node* nextNode = curr -> next;
    curr -> next = prev ;
    prev = curr;
    curr = nextNode;
  }
  return prev;
}

Node* GetStartingPointOfLoop(Node* head){
  Node* slow = head;
  Node* fast = head;

  while(fast != NULL){
    fast = fast -> next;
    if(fast != NULL){
      fast = fast -> next;
      slow = slow -> next;
    }

    if(fast == slow){
      break;
    }
  }
     slow = head;
     while(fast != slow){
      fast = fast -> next;
      slow = slow -> next;
     }
     return slow;
}

void InsertatHead(Node* &head,int data){
// head Null to create new nodes usme data daldo or usko head point krado
  if(head == NULL){
    Node* newNode = new Node(data);
    // update head
    head = newNode;
  }
  // mtlb ll khali nhi to us casse me craete nodes
  else{
  Node* temp = new Node(data);
  // newnode ko head point krado
  temp -> next = head;
  // head ko  updatae krado
  head = temp;
 }
}


void AddOne(Node* &head){
  head = reverse(head);
  int carry = 1;
  Node* temp = head;
  while(temp -> next != NULL){
    int totals = temp -> data + carry;
    int digit = totals % 10;
    carry = totals/10;
    temp -> data = digit;
    temp = temp -> next;
  }

  if(carry != 0){
    int totals = temp -> data + carry;
    int digit = totals % 10;
    carry = totals/10;
    temp -> data = digit;
    temp = temp -> next;
    
    if(carry != 0){
      Node* newNode = new Node(carry);
      temp -> next = newNode;
    }

  }

  head = reverse(head);
}


void Print(Node* head){
  Node* temp = head;
  while(temp != NULL) {
    cout << temp -> data<<"->"<<" " ;
    temp = temp -> next;
  }
  cout << endl;
}

int main(){

  Node* head = new Node(1);
  InsertatHead(head,2);
  InsertatHead(head,3);
  InsertatHead(head,4);
  InsertatHead(head,5);
  InsertatHead(head,6);
  // GetStartingPointOfLoop(head);
  Print(head);

  AddOne(head);
  Print(head);

  return 0;
}