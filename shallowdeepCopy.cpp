#include<bits/stdc++.h>
using namespace std;

#include <cstdio>

class abc {
public:
  int x;
  int *y; // Change this to a pointer to an integer.

  abc(int _x, int _y) : x(_x), y(new int(_y)) {} // Correct the member initializer list.

  void print() const {
    printf("x:%d\nPTR y:%p\ncontent of y (*y):%d\n\n", x, (void *)y, *y); // Fix the printf format string and arguments.
  }
};

int main(){

  abc a(1,2);
  a.print();

// abc b(a) copy;
  abc b = a;   // copy constructor calll dumb default
  b.print();
  *b.y = 20;
  b.print();

 

  return 0;

}