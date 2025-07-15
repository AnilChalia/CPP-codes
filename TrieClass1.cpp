#include<bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    char val;
    TrieNode* child[26];  // Fix: Array of pointers
    bool IsTerminal;

    TrieNode(char val) {
        this->val = val;
        for (int i = 0; i < 26; i++) {
            child[i] = NULL;  // Fix: Initialize each element to NULL
        }
        this->IsTerminal = false;
    }
};

// Insertion
void InsertInTrie(TrieNode* root, string word) {
    cout << "Received word: " << word << " for :" << endl;
    
    // Complete the string then mark the node as terminal
    if (word.length() == 0) {
        root->IsTerminal = true;
        return;
    }

    // Check if the current character is present or absent
    char ch = word[0];
    int index = ch - 'a';

    TrieNode* children;
    if (root->child[index] != NULL) {
        // Present
        children = root->child[index];
    } else {
        // Absent
        children = new TrieNode(ch);
        root->child[index] = children;
    }

    // Recursion
    InsertInTrie(children, word.substr(1));
}

bool findString(TrieNode* root ,string word) {
  if(word.length() == 0){
    return true;
  }

  char ch = word[0];
  int index = ch - 'a';
  TrieNode* children;

  if(root -> child[index] != NULL){
    // present
    children = root -> child[index];
    return true;
  }
  else {
    return false;
  }

  // recursion
  bool ans = findString(root,word.substr(1));
  return ans;

}

void DeleteWord(TrieNode* root, string word) {
  if (word.length() == 0) {
    root->IsTerminal = false;
    return;
  }

  char ch = word[0];
  int index = ch - 'a';
  TrieNode* children;

  if (root->child[index] != NULL) {
    // present
     children = root->child[index];
    //  IsTerminal = false;
  }
  else{
    return;
  }
    DeleteWord(children, word.substr(1));
  // No need for an else statement, as the function will return if the child is NULL
}



int main() {
    TrieNode* root = new TrieNode('-');
    InsertInTrie(root, "donation");
    InsertInTrie(root, "love");
    InsertInTrie(root, "all");

    if(findString(root,"all")){
      cout << "found:" << endl;
    }
    else{
      cout << "not found:" << endl;
    }

   DeleteWord(root,"all");

       if(findString(root,"all")){
      cout << "found:" << endl;
    }
    else{
      cout << "not found:" << endl;
    }

   

    return 0;
}
