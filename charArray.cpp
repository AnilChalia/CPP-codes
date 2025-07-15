// #include<bits/stdc++.h>
// using namespace std;

// int Getlength(char ch,int n) {
//   int len = 0;

//   for (int i=0; i<n; i++) {
//     if(ch[i] == '\0'){
//       break;
//     }
//     else{
//       len++;
//     }
//   }
//   return len;
// }

// int main () {
  
//   // creation
//   // char ch[5];

//   // // input
//   // cin.getline(ch,5);

//   // // print
//   // cout <<"printing the character array:" << ch << endl; 

//   // indexes
//   // cout<<ch[5];
  
//   // check null character
//   // for(int i= 0; i<5; i++){
//   //   cout<<"printig indx:"<< i <<" " << ch[i] << endl;
//   // }

//   // char temp = ch[5];
//   // int value = (int)temp;
//   // cout << value << endl;

//   char ch[10];
//   // cin.getline(ch,10);
//   cin>>ch;

//   int len = Getlength(ch,10);
//   cout<<"legth of char array is: " << len << endl;

  
//   return 0;


// }






// #include<bits/stdc++.h>
// using namespace std;


// // lenght of char array is
// int GetLength(char ch[],int n ){
//   int index = 0;
//   int len = 0;
//   while(ch[index] != '\0'){
//     index++;
//     len++;
//   }
//   return len;
// }

// int main(){

//   char ch[10];
  // cin.getline(ch,10);

  // int len = GetLength(ch,10);
//   cout <<"lebgth of array is :" << len << endl;
// }


#include<bits/stdc++.h>
using namespace std;
int GetLength(char ch[]){
  int index = 0;
  int len = 0;
  while(ch[index] != '\0'){
    index++;
    len++;
  }
  return len;
}

void reverse(char ch[],int n){
  int i=0;
  int j=n-1;

  while(i <= j) {
    swap(ch[i],ch[j]);
    i++;
    j--;
  }
}

void LowrToupperCae(char ch[],int n) {
   int i = 0;
   while(ch[i] != '\0'){
     char currChar = ch[i];
     if(currChar >= 'a' && currChar <= 'z'){
      ch[i] = currChar - 'a' + 'A';
     }
     i++; 
   }
}

void RepleceSpace(char ch[],int n) {
     int i = 0;
     while (ch[i] != '\0'){
      if(ch[i] == '@'){
        ch[i] = ' ';
      }
      i++;
     }
}

bool CheckPalindrome(char ch[],int n) {
      
      int start = 0;
      int end = n - 1;

      while(start <= end) {
        if(ch[start] == ch[end]){
          start++;
          end--;
        }
        else{
          return false;
        }
      }
      return true;
}

int main() {
  char ch[10];
  cin.getline(ch,10);
  int len = GetLength(ch);

  bool ans = CheckPalindrome(ch,len);
  
  if(ans){
    cout<<"valid:"<<endl;
  }
  else{
    cout<<"not valide:"<<endl;
  }
  // cout << "after :" << ch << endl;
  // LowrToupperCae(ch,10);
  // RepleceSpace(ch,10);
  
  // cout<<"before:" << ch << endl;

  // int len = GetLength(ch,10);
  // LowrToupperCae(ch,len);
  // cout << "uppertolower" <<  ch << endl;
  // reverse(ch,len);
  // cout << ch << endl;



  return 0;

}