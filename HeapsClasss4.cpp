// // REMOVE STONES TO MINIMIZE THE TOTAL:::::::::::
// class Solution {
// public:
//     int minStoneSum(vector<int>& piles, int k) {
//         priority_queue<int> Maxheap;

//         for(int i=0; i<piles.size(); i++){
//           int element = piles[i];
//           Maxheap.push(element);
//         }


//         while(k--){
//           int Topele = Maxheap.top();
//           Maxheap.pop();

//           Topele = Topele - floor(Topele/2);
//           Maxheap.push(Topele);
//         }

//         int sum = 0;
//         while(!Maxheap.empty()){
//           int topElement = Maxheap.top();
//           sum += topElement;
//           Maxheap.pop();
//         }
//           return sum;
//     }
// };

// REORGANIZE STRING::::::::::::::::
// class Info{
//   public:
//     char data;
//     int count;

//     Info(char data,int count){
//       this -> data = data;
//       this -> count = count;
//     }
// };
// class compare{
//   public:
//     bool operator()(Info* a,Info* b){
//       return a->count < b->count  ;
//     }
// };
// class Solution {
// public:
//     string reorganizeString(string s) {
//         int freq[26] = {0};

// // count freq of all char of string
//         for(int i=0; i<s.length(); i++){
//           char ch = s[i];
//           freq[ch-'a']++;
//         }

// // push all char in max heap
//         priority_queue<Info*,vector<Info*>,compare> maxheap;
// // push all char into heap ,where freq > 0
//         for(int i=0; i<26; i++) {
//           if(freq[i] > 0 ){
//              Info* temp = new Info(i+'a' , freq[i]);
//              maxheap.push(temp);
//           }
//         }

//         string ans = "";

//         while(maxheap.size() > 1) {
//           Info* first = maxheap.top();
//           maxheap.pop();
//           Info* second = maxheap.top();
//           maxheap.pop();

//           ans.push_back(first -> data);
//           first -> count--;
//           ans.push_back(second -> data);
//           second -> count--;


//           if(first -> count > 0) {
//             maxheap.push(first);
//           }
//           if(second -> count > 0) {
//             maxheap.push(second);
//           }
//         }
         
// // if 1 elemnt bcha j alg se handle kro
          
          // if(maxheap.size() == 1){
          //   Info* first = maxheap.top();
          //   maxheap.pop();
         
         
//             ans.push_back(first -> data);
//             first -> count--;

//             if(first -> count != 0){
//               return "";
//             }
//           }

//           return ans;       
//     }
// };

// // LONGEST HAPPY SRING
// class Info{
//   public:
//     char data;
//     int count;

//     Info(char data,int count){
//       this -> data = data;
//       this -> count = count;
//     }
// };
// class compare{
//   public:
//     bool operator()(Info* a,Info* b){
//       return a->count < b->count  ;
//     }
// };
// class Solution {
// public:
//     string longestDiverseString(int a, int b, int c) {
//          priority_queue<Info*,vector<Info*>,compare> maxheap;

//          if(a > 0) {
//           Info* temp = new Info('a',a);
//           maxheap.push(temp);
//          }
//          if(b > 0){
//           Info* temp = new Info('b',b);
//           maxheap.push(temp);
//          }
//          if(c > 0){
//           Info* temp = new Info('c',c);
//           maxheap.push(temp);
//          }

//          string ans ="";
//          while(maxheap.size() > 1){
//              Info* first = maxheap.top();
//              maxheap.pop();
//              Info* second = maxheap.top();
//              maxheap.pop();


//             if(first -> count >= 2){
//               ans.push_back(first -> data);
//               ans.push_back(first -> data);
//               first -> count -= 2;
//             } 
//             else{
//               ans.push_back(first -> data);
//               first -> count --;
//             }
//             if(second -> count >= 2 && second -> count >= first -> count) {
//               ans.push_back(second -> data);
//               ans.push_back(second -> data);
//               second -> count -= 2;
//             } 
//             else{
//               ans.push_back(second -> data);
//               second -> count --;
//             }


//            if(first -> count != 0) {
//             maxheap.push(first);
//            }
//            if(second -> count != 0){
//             maxheap.push(second);
//            }
//          }


//           if(maxheap.size() == 1){
//             Info* first = maxheap.top();
//             maxheap.pop();
            
//             if(first -> count >= 2){
//               ans.push_back(first -> data);
//               ans.push_back(first -> data);
//               first -> count -= 2;
//             } 
//             else{
//               ans.push_back(first -> data);
//               first -> count --;    
//        }
//      }

//      return ans;    
//     }
// };