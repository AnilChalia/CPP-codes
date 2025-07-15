#include<bits/stdc++.h>
using namespace std;
// creation
class Nodes{
  public:
  int data;
  Nodes* next;

// object create default ctor
  Nodes(){
    this -> next = NULL;
  }
// parameterize ctor
  Nodes(int data){
    cout <<"i am parametrize ctor:" << endl;
    this ->data = data;
    this -> next = NULL;
  }

};
// printing the nodes
void Print(Nodes* head){
  Nodes* temp = head;
  while(temp != NULL){
    cout << temp -> data <<" ";
    temp = temp -> next;
  }
  cout << endl;
}

// print length of nodes
int getlength(Nodes* head){
    Nodes* temp = head;
    int len = 0;
    while(temp != NULL) {
      len++;
      temp = temp -> next;
    }
    return len;
}

// insert at head
void InsertatHead(Nodes* &head,int data){
// head Null to create new nodes usme data daldo or usko head point krado
  if(head == NULL){
    Nodes* newNode = new Nodes(data);
    // update head
    head = newNode;
  }
  // mtlb ll khali nhi to us casse me craete nodes
  else{
  Nodes* temp = new Nodes(data);
  // newnode ko head point krado
  temp -> next = head;
  // head ko  updatae krado
  head = temp;
 }
}

// insert at tail
void insertAttail(Nodes* &head,Nodes* &tail,int data){
  if(head == NULL) {
    // empty ll
    Nodes* newnode = new Nodes(data);
    // head point or tail point
    head = newnode;
    tail = newnode;
  }
  // non empty
  else{
    // create node
    Nodes* temp = new Nodes(data);
    // tail nodes ko point new node pr
    tail -> next = temp;
    // update tail
    tail = temp;
  }
}

int main(){

 Nodes* head = NULL;
 Nodes* tail = NULL;

 InsertatHead(head,8);
 InsertatHead(head,3);
 InsertatHead(head,9);
 insertAttail(head,tail,10);
 insertAttail(head,tail,11);
 insertAttail(head,tail,12);
 Print(head);







// // intialize object
//   // Nodes a;

// // dynamic object create
//   Nodes* head = new Nodes(89);
//   Print(head);
  

//   cout << getlength(head) << endl;
//   InsertatHead(head,34);
//   Print(head);
  
//   Nodes* tail = head;
//   insertAttail(head,tail,90);
//   Print(head);




  return 0;
}