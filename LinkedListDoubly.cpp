#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   Node* prev;
   Node* next;

   Node(){
    this -> prev = NULL;
    this -> next = NULL;
   }

   Node(int data){
    this -> data = data;
    this -> prev = NULL;
    this -> next = NULL;
   }
};

// INSERT AT HEAD:::::::::::::
void InsertAtTail(Node* &head, Node* &tail, int data) {
    if (head == NULL) {
        Node* NewNode = new Node(data);
        head = NewNode;
        tail = NewNode;
    } else {
        Node* temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
// INSERT AT TAIL:::::::::::::
void InsertAtHead(Node* &head,Node* &tail,int data){
     if(head == NULL){
        Node* NewNode = new Node(data);
        head = NewNode;
        tail = NewNode;
     }
     else{
      Node* NewNode = new Node(data);
      NewNode -> next = head;
      head -> prev = NewNode;
      head = NewNode;
     }
}
// INSERT AT PSITION::::::::::
void InsertAtPosition(Node* &head,Node* &tail,int data,int pos){
  if(head == NULL){
    Node* NewNode = new Node(data);
    head = NewNode;
    tail = NewNode;
  }
  // head pr h
  int len = FindLength(head);
  else if(pos == 1)
  {
     InsertAtHead(head,tail,data);
  }
  // insert at tail
  else if(pos == len){
     InsertAtTail(head,tail,data);
  }
  else{
    // insertt at middle
    Node* NewNode = new Node(data);
    Node* prevNode = NULL;
    Node* currNode = head;
    if(pos != 1){
      pos--;
      prevNode = currNode;
      currNode = curr -> next;
    }

    prevNode -> next = NewNode;
    NewNode -> prev = prevNode;
    NewNode -> next = currNode;
    currNode -> prev = NewNode;



  }
  
}

// DLETE FROM LINKED LIST:::::
void DeleteNodes(Node* &head,Node* tail,int pos){
  if(head == NULL){
    cout<<"we can't delete from empty list:" << endl;
  }

  int len = FindLength(head);
  if(pos == 1) {
    // dletefromhead
    Node* temp = head;
    head = head -> next;
    temp -> next =  NULL;
    head -> prev = NULL;
    delete temp;
  }
  else if(pos == len){
    // deletefromtail
    Node* prevNode = tail -> prev;
    prevNode -> next = NULL;
    tail -> prev = NULL;
    delete tail;
    tail = prevNode;
  }
  
  else{
    // deletefrommiddle
    Node* prevNode = NULL;
    Node* currNode = head;
    Node* NextNode = currNode -> next;
    while(pos != 1){
      pos--;
      prevNode = currNode -> next;
      currNode = currNode -> next;
    }
    NextNode = currNode -> next;
    currNode -> prev = NULL;
    currNode -> next = NULL;
    NextNode -> prev = prevNode;
    delete currNode;
  }

}


int FindLength(Node* &head){
  Node* temp = head;
  int cnt = 0;
  while(temp != NULL){
    cnt++;
    temp = temp -> next;
  }
  return cnt;
}

void Display(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout << temp -> data <<" ";
    temp = temp -> next;
  }
  cout << endl;
}

int main(){

  Node* head = NULL;
  Node* tail = NULL;
  InsertAtHead(head,tail,78);
  Display(head);
  InsertAtTail(head,tail,0);
  InsertAtTail(head,tail,1);
  InsertAtTail(head,tail,2);
  Display(head);




  return 0;


}