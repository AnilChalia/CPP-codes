#include<bits/stdc++.h>
using namespace std;

// intialize class of bst
class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data){
    this -> data = data;
    this -> left = NULL;
    this -> right = NULL;
  }
};

// INsert in BST
Node* InsertInBST(Node* &root,int data){
  if( root == NULL ) {
    root = new Node(data);
    return root;
  }
  
  if(data < root -> data){
    root -> left = InsertInBST(root -> left,data);
  }
  else{
    root -> right = InsertInBST(root -> right,data);
  }
  return root;
}

// CreateBST
void CreateBSt(Node* &root){
  cout <<"enter the data:" << endl;
  int data;
  cin >> data;

  while(data != -1){
    root = InsertInBST(root,data);
    // for next data
    cout <<"enter the next data:" << endl;
    cin >> data;
  }
}

void levelOrderTraversal(Node* &root){
  queue<Node*> q;
  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    Node* temp = q.front();
    q.pop();

    if(temp == NULL){
       cout << endl;
       if(!q.empty()){
        q.push(NULL);
       }
    }
    else{
      cout << temp-> data <<" ";
      if(temp -> left != NULL){
        q.push(temp -> left);
      }
      if(temp -> right != NULL){
        q.push(temp -> right);
      }

    }
  }
}


//  BST into soretde dll
void ConvertToDLL(Node* root,Node* &head){
       if(root == NULL){
        return;
       }

      //  R
     ConvertToDLL(root -> right,head);
      // N
      root -> right = head;
      if(head != NULL)
            head -> left = root;
         head = root;
      // L
      ConvertToDLL(root -> left,head);
}

void print(Node* &head){
  Node* temp = head;
  while(temp != NULL){
    cout << temp -> data <<"->";
    temp = temp -> right;
  }
  cout<< endl;
}

int main(){


  Node* root = NULL;
  CreateBSt(root);
  levelOrderTraversal(root);

  Node* head = NULL;
  ConvertToDLL(root,head);
  print(head);

  return 0;


}