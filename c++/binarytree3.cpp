// #include<bits/stdc++.h>
// using namespace std;

// class Node{
   
//    public:

//       int data;
//       Node* left;
//       Node* right;


//     Node(int data) {
         
//       this -> data = data;
//       this -> left = NULL;
//       this -> right = NULL;

//     }

// };

// Node* BuildTree (Node* root){
    
//     cout << "enter yhe data:" << endl;
//     int data;
//     cin >> data;

// root = new Node(data);

// if(data == -1){
//    return NULL;
// }

// cout <<"after inserting the left:" << data << endl;
// root -> left = BuildTree(root -> left);
// cout <<" after inserting the right :" << data << endl;
// root -> right == BuildTree(root -> right);
// return root;
// }

void Inorder(Node* root){
    if (root == NULL){
       return ;
    }
    
    Inorder(root -> left);
    cout << root -> data <<" ";
    Inorder(root -> right);


}

// int main(){

//   Node* root = NULL;

//   root = BuildTree(root);
// //  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

//   // LevelTravesal(root);

//   cout <<" inorder travesal is :" << endl;

//   Inorder(root);

//   return 0;

// }

#include<bits/stdc++.h>
using namespace std;

class Node{
   
   int data;
   Node* left;
   Node* right;

   Node(int data){
      this -> data = data;
      this -> left = NULL;
      this -> right = NULL;
   }
};

Node* Buildtree (Node* root){
  cout << " enter the data:" << endl;
  int data;
  cin>>data;
  root = new Node(data);

  if(data == -1){
    return NULL;
  }

  cout <<"inserting the data in left : " << data << endl;
  root -> left = Buildtree(root -> left);
  cout <<" inserting the after data in right :" << data << endl;
  root -> right = Buildtree(root -> right);
  return root;
}

void Leveltravesal (Node* root){
    queue<Node*>q;
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

cout<< temp -> data << " ";
        if(temp -> left) {
           q.push(temp -> left);
        }
        if(temp -> right) { 
          q.push(temp -> right);
        }
      }
    }
}
int main(){

  Node* root = NULL;

  root = Buildtree(root);

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 


  return 0;
}