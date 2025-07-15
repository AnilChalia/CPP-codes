// // BROTHERS FROM DIFFERENT ROOTS
// class Solution{
//     public:

//     int countPaires(Node* root1,Node* root2,int x) {
        
//        stack<Node*> s1,s2;
//        int ans = 0;

//        Node* a = root1;
//        Node* b = root2;

//       while (a || b || !s1.empty() || !s2.empty()){

//          while (a){
//           s1.push(a);
//           a = a -> left;
//          }
//          while(b) {
//           s2.push(b);
//           b = b -> right;
//          }

//          if(s1.empty() || s2.empty()) {
//              break;
//          }

//          Node* atop = s1.top();
//          Node* btop = s2.top();

//          int sum = atop -> data + btop -> data;

//          if(sum == x) {
//           ans++;
//           s1.pop();
//           s2.pop();
//           a = atop -> right;
//           b = btop -> left; 
//          }
//          else if(sum < x) {
//           s1.pop();
//           a = atop -> right;
//          }
//          else{
//           s2.pop();
//           b = btop -> left;
//          }
//       }   
//       return ans;   
//     }
// };

// // INORDER SUCCESSOR
// class Solution{
//   public:
//     // returns the inorder successor of the Node x in BST (rooted at 'root')
//     Node * inOrderSuccessor(Node *root, Node *x)
//     {
//         //Your code here
//         Node* succ = nullptr;
//         Node* curr = root;

//         while (curr != nullptr) {
//             if (curr->data > x->data) {
//                 succ = curr;
//                 curr = curr->left;
//             } else {
//                 curr = curr->right;
//             }
//         }

//         return succ;
//     }
// };

// // INORDER PREDECCESSOR
// class Solution{
//   public:
//     // returns the inorder successor of the Node x in BST (rooted at 'root')
//     Node * inOrderPredeccessor(Node *root, Node *x)
//     {
//         //Your code here
//         Node* pred = nullptr;
//         Node* curr = root;

//         while (curr != nullptr) {
//             if (curr->data < x->data) {
//                 pred = curr;
//                 curr = curr->right;
//             } else {
//                 curr = curr->left;
//             }
//         }

//         return pred;
//     }
// };

// // BUILD BST USING PREORDER TRAVESAL
// class Solution {
// public:
//     TreeNode* PreOrder(vector<int>& preorder, int& i, int min, int max) {
//         // base case
//         if (i >= preorder.size() || preorder[i] <= min || preorder[i] >= max) {
//             return NULL;
//         }

//         // set root node
//         TreeNode* root = new TreeNode(preorder[i++]);
//         root->left = PreOrder(preorder, i, min, root->val);
//         root->right = PreOrder(preorder, i, root->val, max);

//         return root;
//     }

//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//         int min = INT_MIN;
//         int max = INT_MAX;
//         int i = 0;
//         TreeNode* ans = PreOrder(preorder, i, min, max);
//         return ans;
//     }
// };

// // BALANCED A BINARY SEARCH TREE
// class Solution {
// public:
//     void Inorder(TreeNode* root,vector<int>& in) {
//         if(root == NULL){
//             return;
//         }
//         Inorder(root -> left,in);
//         in.push_back(root->val);
//         Inorder(root -> right,in);
//     }
    
//     TreeNode* BuildTree(vector<int> &in,int start,int end) {
//         if(start > end) {
//             return NULL;
//         }

//         int mid = (start + end) >> 1;
//         TreeNode* root = new TreeNode (in[mid]);
//         root -> left =  BuildTree(in,start,mid-1);
//         root -> right = BuildTree(in,mid+1,end);
//         return root;
//     }

//     TreeNode* balanceBST(TreeNode* root) {
//         vector<int> in;
//         Inorder(root,in);

//         return BuildTree(in,0,in.size()-1);
//     }
// };

// // FIND MEDIAN OF BST
// void inOrderTraversal(struct Node* root,vector<int> &ans) {
//     if(root == NULL) {
//         return;
//     }
//     inOrderTraversal(root -> left,ans);
//     ans.push_back(root->data);
//     inOrderTraversal(root -> right,ans);
// }
// float findMedian(struct Node *root)
// {
//     vector<int> nodes;
//     inOrderTraversal(root, nodes);

//     int size = nodes.size();
    
//     // Check if the number of nodes is even or odd
//     if (size % 2 == 0) {
//         // If even, return the average of the middle two elements
//         int mid1 = nodes[size / 2 - 1];
//         int mid2 = nodes[size / 2];
//         return (mid1 + mid2) / 2.0;
//     } else {
//         // If odd, return the middle element
//         return nodes[size / 2];
//    }
// }

// // CHECK WEATHER BST CONTAINS DEAD END
// class Solution{
//   public:
//     void Solve(Node* root,unordered_map<int,bool>&visited,bool &ans) {
//         if(root == NULL){
//             return;
//         }
        
//         visited[root -> data] = 1;
//         if(root -> left == NULL && root -> right == NULL) {
//             int xp1 = root -> data + 1;
//             int xm1 = root -> data - 1 == 0 ? root -> data : root -> data - 1;
            
            
//             if(visited.find(xp1) != visited.end() && visited.find(xm1) != visited.end()) {
//                 ans =  true;
//                 return;
//             }
//         }
        
//         Solve(root -> left,visited,ans);
//         Solve(root -> right,visited,ans);
//     }
//     bool isDeadEnd(Node *root)
//     {
//         //Your code here
//         bool ans;
//         unordered_map<int,bool> visited;
//         Solve(root,visited,ans);
//         return ans;
//     }
// };