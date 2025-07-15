#include<bits/stdc++.h>
using namespace std;

// KTH SMALLEST ELEMENT IN HEAP USING MAZ HEAP
// int kthSmallest(int n,int k,vector<int> Arr)
// {
//     priority_queue<int> maxHeap;

//     // Insert the first k elements into the min heap
//     for (int i = 0; i < k; ++i) {
//         maxHeap.push(Arr[i]);
//     }

//     // Process remaining elements in the array
//     for (int i = k; i < n; ++i) {
//         // If the current element is smaller than the root of the heap
//         // Replace the root with the current element and heapify
//         if (Arr[i] < maxHeap.top()) {
//             maxHeap.pop();
//             maxHeap.push(Arr[i]);
//         }
//     }

//     // The root of the heap is the kth smallest element
//     return maxHeap.top();
// }



// CHECK CBT IS VALID HEAP OR NOT
// class Info{
//      public:
//      int maxi;
//      bool isHeap;
 
//      Info(int maxi,bool isHeap){
//       this -> maxi = maxi;
//       this -> isHeap = isHeap;
//      }
// };

// Info CheckMaxHeap(Info* root){
//   // bc
//   if(root == NULL){
//     Info temp;
//     temp.maxi = INT_MIN;
//     temp.isHeap = true;
//     return temp;
//   }

//   // leaf nodes
//   if(root -> left == NULL && root -> right == NULL){
//     Info temp;
//     temp.maxi = root -> data;
//     temp.isHeap = true;
//     return temp;
//   }
   
//   // left call right call
//   Info leftAns = CheckMaxHeap(root -> left);
//   Info rightAns = CheckMaxHeap(root -> right);

//   if(root -> data > leftAns.maxi && root -> data > rightAns.maxi && leftAns && rightAns){
//     Info temp;
//     temp.maxi = root -> data;
//     temp.isHeap = true;
//     return ans;
//   }
//   else{
//     Info ans;
//     ans.maxi = max(root -> data,max(leftAns.maxi,rightAns.maxi));
//     ans.isHeap = false;
//     return ans;
//   }
// }


// CBT OR NOT
// class Solution {
// public:
//     bool LevelOrderTraversal(TreeNode* root) {
//         queue<TreeNode*> q;
//         q.push(root);
//         bool nullFound = false;
//         while (!q.empty()) {
//             TreeNode* frontNode = q.front();
//             q.pop();

//             if (frontNode == nullptr) {
//                 nullFound = true;
//             } else {
//                 if (nullFound) {
//                     return false;
//                 }
//                 q.push(frontNode->left);
//                 q.push(frontNode->right);
//             }
//         }  
//         return true;
//     }
//     bool isCompleteTree(TreeNode* root) {
//         return LevelOrderTraversal(root);
//     }
// };



int main(){

  // // max Heap
  // priority_queue<int> MaxHeap;
  // // min heap
  // priority_queue<int,vector<int>,greater<int> >MinHeap;
  // insertion and deletion  using PUSH ans POP function

  




  return 0;


}