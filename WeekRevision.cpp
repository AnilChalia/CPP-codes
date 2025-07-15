#include<bits/stdc++.h>
using namespace std;

bool CheckPalindrome(string &str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; 
        }
        left++;
        right--;
    }

    return true; 
}

int main(){
  
  string str = "abc";

  bool ans = CheckPalindrome(str);

  if(ans){
    cout <<"palindrome:"<<endl;
  }
  else{
    cout<<" not palindrome:"<<endl;
  }



  return 0;

}