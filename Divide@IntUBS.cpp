#include<bits/stdc++.h>
using namespace std;

   int divide(int dividend, int divisor) {
        
               int start = 0;
               int end = dividend;
               int ans = 0;

               int mid = start + (end - start) / 2;

               while(start < end) {
                   
                   if(mid * divisor == dividend){
                       return mid;
                   }

                   else if(mid * divisor <= dividend) {
                          
                          ans = mid;
                          start = mid + 1;
                   }

                   else{
                        
                        end = mid - 1;
 
                   }
                   
                   mid = start + (end - start) / 2;

               }

               if((dividend > 0 && divisor < 0)) {
                       ans = 0 - ans;
               }

               return ans ;

    }


int main (){

  int dividend = 7;
  int divisor = -3;

  

  int ans = divide(dividend,divisor);

  if ( (dividend >= 0 && divisor <= 0) || (dividend <= 0 && divisor >= 0) ){
    ans = 0 - ans;
  }

  cout << ans << endl;


  return 0;

}