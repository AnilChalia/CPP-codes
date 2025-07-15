// 1. Remove all Adjacent duplicate in a string::::::: 
// #include<bits/stdc++.h>
// using namespace std;
// string remove(string &str){

//   vector<char> v;
//   auto(char ch: str){
//     v.push_back(ch);
//   }

//   int index = 0;
//   while(!v.empty()){
      
//       if(str[index] == str[index+1]){
//           v.pop_back();
//       }
//       else{
//         v.push_back(str[index]);
//       }
//   } 
//      return v;
// }

// int main(){
//   string str = "abcbcady";
//   // cout << str << endl;

//   string ans = remove(str);
//   cout << ans << endl;
//   return 0 ;
// }




// 2.Remove all occurence of a substring::::::::
// class Solution {
// public:
//     string removeOccurrences(string s, string part) {

//        while(s.find(part) != string::npos){


//            s.erase(s.find(part),part.length());
//        }
        
//         return s;
        
//     }
// };




// 3.Valid Palindrome ll::::::::::::
// class Solution {
// public:
//     bool CheckPalindrome(string s,int start,int end) {
      
//       while(start <= end) {
//         if(s[start] == s[end]){
//           start++;
//           end--;
//         }
//         else{
//           return false;
//         }
//       }
//       return true;
// }

//     bool validPalindrome(string s) {
        
//         int i = 0;
//         int j = s.length();

//         while(i<j){
//           if(s[i] == s[j] ){
//           i++;
//           j--;
//         }
//         else{
      
//             bool ans1 = CheckPalindrome(s,i+1,j);
//             bool ans2 = CheckPalindrome(s,i,j-1);

//             return ans1 || ans2;
//            }
//         }
//      return true;
    
//     }
// };



// 4.minimum time diffrenece::::::::::::
// homeWork



// 5.Count Palindrome Substring::::::::::::::
// odd length = 3("abc"); same location i or j center man k expend(jitne numbers of block)
// even length = 0("abc"); (i jha to j uske age hoga)


 
