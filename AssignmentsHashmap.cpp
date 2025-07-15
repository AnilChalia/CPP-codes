// Array Subset of another array
// string isSubset(int a1[], int a2[], int n, int m) {
//     unordered_map<int,int> mp;
//     string ans="Yes";
    
//     for(int i=0; i<n; i++) {
//         mp[a1[i]]++;
//     }
    
//     // check weather element are present in array 2
//     for(int i=0; i<m; i++) {
//         if(mp.find(a2[i]) == mp.end()){
//             ans = "No";
//             break;
//         }
//         else{
//             // prsent
//             if(mp[a2[i]] > 0){
//                 mp[a2[i]]--;
//             }
//             else{
//                 ans = "No";
//                 break;
//             }
//         }
//     }
//     return ans;
// }




// Intersection of Two Linked Lists
// class Solution {
// public:
//    Node* findIntersection(Node* head1, Node* head2) {
//       unordered_map<int, int> map;
//       Node* curr = head2;

//       while (curr) {
//          map[curr->data]++;
//          curr = curr->next;
//       }

//       Node* IntersetionList = NULL;
//       Node* it = NULL;
//       curr = head1;

//       while (curr) {
//          if (map.find(curr->data) != map.end()) {
//             if (!IntersetionList) {
//                IntersetionList = new Node(curr->data);
//                it = IntersetionList;
//             } else {
//                if (map[curr->data] > 0) {
//                   it->next = new Node(curr->data);
//                   it = it->next;
//                   map[curr->data]--;
//                }
//             }
//          }

//          curr = curr->next;
//       }

//       return IntersetionList;
//    }
// };
// // 


