
void StoreString(TrieNode* root, vector<string> &ans, string &input) {
  if (root->isTerminal == true) {
    ans.push_back(input);
  }

  for (char ch = 'a'; ch <= 'z'; ch++) {
    int index = ch - 'a';
    TrieNode* next = root->children[index];
    if (next != NULL) {
      // exist
      input.push_back(ch);
      // recursive call
      StoreString(next,ans,input);
      // backtrack
      input.pop_back();
    }
  }
}

void findPrefixString(TrieNode* root,string input,vector<string> &ans) {
    // base case
    if(input.length() == 0){
      TrieNode* lastchar = root;
      StoreString(lastchar,ans,input);
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
   findPrefixString(child,input.substr(1),ans);
}
