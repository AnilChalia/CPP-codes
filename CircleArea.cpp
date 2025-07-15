#include<iostream>
using namespace std;

float Circle_Area(float radius) {
  float area = 3.14*radius*radius;
  return area;
}

int main(){ 

   float radius;
   cin>>radius;
   float area = Circle_Area(radius);
   cout << "area of circle is :" << area << endl;

  return 0;

}