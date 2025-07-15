#include<bits/stdc++.h>
using namespace std;
bool IsPrime(int n){
  if(n <= 1){
    return false;
  }
  int Sqrt = sqrt(n);
  for(int i=2; i <= Sqrt; i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}
// int PrimeCount(int n){
//   int count = 0;
//   for(int i = 0; i < n; i++){
//     if(IsPrime(i)){
//       count++;
//     }
//   }
//   return count;
// }

// SEIVE OF EROTOSTHENES
int PrimeCount(int n){
  if(n == 0){
    return 0;
  }
  vector<bool>prime(n,true);
  prime[0] = prime[1] = false; // mark non prime 01

  int ans = 0;
  // for(int i = 2; i < n; i++) {
  // optimization
  for(int i = 2; i*i <= n; i++) {
    if(prime[i]){
      ans ++;
     
      // int j = 2*i;
      // optimization
      int j = i * i;
      while(j <= n){
        prime[j] = false;
        j+=i;
      }
    }
  }
  return ans;
}

int segseieve(int l,int r){
  vector<bool>vec(sqrt(r));
  

}



int main(){
 int n = 10;
 int ans = PrimeCount(n);

 cout << ans << endl;



  return 0;
}