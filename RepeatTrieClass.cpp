#include<bits/stdc++.h>
using namespace std;

class TrieNode{
  public:
    char value;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char val) {
      this->value = val;
      for(int i=0; i<26; i++) {
        children[i] = NULL;
      }
      this->isTerminal = false;
    }

};
//insertion
void insertWord(TrieNode* root, string word) {
  //cout << "recieved word: " << word << " for insertion " << endl;
  //base case
  if(word.length() == 0) {
    root->isTerminal = true;
    return;
  }

  char ch = word[0];
  int index = ch - 'a';
  TrieNode* child;
  if(root->children[index] != NULL) {
    //present
      child = root->children[index];
  }
  else {
    //absent
     child = new TrieNode(ch);
     root->children[index] = child;
  }

  //recursion
  insertWord(child, word.substr(1));

}

bool searchWord(TrieNode* root, string word) {
  //base case
  if(word.length() == 0) {
    return root->isTerminal;
  }

  char ch = word[0];
  int index = ch - 'a';
  TrieNode* child;

  if(root->children[index] != NULL) {
    //present or found
    child = root->children[index];
  }
  else {
    //not found
    return false;
  }

  ///baaaki recursion
  bool recursionKaAns = searchWord(child, word.substr(1));
  return recursionKaAns;

}

void deleteWord(TrieNode* root, string word ) {
  if(word.length() == 0) {
    root->isTerminal = false;
    return;
  }

  //1 case mera
  char ch = word[0];
  int index = ch - 'a';
  TrieNode* child;

  if(root->children[index] != NULL) {
    //present
    child = root->children[index];
  }
  else{
    //not present
    return;
  }
  //baaki recursion tera
  deleteWord(child, word.substr(1));
}


void StoreString(TrieNode* root, vector<string> &ans, string &input,string &prefix) {
  if (root->isTerminal == true) {
    ans.push_back(prefix + input);
  }

  for (char ch = 'a'; ch <= 'z'; ch++) {
    int index = ch - 'a';
    TrieNode* next = root->children[index];
    if (next != NULL) {
      // exist
      input.push_back(ch);
      // recursive call
      StoreString(next,ans,input,prefix);
      // backtrack
      input.pop_back();
    }
  }
}

void findPrefixString(TrieNode* root,string input,vector<string> &ans,string &prefix) {
    // base case
    if(input.length() == 0){
      TrieNode* lastchar = root;
      StoreString(lastchar,ans,input,prefix);
      return;
    }

    char ch = input[0];
    int index = ch -'a';
    TrieNode* child;

    if(root -> children[index] != NULL) {
      // present
      child = root -> children[index];
    }
    else{
      // absent
      return;
    }

    // recursive call
   findPrefixString(child,input.substr(1),ans,prefix);
}


int main() {
  TrieNode* root = new TrieNode('-');

  insertWord(root, "cater");
  insertWord(root, "care");
  insertWord(root, "com");
  insertWord(root, "lover");
  insertWord(root, "loved");
  insertWord(root, "load");
  insertWord(root, "lov");
  insertWord(root, "bat");
  insertWord(root, "cat");
  insertWord(root, "car");

  string input = "c";
  string prefix = input;
  vector<string> ans;

  findPrefixString(root,input,ans,prefix);
  for(auto i:ans){
    cout << i << " ";
  }cout << endl;





  //  deleteWord(root, "loved");

  //  if(searchWord(root, "loved") ) {
  //   cout << "Found" << endl;
  //  }
  //  else {
  //   cout << "Not Found" << endl;
  //  }


  return 0;
}