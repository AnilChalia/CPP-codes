#include<bits/stdc++.h>
using namespace std;

int Sqrt(int n) {
  int s = 0;
  int e = n;
  int mid = s+(e-s)/2;
  int ans = 0;

  while(s <= e) {
    if(mid * mid <= n){
        ans = mid;
        s = mid + 1;
    }
    else{
      e  = mid - 1;
    } 
    mid = s+(e-s)/2;
  }
  return ans;
}

double MyPrecission(int n) { 
  double srt = Sqrt(n);
  
  double step = 0.1;
  int precission = 10;

  for(int i=0; i<precission; i++) {
    
    double j = srt;
    while(j*j <= n){
      srt = j;
      j += step;
    } 
    step = step / 10;
  }   
   return srt;
}

int main(){
  int n = 51;

  int ans = Sqrt(n);
  cout << "sqrt is : " << ans << endl;
   
   double sqrttt = MyPrecission(n);
  //  cout << "prssion answr is:" << sqrttt << endl;
   printf("%0.10f",sqrttt); 

  return 0;

}