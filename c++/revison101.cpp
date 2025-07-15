
// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // class Node{
// // // // //    public:
// // // // //    int data;
// // // // //    Node* next;
// // // // //    Node* prev;

// // // // //    Node(int d){
// // // // //     this->data = d;
// // // // //     this->next = NULL;
// // // // //     this->prev = NULL;
// // // // //    }
// // // // //    ~Node(){
// // // // //      int val = this -> data;
// // // // //      if(this->next != NULL){
// // // // //         delete next;
// // // // //         this->next = NULL;
// // // // //      }
// // // // //      cout<<"after memory free:"<< val << endl;
// // // // //     }
// // // // // };
// // // // // void InseratHead (Node* &head,int d){
// // // // //     Node* temp = new Node(d);
// // // // //     temp -> next  = head;
// // // // //     head = temp ;
// // // // // }
// // // // // void Insertatail(Node* &tail,int d){
// // // // //     Node* temp = new Node(d);
// // // // //     tail -> next = temp;
// // // // //     temp = temp -> next;
// // // // //     tail = temp;
// // // // // }

// // // // // void Insertapos (Node* &head,Node* &tail,int pos,int d){
// // // // //     if(pos == 1){
// // // // //         InseratHead(head,d);
// // // // //         return;
// // // // //     }

// // // // //     Node* temp = head;
// // // // //     int count = 0;

// // // // //     while(count < pos-1){
// // // // //         temp = temp -> next;
// // // // //         count++;
// // // // //     }

// // // // //     if(temp -> next != NULL){
// // // // //         Insertatail(tail,d);
// // // // //         return;
// // // // //     }

// // // // //     Node* NodeToInsert = new Node(d);
// // // // //     NodeToInsert -> next = temp -> next;
// // // // //     temp -> next = NodeToInsert;
// // // // // }

// // // // // // void deletion (int pos ,Node* &head){
// // // // // //     if(pos == 1){
// // // // // //         Node* temp = head;
// // // // // //         head = head -> next;
// // // // // //         temp -> next = NULL;
// // // // // //         delete temp;
// // // // // //     }
// // // // // //     else{
// // // // // //         Node* prev = NULL;
// // // // // //         Node* curr = head;
// // // // // //         int count  = 1;
// // // // // //         while(count <= pos ){
// // // // // //             prev = curr;
// // // // // //             curr = curr -> next;
// // // // // //             count++;
// // // // // //         }

// // // // // //         prev -> next = curr -> next;
// // // // // //         curr -> next = NULL;
// // // // // //         delete curr;
// // // // // //     }
// // // // // // }

// // // // // Node* reverse (Node* &head){
// // // // //     Node* curr = head;
// // // // //     Node* prev = NULL;
// // // // //     Node* next;

// // // // //     while(curr != NULL){
// // // // //         next = curr -> next;
// // // // //         curr -> next = prev;

// // // // //         prev = curr;
// // // // //         curr = next;
// // // // //     }
// // // // //     return prev;
// // // // // }

// // // // // void print(Node* &head){
// // // // //     Node* temp = head;
// // // // //     while(temp != NULL){
// // // // //         cout<< temp -> data <<" ";
// // // // //         temp = temp -> next;
// // // // //     }
// // // // // }
// // // // // int main(){
// // // // //     Node* object = new Node(1);
// // // // //     print(object);
// // // // //     cout<<endl<<endl;

// // // // //     Node* head = object;
// // // // //     InseratHead(head,3);
// // // // //     print (head);
// // // // //     cout<<endl<<endl;

// // // // //     Node* tail = object;
// // // // //     Insertatail(tail,4);
// // // // //     print(head);
// // // // //     cout<<endl<<endl;

// // // // //     Insertapos(head,tail,2,0);
// // // // //     print(head);

// // // // //     cout<<endl<<endl;
// // // // //     Node* newn = reverse(head);
// // // // //     print(newn);

// // // // //     // deletion(1,head);
// // // // //     // cout<<"after deletion:"<<endl;
// // // // //     // print(head);
// // // // //     // cout<<endl<<endl;

// // // // //     return 0;
// // // // // }


// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // class Node{
// // // // //   public:
// // // // //   int data;
// // // // //   Node* next;

// // // // //   Node(int d){
// // // // //     this->data = d;
// // // // //     this->next = NULL;
// // // // //   }

// // // // // };
// // // // // void insertahead(Node* &head,int d){
// // // // //     Node* temp = new Node(d);
// // // // //     temp -> next = head;
// // // // //     head = temp;
// // // // // }


// // // // // // Node* reverse(Node* &head){

// // // // // //     // if(head == NULL && head->next == NULL){
// // // // // //     //     return head;
// // // // // //     // }
// // // // // //     Node* prev = NULL;
// // // // // //     Node* curr = head;
// // // // // //     Node* next = NULL;

// // // // // //     while(curr != NULL){
// // // // // //         next = curr -> next;
// // // // // //         curr -> next = prev;

       
// // // // // //         prev = curr;
// // // // // //         curr = next; 
// // // // // //     }

// // // // // //     return prev;
// // // // // // }


// // // // // void deletion (int pos ,Node* &head){
// // // // //     if(pos == 1){
// // // // //         Node* temp = head;
// // // // //         head = head -> next;
// // // // //         temp -> next = NULL;
// // // // //         delete temp;
// // // // //     }
// // // // //     else{
      
// // // // //       Node* prev = NULL;
// // // // //       Node* curr = head;
// // // // //       int count = 0;

// // // // //       while(count < pos-1){
// // // // //         prev = curr;
// // // // //         curr = curr -> next;
// // // // //         count++;
// // // // //       }

// // // // //       prev -> next = curr -> next;
// // // // //       curr -> next = NULL;
// // // // //       delete curr;
// // // // //     }
// // // // // }

// // // // // Node* reverse (Node* head){
// // // // //     if(head == NULL && head -> next == NULL){
// // // // //         return head;
// // // // //     }
// // // // //     Node* prev = NULL;
// // // // //     Node* curr = head;
// // // // //     Node* next = NULL;

// // // // //     while (curr != NULL){
// // // // //         next = curr -> next;
// // // // //         curr -> next = prev ;

// // // // //         prev = curr;
// // // // //         curr = next;
// // // // //     }

// // // // //     return prev;
// // // // // }

// // // // // void print(Node* &head){
// // // // //     Node* temp = head;
// // // // //     while(temp != NULL){
// // // // //         cout<<temp->data<<" ";
// // // // //         temp = temp -> next;
// // // // //     }
// // // // // }
// // // // // int main(){
// // // // //     Node* node1 = new Node(1);
// // // // //     Node* head = node1;
// // // // //     insertahead(head,2);
// // // // //     insertahead(head,3);
// // // // //     insertahead(head,4);
// // // // //     insertahead(head,5);
// // // // //     insertahead(head,6);

// // // // //     print(head);
// // // // //     cout<<endl<<endl;

// // // // //     // Node* newn = reverse(head);
// // // // //     // print(head);

// // // // //     deletion(6,head);
// // // // //     print(head);
// // // // //     cout << endl<<endl;

// // // // //     Node* newnode = reverse(head);
// // // // //     print(head);

// // // // //     return 0;
// // // // // }

// // // // #include<iostream>
// // // // using namespace std;
// // // // class Node{
// // // //   public:
// // // //   int data;
// // // //   Node* next ;
// // // //   Node* prev ;

// // // //   Node(int d){
// // // //     this->data = d;
// // // //     this->next = NULL;
// // // //     this->prev = NULL;
// // // //   }
// // // //   ~Node(){
// // // //     int val = this->data;
// // // //     if(this->next != NULL){
// // // //         delete next;
// // // //         this->next = NULL;
// // // //     }
// // // //     cout<<"after meemory free:"<< val << endl;
// // // //   }
// // // // };

// // // // void insertathead(Node* &head,int d){
// // // //     Node* temp = new Node(d);
// // // //     temp -> next = head;
// // // //     head -> prev = temp;
// // // //     head = temp;
// // // // }
// // // // void Insertatail (Node* &tail,int d){

// // // //    Node* temp = new Node(d);
// // // //    tail -> next = temp;
// // // //    temp -> prev = tail;
// // // //    temp = temp -> next;
// // // //    tail = temp;

// // // // }
// // // // void InsertaMiddle(Node* &head,Node* &tail,int pos ,int d){
// // // //     if(pos == 1){
// // // //         insertathead(head,d);
// // // //         return;
// // // //     }

// // // //     Node* temp = head;
// // // //     int count = 1;

// // // //     while(count < pos-1){
// // // //        temp = temp -> next;
// // // //        count ++;
// // // //     }
// // // //     if(temp -> next == NULL){
// // // //         Insertatail(tail,d);
// // // //         return;
// // // //     }

// // // //     Node* nodetoin = new Node(d);
// // // //     nodetoin -> next = temp -> next;
// // // //     temp -> next -> prev = nodetoin;
// // // //     temp -> next = nodetoin;
// // // //     nodetoin -> prev = temp;

// // // // }
// // // // void deletion (int pos ,Node* &head){
// // // //     if(pos == 1){
// // // //         Node* temp = head;
// // // //         temp -> next -> prev = NULL;
// // // //         head = temp -> next;
// // // //         temp -> next = NULL;
// // // //         delete temp;
// // // //     }
// // // //     else{

// // // //         Node* prev = NULL;
// // // //         Node* curr = head;
// // // //         int count = 1;

// // // //         while (count < pos-1){
// // // //             prev = curr;
// // // //             curr = curr -> next;
// // // //             count ++;
// // // //         }

// // // //         curr -> prev = NULL;
// // // //         prev -> next = curr -> next;
// // // //         curr -> next = NULL;
// // // //         delete curr;



// // // //     }
// // // // }
// // // // Node* reverse(Node* &head){
// // // //     Node* prev = NULL;
// // // //     Node* curr = head;
    

// // // //     while(curr != NULL){
// // // //         prev = curr -> next;
// // // //         curr -> prev = curr -> next;
// // // //         curr = curr -> next;
// // // //     }

// // // //     if(prev != NULL){
// // // //         head = prev -> prev;
// // // //     }
// // // // }


// // // // void print (Node* &head){
// // // //     Node* temp = head;
// // // //     while(temp != NULL){
// // // //         cout<<temp->data<<" ";
// // // //         temp = temp-> next;
// // // //     }
// // // // }
// // // // int main(){

// // // //     Node* object = new Node(1);
// // // //     print(object);
// // // //     cout<<endl<<endl;

// // // //     Node* head = object;
// // // //     insertathead(head,4);
// // // //     print(head);
// // // //     cout<<endl<<endl;

// // // //     Node* tail = object;
// // // //     Insertatail(tail,12);
// // // //     print(head);
// // // //     cout<<endl<<endl;

// // // //     InsertaMiddle(head,tail,2,190);
// // // //     print(head);
// // // //     cout<<endl<<endl;
// // // //     InsertaMiddle(head,tail,3,10);
// // // //     print(head);
// // // //     cout<<endl<<endl;

// // // //     Node* boooo = reverse(head);
// // // //     print(boooo);
// // // //     deletion(2,head);
// // // //     print(head);
   




// // // //     return 0;
// // // // }

// // // #include<iostream>
// // // using namespace std;
// // // class Node{
// // //    public:
// // //    int data;
// // //    Node* next;
 
// // //    Node(int d){
// // //     this -> data = d;
// // //     this -> next = NULL;
// // //    }
// // // };
// // // void insertahead(Node* &head,int d){
// // //     Node* temp = new Node(d);
// // //     temp -> next = head;
// // //     head = temp;
// // // }

// // // // void reverse (Node* &head,int k){
// // // //     if(head == NULL && head -> next == NULL){
// // // //         return head;
// // // //     }

// // // //     Node* prev = NULL;;
// // // //     Node* curr = head;
// // // //     Node* next;
// // // //     int count = 0;

// // // //     while (curr != NULL && count < k ){
// // // //         next = curr -> next;
// // // //         curr -> next = prev ;
// // // //         prev = curr;
// // // //         curr = next;
// // // //         count ++;
// // // //     }
// // // //     if(next != NULL){
// // // //        head -> next = reverse(next,k);
// // // //     }

// // // // }

// // // bool IsCircular (Node* &head){
// // //     if(head == NULL){
// // //         return true;
// // //     }
// // //     if(head -> next == NULL){
// // //         return false;
// // //     }

// // //     Node* temp = head -> next;

// // //     while(temp != NULL && temp != head){
// // //         temp = temp -> next;
// // //     }

// // //     if(temp == NULL){
// // //         return false;
// // //     }
// // //     if(temp == head){
// // //         return true;
// // //     }
// // // }
// // // void print (Node* &head){
// // //     Node* temp = head;
// // //     while(temp != NULL){
// // //         cout<< temp -> data <<" ";
// // //         temp = temp -> next;
// // //     }
// // // }
// // // int main(){

// // //     Node* object = new Node(1);
// // //     print (object);
// // //     cout<<endl<<endl;

// // //     Node* head = object;
// // //     insertahead(head,2);
// // //     insertahead(head,3);
// // //     insertahead(head,4);
// // //     insertahead(head,5);
// // //     insertahead(head,6);
// // //     insertahead(head,7);
// // //     insertahead(head,8);
// // //     insertahead(head,9);
// // //     insertahead(head,1);
// // //     print(head);
// // //     cout<<endl<<endl;

// // //     // int k = 2;
// // //     // Node* newn = reverse(head,k);
// // //     // print (newn);
// // //     if(IsCircular(head)){
// // //        cout <<"is circular :" << endl;
// // //     }

// // //     else{
// // //         cout << "is not circular:" << endl;
// // //     }


// // //     return 0;
// // // }

// // #include<iostream>
// // using namespace std;
// // class Node{
  
// //   public:
// //   int data;
// //   Node* next;

// //   Node(int d){
// //     this -> data = d;
// //     this -> next = NULL;
// //   }

// //   ~Node(){
// //     int val = this->data;
// //     if(this->next != NULL){
// //         delete next;
// //         this->next = NULL;
// //     }
// //     cout<<"memory free after:" << val << endl;
// //   }
 

// // };

// // void InsertatHead(Node* &head,int d){
// //     Node* temp = new Node(d);
// //     temp -> next = head;
// //     head = temp;
// // }

// // Node* reverse(Node* &head){
// //     Node* prev  = NULL;
// //     Node* curr = head;
// //     Node* next;

// //     while(curr != NULL){
// //         next  = curr -> next;
// //         curr -> next = prev ;

// //         prev = curr;
// //         curr = next;
// //     }
// //     return prev;
// // }

// // // void deleteion (int pos ,Node* &head){
// // //     if(pos == 1){
// // //         Node* temp = head;
// // //         head = head -> next;
// // //         temp -> next = NULL;
// // //         delete temp;
// // //     }

// // //     Node* prev = NULL;
// // //     Node* curr = head;

// // //     int count = 0;

// // //     while(count < pos-1){
// // //         prev = curr;
// // //         curr = curr->next;
// // //         count++;
// // //     }

// // //     prev -> next = curr -> next;
// // //     curr -> next = NULL;
// // //     delete curr;
// // // }

// // // Node* reverse (Node* &head,int k){
// // //     if (head == NULL ){
// // //         return NULL;
// // //     }
// // //     Node* prev  = NULL;
// // //     Node* curr = head;
// // //     Node* next;
// // //     int count = 0;

// // //     while(curr != NULL && count < k){
// // //         next  = curr -> next;
// // //         curr -> next = prev ;

// // //         prev = curr;
// // //         curr = next;
// // //         count ++;
// // //     }

// // //     if(next  != NULL){
// // //         head -> next = reverse(next,k);
// // //     }
// // //        return prev;
// // // }

// // Node* Kreverse(Node* head,int k){
// //     if(head == NULL){
// //         return NULL;
// //     }

// //     Node* prev = NULL;
// //     Node* curr = head;
// //     Node* forward;
// //     int count = 0;

// //     while (curr != NULL && count < k){
// //         forward = curr -> next;
// //         curr -> next = prev;

// //         prev = curr;
// //         curr = forward;
// //         count ++;
// //     }

// //     if(forward != NULL){
// //         head -> next = Kreverse(forward,k);
// //     }

// //        return prev;

// // }

// // // bool Iscircular (Node* &head){
// // //     if (head == NULL){
// // //         return true;
// // //     }

// // //     if(head -> next == NULL){
// // //         return false;
// // //     }

// // //     Node* temp = head -> next;

// // //     while(temp != NULL && temp != head){
// // //         temp = temp -> next;
// // //     }

// // //     if(temp == NULL){
// // //         return false;
// // //     }
// // //     if(temp == head){
// // //         return true;
// // //     }
// // // }

// // void print (Node* &head){
// //    Node* temp = head;
// //    while(temp != NULL){
// //     cout << temp -> data << " ";
// //     temp = temp -> next;
// //    }
// // }

// // int main(){
    
// //     Node* newnode = new Node(1);
// //     print (newnode);

// //     cout<<endl<<endl;

// //     Node* head = newnode;
// //     InsertatHead(head,2);
// //     InsertatHead(head,3);
// //     InsertatHead(head,4);
// //     InsertatHead(head,5);
// //     InsertatHead(head,6);
// //     InsertatHead(head,7);
// //     InsertatHead(head,8);
// //     print (head);

// //     cout<<endl<<endl;
    
// //     Node* object = reverse(head);
// //     print (object);
// //     cout<<endl<<endl;
    
// //     // int k = 2;
    
// //     // Node* node1 = reverse(head,k);
// //     // print(node1);
    
// //     // if(Iscircular(head)){
// //     //     cout<<" ll is circular :" << endl;
// //     // }

// //     // else{

// //     //     cout<<"ll is not circular:" << endl;
// //     // }

// //     // cout<<endl<<endl;

// //     // deleteion(2,head);

// //     int k = 2;
// //     Node* node1 = Kreverse(head,k);
// //     print (node1);
// //     // print(head);


// //     return 0;
// // }

// #include<iostream>
// using namespace std;
// class Node{
   
//    public:
//    int data;
//    Node* next;
//    Node* prev;

// //   default constructer
//    Node(int d){
//     this -> data = d;
//     this -> next = NULL;
//     this -> prev = NULL;
//    }

//     // destructor
// //    ~Node(){
// //     int val = this->data;
// //     if(next != NULL){
// //         delete next;
// //          next = NULL;
// //     }
// //     cout <<" after memory free:" << val << endl;
// //    }
// };

// void InsertaHead (Node* &head,int d){
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head -> prev = temp;
//     head = temp;
// }

// void InseratTail (Node* &tail ,int d){
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     temp -> prev = tail;
//     tail = tail -> next;
//     tail = temp;
// }

// void InseratMiddle (Node* &head,Node* &tail,int pos , int d){
//     if (pos == 1){
//         InsertaHead(head,d);
//         return;
//     }

//     Node* temp = head;
//     int count = 1;

//     while (count < pos -1){
//         temp = temp -> next;
//         count ++;
//     }
//     if(temp -> next == NULL){
//         InseratTail(tail,d);
//         return;
//     }

//     Node* nodeToInsert = new Node(d);
//     nodeToInsert -> next = temp -> next;
//     temp -> next -> prev = nodeToInsert;
//     temp -> next = nodeToInsert;
//     nodeToInsert -> prev = temp;

// }

// void deletion (int pos , Node* &head){
//     if (pos == 1){
//         Node* temp = head;
//         temp -> next -> prev = NULL;
//         head = temp -> next;
//         delete temp;
//     }
//     else{
       
//        Node* prev = NULL;
//        Node* curr = head;
//        int count = 1;

//        while (count < pos ){
//         prev = curr;
//         curr = curr -> next;
//         count++;
//        }

//       curr -> prev = NULL;
//       prev  -> next = curr -> next;
//       curr -> next = NULL;
//       delete curr;



//     }



// }

// void print (Node* &head){
//     Node* temp = head;

//     while(temp != NULL){
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
// }

// int main(){

//     Node* object = new Node(1);
//     cout << object -> data << endl;
//     cout << object -> next << endl;
//     cout << object -> prev << endl;
//     // print (object);
//     cout << endl << endl;

//     Node* head = object;
//     InsertaHead(head,4);
//     print (head);
//     cout << endl << endl;

//     Node* tail  = object;
//     InseratTail(tail,3);
//     print(head);
//     cout << endl << endl;

//     InseratMiddle(head,tail,3,6);
//     print(head);
//     cout<< endl << endl;

//     deletion(4,head);
//     // cout << "after deletion : " << endl; 
//     print (head);
//     return 0;
// }


#include<iostream>
using namespace std;
class Node{

  public:
  int data;
  Node* next;
  Node* prev ;

  Node(int d){
    this -> data = d;
    this -> next = NULL;
    this -> prev = NULL;
  }

};

void deletion (int pos , Node* &head){
    if (pos == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }else{
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;

        while (count < pos){
            prev = curr;
            curr = curr -> next;
            count++;
        }
       curr -> prev = NULL;
       prev -> next = curr -> next;
       curr -> next = NULL;
       delete curr;


    }
}
int main(){

    return 0;
}