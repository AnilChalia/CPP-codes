// #include <iostream>
// using namespace std;

// class Node {
//         public:
//         int data;
//         Node* next;

//         Node() {
//                 this->data = 0;
//                 this->next = NULL;
//         }
//         Node(int data) {
//                 this->data = data;
//                 this->next = NULL;
//         }
//         ~Node(){
//                 cout <<"dtor:" << this -> data;
// //         }


// // };

// //I want to insert a node right at the head of Linked List
// void insertAtHead(Node* &head, Node* &tail, int data) {
//         //check for Empty LL
//         if(head == NULL) {
//                 Node* newNode = new Node(data);
//                 head = newNode;
//                 tail = newNode;
//         }
//         else {
//                 //step1:
//                 Node* newNode = new Node(data);
//                 //step2:
//                 newNode -> next = head;
//                 //step3:
//                 head = newNode;
//         }


// }
// //I want to insert a node right at the end of LINKED LIST
// void insertAtTail(Node* &head,Node* &tail, int data) {
//         if(head == NULL) {
//                 Node* newNode = new Node(data);
//                 head = newNode;
//                 tail = newNode;
                
//         }
//         else {
//             //step1: creatae a node
//             Node* newNode = new Node(data);
//             //step2: connect woth tail ndoe
//             tail->next = newNode;
//             //step3: update tail;
//             tail = newNode;
//         }

// }
// void print(Node* head) {

//         Node* temp = head;
//         while(temp != NULL) {
//                 cout << temp->data << " ";
//                 temp = temp->next;
//         }
// }

// int findLength(Node* &head ) {
//         int len = 0;
//         Node* temp = head;
//         while(temp != NULL) {
//                 temp = temp->next;
//                 len++;
//         }
//         return len;
// }

// void insertAtPosition(int data, int position, Node* &head, Node* &tail) {
//         int len = findLength(head);
        
//         if(position == 1) {
//                 insertAtHead(head, tail , data);
//                 return;
//         }
//         else if(position > len) {
//                 insertAtTail(head, tail, data);
//                 return;
//         }
//         else {
//             Node* newNode = new Node(data);
            
//             Node* prev = NULL;
//             Node* curr = head;
//             while(position != 1) {
//                 position--;
//                 prev = curr;
//                 curr = curr->next;
//             }
            
//             //step3:
//             newNode -> next = curr;

//             //step4:
//             prev -> next = newNode;
            
//         }
        
// }


// // delete at position 
// void DeleteNodes(Node* &head,Node* &tail,int pos){
//         if(head == NULL){
//                 cout<<"we cant delete a node"<<endl;
//                 return ;
//         }
        
//         int len = findLength(head);

//         // delete head
//         if(pos == 1) {
//                 Node* temp = head;
//                 head = head -> next;
//                 temp -> next = NULL;
//                 delete temp;

//         }

//         // dlete tail
//         else if(pos == len){
//                 Node* prev = head;
//                 while(prev -> next != NULL){
//                         prev = prev -> next;
//                 }

//                 prev -> next = NULL;

//                 delete prev;
//         }

//         // delete middle
//         else{
//                 Node* prev = NULL;
//                 Node* curr = head;
//                 while(pos != 1){
//                         pos--;
//                         prev = curr;
//                         curr = curr -> next;
//                 }

//                 prev ->  next = curr;
//                 curr = curr -> next;
//                 delete curr;

//         }


// }



// int main() {

//         Node* head = NULL;
//         Node* tail = NULL;
//         insertAtHead(head, tail,20);
//         insertAtHead(head, tail,50);
//         insertAtHead(head, tail,60);
//         insertAtHead(head,tail, 90);
//         insertAtTail(head, tail, 77);

//         print(head);
//         cout << endl;

//         return 0;
// }





// DOUBLY LINKED LIST:::::::::::::::::::::::::::::::::::::
#include<bits/stdc++.h>
using namespace std;

class Node {
        public:
        int data;
        Node* prev;
        Node* next;

        Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
                this -> prev = NULL;
        }
        ~Node(){
                cout <<"dtor:" << this -> data;
        }


};

void print(Node* head) {
        Node* temp = head;
        while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
        }
        cout << endl;
}

int Length(Node* head){
        Node* temp = head;
        int cnt = 0;

        while(temp != NULL){
                cnt++;
                temp = temp -> next;
        }
        return cnt;
}

// InsertAtHead::::::::
void InsertAtHead(Node* &head,Node* &tail,int data){
        if(head == NULL){
                Node* temp = new Node(data);
                tail = temp;
                head = temp;
        }
        else{
                Node* newNode = new Node(data);
                newNode -> next = head;
                head -> prev = newNode;
                newNode -> next = head;
                head = newNode;
        }
}

// INSERTAT TAIL::::::::::::::::

// dlete from head
void DeleteFromLL(Node* &head,Node* &tail,int pos){
        if(head == NULL){
                cout <<"we cant delete from this node :" << endl;
                return;
        }

        int len = Length(head);
        if(pos == 1){
                // dlelete from head
                Node* temp = head;
                head = temp -> next;
                temp -> next = NULL;
                delete temp;

        }

        else if(pos == len){
                // deletefromtail
                Node* prev = head;
                while(prev -> next != tail){
                        prev = prev -> next;
                }

                prev -> next = NULL;
                delete tail;
                prev = tail;

        }

        else{
                // dleteefrommiddle
                Node* prev =  NULL;
                Node* curr = head;
                while(pos == 1){
                        prev = curr;
                        curr = curr ->next;
                }

                prev -> next = curr -> next;
                curr -> next = NULL;
                delete curr;
                
        }
}


int main(){
       
        Node* head =  new Node(12);
        Node* tail = NULL;
        InsertAtHead(head,tail,3);
        print(head);
      




        return 0;
}