// #include <iostream>
// using namespace std;

// class TrieNode{
//   public:
//     char value;
//     TrieNode* children[26];
//     bool isTerminal;

//     TrieNode(char val) {
//       this->value = val;
//       for(int i=0; i<26; i++) {
//         children[i] = NULL;
//       }
//       this->isTerminal = false;
//     }

// };
// //insertion
// void insertWord(TrieNode* root, string word) {
//   //cout << "recieved word: " << word << " for insertion " << endl;
//   //base case
//   if(word.length() == 0) {
//     root->isTerminal = true;
//     return;
//   }

//   char ch = word[0];
//   int index = ch - 'a';
//   TrieNode* child;
//   if(root->children[index] != NULL) {
//     //present
//       child = root->children[index];
//   }
//   else {
//     //absent
//      child = new TrieNode(ch);
//      root->children[index] = child;
//   }

//   //recursion
//   insertWord(child, word.substr(1));

// }

// bool searchWord(TrieNode* root, string word) {
//   //base case
//   if(word.length() == 0) {
//     return root->isTerminal;
//   }

//   char ch = word[0];
//   int index = ch - 'a';
//   TrieNode* child;

//   if(root->children[index] != NULL) {
//     //present or found
//     child = root->children[index];
//   }
//   else {
//     //not found
//     return false;
//   }

//   ///baaaki recursion
//   bool recursionKaAns = searchWord(child, word.substr(1));
//   return recursionKaAns;

// }

// void deleteWord(TrieNode* root, string word ) {
//   if(word.length() == 0) {
//     root->isTerminal = false;
//     return;
//   }

//   //1 case mera
//   char ch = word[0];
//   int index = ch - 'a';
//   TrieNode* child;

//   if(root->children[index] != NULL) {
//     //present
//     child = root->children[index];
//   }
//   else{
//     //not present
//     return;
//   }
//   //baaki recursion tera
//   deleteWord(child, word.substr(1));
// }

// void StringStore(TrieNode* root,vector<string> &suffix,string &ans) {
//   //  bvc
//   if(root -> isTerminal == true){
//     // ans strore
//     suffix.push_back(ans);
//   }

//   for(char ch = 'a'; ch <= 'z'; ch++) {
//     int index = ch - 'a';
//     TrieNode* next = root -> children[index];
//     if(next != NULL) {
//       // child exist
//       ans.push_back(ch);
//       // baaki recursion
//       StringStore(next,ans,input);
//       // backtrack
//       ans.pop_back();
//     }
//   }
// }


// void findPrefixString(TrieNode* root,string input,vector<string> &ans){
//     if(input.length() == 0) {
//        TrieNode* lastchar = root;
//        StringStore(lastchar,input,ans);
//        return;
//     }

//     char ch = input[0];
//     int index = ch - 'a';
//     TrieNode* child;

//     if(root -> children[index] != NULL) {
//       // child present
//       child = root -> children[index];
//     }
//     else{
//       return;
//     }

//     //  recursion cal
//     findPrefixString(child,input.substr(1),ans);



// }


// int main() {
//   TrieNode* root = new TrieNode('-');
    
//   insertWord(root, "cater");
//   insertWord(root, "care");
//   insertWord(root, "com");
//   insertWord(root, "lover");
//   insertWord(root, "loved");
//   insertWord(root, "load");
//   insertWord(root, "lov");
//   insertWord(root, "bat");
//   insertWord(root, "cat");
//   insertWord(root, "car");

//   // print all prefix string
//   string input = "c";
//   vector<string> ans;
//   findPrefixString(root,input,ans);
//   for(auto i:ans){
//     cout << i <<" ";
//   }
//   cout << endl;

//   // cout << "Insertion Done" << endl; 
//   //  if(searchWord(root, "all") ) {
//   //   cout << "Found" << endl;
//   //  }
//   //  else {
//   //   cout << "Not Found" << endl;
//   //  }

//   //  deleteWord(root, "loved");

//   //  if(searchWord(root, "loved") ) {
//   //   cout << "Found" << endl;
//   //  }
//   //  else {
//   //   cout << "Not Found" << endl;
//   //  }


//   return 0;
// }


class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        int childCount;
        bool isTerminal;

        TrieNode(char ch) {
            data = ch;
            for(int i=0; i<26; i++){
                children[i] = NULL;
            }
            childCount = 0;
            isTerminal = false;
        }
};

class Trie{
    public:
    
      TrieNode* root;
      
      Trie(char ch) {
          root = new TrieNode(ch);
      }

//  insert word code
    void InsertUtilize (TrieNode* root,string word) {
        if (word.length() == 0) {
            root -> isTerminal = true;
            return;
        }

        int index = word[0] - 'a';
        TrieNode* child;
        
         if(root -> children[index] != NULL) {
            child = root -> children[index];
         }
         else{
          // new node insert tym child count increase
             child = new TrieNode(word[0]);
             root -> childCount++;
             root -> children[index] = child;
         }
         
         InsertUtilize(child,word.substr(1));
    }


    void Insert(string word) {
        InsertUtilize(root,word);
    }


    void LowestCPrefixe(string str,string &ans) {
          
           for(int i=0; i<str.length(); i++) {
               char ch = str[i];


            if(root -> childCount == 1) {
               ans.push_back(ch);
              //  aage bad jao
               int index = ch - 'a';
               root = root -> children[index];
            }
            
            else {
               break;
            }


          // break mardo terminal mil jay to 
            if (root->isTerminal) 
               break;
            
        }
    }
};

string longestCommonPrefix(vector<string> &arr, int n)
{
    
       Trie* T = new Trie('\0');
        // all string insert in trie
        for (int i=0; i<n; i++) {
            T->Insert(arr[i]);
        }

      //  first sdtring nikallo
        string first = arr[0];
        string ans ="";


        T->LowestCPrefixe(first,ans);
        return ans;
}


