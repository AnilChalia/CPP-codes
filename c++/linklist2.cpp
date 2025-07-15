
// // #include<iostream>
// // using namespace std;
// // class node{
// //    public:
// //    int data;
// //     node* next;

// //    node(int data){
// //     this -> data = data;
// //     this ->  next = NULL;
// //    }

// // };


// // void insertAtHead(node* &head,int data){
// //     node* temp = new node(data);
// //     temp->next = head;
// //     head = temp;

// // }

// // void insertAtTail(node* &tail,int d){
// //     node* temp = new node(d);
// //     tail->next = temp;
// //     temp = tail;
// // }

// // void print(node* &head){
// //     node* temp = head;

// //     while(temp != NULL){
// //         cout << temp->data << " ";
// //         temp = temp->next;
// //     }cout<<endl;
// // }

// // int main(){
// //     node* node1 = new node(10);
// //     // cout << node1->data << endl;n
// //     // cout << node1->next << endl;

// //     node* head = node1;

// //     insertAtHead(head,56);
// //     cout<<"after head node:"<<endl;
// //     print(head);
// //     insertAtHead(head,11);
// //     cout<<"after head node:"<<endl;
// //     print(head);
// //     insertAtHead(head,5);
// //     cout<<"after head node:"<<endl;
// //     print(head);
    
// //     node* tail = node1;
// //     insertAtTail(tail,45);
// //     cout<<"after tail the node:"<<endl;
// //     print(head);

    

  
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // class linklist{
// //    public:
// //    int data;
// //    linklist* next;

// //    linklist(int data){
// //     this->data = data;
// //     this->next = NULL;
// //    }

// // };

// // void insert (linklist* &head,int d){
// //     linklist* temp = new linklist(d);
// //     temp->next = head;
// //     head = temp;
// // }

// // void print(linklist* &head){
// //     linklist* temp = head;

// //     while(temp != NULL){
// //         cout<<temp->data << " ";
// //         temp = temp->next;
// //     }cout<<endl;
// // }
// // int main(){

// //     linklist* node1 = new linklist(10);
// //     // cout<< node1->data << endl;
// //     // cout << node1->next << endl;

// //     linklist* head = node1;
// //     insert(head,12);
// //     cout<<"after insert the node:"<< endl;
// //     print(head);

   
// // //     return 0;
// // // }

// // #include<iostream>
// // using namespace std;
// // class node{
   
// //    public:
// //    int data;
// //    node* next;

// //    node(int data){
// //     this->data = data;
// //     next = NULL;
// //    }
// // };
   

// // void InsertAtHead(node* &head,int d){
// //     node* temp = new node(d);
// //     temp->next = head;
// //     head = temp;
// // }

// // void insertAtTail(node* &tail,int d){
// //     node* temp = new node(d);
// // tail->next = temp;
// //     tail = temp;
// // }

// // void print (node* &head){
    
// //     node * temp = head;

// //     while(temp != NULL){
// //         cout << temp->data<<" ";
// //         temp = temp->next;
// //     }

// // }

// // int main(){
    
// //     node* node1 = new node(10);

// //     cout << node1->data << endl;
// //     cout << node1->next << endl;
     

// //      node* head = node1;
// //      InsertAtHead (head,24);

// //      cout<<"after insertion the linklist:"<< endl;

// //      print(head);

//     //  node* tail = node1;

//     //  insertAtTail (tail,56);
//     // cout<<endl<<endl;
//     //  cout<<"after tai the item:" << endl;

//     //  print(head);
  

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // class node{
// //    public:
// //    int data;
// //    node* next;

// //    node(int data){
// //     this->data = data;
// //     next = NULL;
// //    }
// // };

// // void insert (node* &head,int d){
// //     node* temp = new node(d);
// //     temp->next = head;
// //     head = temp;
// // }

// // void inserttail (node* &tail,int d){
// //     node* temp = new node(d);
// //     tail->next = temp;
// //     tail = tail->next;
// // }
// // void insertAtPosition(node* & head,int position,int d){
// //     if(position == 1){
// //         insert(head,d);
// //         return;
// //     }

// //     node* temp = head;
// //     int count = 0;

// //     while( count < position){
// //         temp = temp->next;
// //         count++;
// //     }

// //    if(temp->next == NULL){
// //     inserttail(tail,d);
// //     return;
// //    }

// //    node* nodeToInsert = new node(d);
// //    nodeToInsert->next = temp->next;
// //    temp->next = nodeToInsert;


// // }
// // void print (node* &head){
// //    node* temp = head;

// //    while(temp != NULL){
// //     cout << temp->data<<" ";
// //     temp = temp->next;
// //    }cout<<endl;
// // }
// // int main(){
// //    node* node1 = new node(19);

// //    node* head = node1;
// //    insert(head,12);
// //    print(head);

// //    node* tail = node1;
// //    inserttail(tail ,123);
// //    print(head);

// //    insertAtPosition(head,2,55);
// //    print(head);

// //     return 0;
// // // }



// // #include<iostream>
// // using namespace std;
// // class node{
// //   public:
// //   int data;
// //   node* next;

// //   node(int data){
// //     this->data = data;
// //     next = NULL;
// //   }
// // };


// // void insertatHead(node* &head,int d){
// //     node* temp = new node(d);
// //     temp->next = head;
// //     head = temp;
// // }

// // void insertatPos(int position,int d){
// //     if(position == 1){
// //         insertatHead(head,d);
// //         return ;
// //     }

// //     node* temp = head;
// //     int count  = 1;

// //     while(count < position-1){
// //         temp  = temp->next;
// //         count++;
// //     }

// //     while(temp->next == NULL){
// //         insertAttail(tail,d);
// //         return;
// //     }

// //     node* nodeToInsert = new node(d);
// //     nodeToInsert->next = temp->next;
// //     temp->next = nodeToInsert;
// // }

// // void insertAttail(node* &tail,int d){
// //     node* temp = new node(d);
// //     tail->next = temp;
// //     tail = tail->next;
// // }
// // void print (node* &head){
// //     node* temp = head;
// //     while(temp != NULL){
// //         cout<< temp->data<<" ";
// //         temp = temp->next;
// //     }
// // }
// // int main(){
// //     node* node1 = new node(18);
// //     cout << node1->data << endl;
// //     cout << node1->next << endl;

// //     node* head = node1;
// //     insertatHead(head,12);
// //     print(head);


// //     node* tail = node1;
// //     insertAttail(tail,123);
// //     print(tail);

 
// //     insertatPos(head,3,12);
// //     print(head);


// //     return 0;
// // // // }



// // #include<iostream>
// // using namespace std;
// // class node{
// //   public:
// //   int data;
// //   node* next;

// //   node(int data){
// //     this->data = data;
// //     next = NULL;
// //   }
// // };


// // void insertatHead(node* &head,int d){
// //     node* temp = new node(d);
// //     temp->next = head;
// //     head = temp;
// // }

// // void insertAttail(node* &tail,int d){
// //     node* temp = new node(d);
// //     tail->next = temp;
// //     tail = tail->next;
// // }

// // void insertAtPos(node* &head,int pos,int d){

// //     if(pos == 1){
// //         insertatHead(head,d);
// //         return;
// //     }

// //     node* temp = head;
// //     int count  = 0;

// //     while(count < pos-1){
// //         temp = temp->next ;
// //         count ++;
// //     }

// //     if(temp->next == NULL){
// //         insertAttail(tail,d);
// //         return;

// //     }

// //     node* nodeToInsert = new node(d);
// //     nodeToInsert->next = temp->next;
// //     temp->next = nodeToInsert;
// // }
// // void print (node* &head){
// //     node* temp = head;
// //     while(temp != NULL){
// //         cout<< temp->data<<" ";
// //         temp = temp->next;
// //     }
// // }

// // int main(){
// //     node* node1 = new node(10);


// //     node* head = node1;
// //     insertatHead(head,13);
// //     print(head);


// //     return 0;
// // }


// #include<iostream>
// using namespace std;
// void mergesort(int arr1[],int n,int arr2[],int m,int arr3[]){
//     int i=0,j=0;
//     int k=0;

//     while(i < n && j < m){
//        if(arr1[i] < arr2[j]){
//         arr3[k++] = arr1[i++];
//        }
//        else{
//         arr3[k++] = arr2[j++];
//        }
//     }

//     while(i < n){
//         arr3[k++] = arr1[i++];
//     }
//     while(j<m){
//         arr3[k++] = arr2[j++];
//     }
// }
// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }
// int main(){
//     int arr1[5]={1,2,3,4,5};
//     int arr2[3]={12,34,56};
//     int arr3[8]={0};

//     mergesort(arr1,5,arr2,3,arr3);
//     print(arr3,8);
//     return 0;

// }


#include<bits/stdc++.h>
using namespace std;
class Node{
   
   public:
     int data;
     Node*next;

     Node(int data){
        this -> data = data;
        this -> next = NULL;
     }
};
void InsertaAThead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}
int main(){
    
    Node node1(3);
    Node* head = node1;
    InsertaAThead(head,3);



    return 0;
}