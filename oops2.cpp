#include<bits/stdc++.h>
using namespace std;
// CREATION OF CLASS
class Hero{
  // access modifier
  // using public am acces all dta member out of class
  // public:

  // using private acces in classs not acces out of class
  private:

  // properties
  int health;
  char level;

  // printing da health
  public:
  void print(){
    cout << health << endl;
    cout << level << endl;
  }
 
//  deafault ctor
  Hero(){
    cout <<"ctor called:" << endl;
  }

// parameterize ctor
  Hero(int health,char level){
    cout <<"address of hero is:" << this << endl;
    this -> health = health;
    this -> level = level;
  }

// copy ctor by &
Hero(Hero &temp){
  this -> health = temp.health;
  this -> level = temp.level; 
}

// for private member access out of class
  int gethealth(){
    return health;
  }
  char getlevel(){
    return level;
  }

  void sethealth(int h){
       health = h;
  }
  void setlevel(char l){
      level = l;
  }

};

int main(){

  Hero ramesh(77,'B');
  ramesh.print();

  // copy ctor
  Hero b(ramesh);
  b.print();










  // object
  // // statically  create
  // Hero h1;
  // cout <<"addres of h1 is :" << &h1 << endl;

  // dynamically
  // Hero *b = new Hero;
  // // use (*b) opreator printing and b-> for printing use
  // cout <<"health is :" << (*b).gethealth() << endl;
  // cout <<"level is :" << (*b).getlevel() << endl;
  // // sett 
  // b->sethealth(90);
  // b->setlevel('A');
  // cout <<"levele is :" << b->getlevel() << endl;
  // cout << "helath is :" << b->gethealth() << endl;


  // parameterize ctor
  // Hero temp(55,'B');
  // temp.print();


  // acccess properties using (.)operator
  // public acccess
//   h1.health = 90;
//  cout <<"h1 -> health is :" <<  h1.health  << endl;

// // private accesss
// // settter use for gave meember
// h1.sethealth(70);
// h1.setlevel('A');
// // getter
// cout <<"health is :" << h1.gethealth() << endl;
// cout <<"level is :" << h1.getlevel() << endl;
   



  // cout << "size of hero clas is:" << sizeof(h1) << endl;






  return 0;

}