/*  #include<bits/stdc++.h>
using namespace std;

int PrimeNumberCount(int n ){
  int count = 0;
  // create vector for prim or non prime number
  vector<bool> prime(n+1,true);
  // 0,1,prime mark
  prime[0] = prime[1] = false;

// start for loop 2 k table
  for(int i=2; i<n; i++){
    // agar 2 k table me koi prime number to cnt++
    if(prime[i]){
      count++;
// and us prime k phade k jitne bhi number non prime mark
      for(int j=2*i; j<n; j++){
        prime[j] = 0;
      }
    }
  }
  return count;
}

// TIME COMPLEXITY = O(n*log(log n));


// GCD:::::::::::::::::::::::
int GCD (int a,int b) {
  if(a==0){
    return b;
  }
  if(b==0){
    return a;
  }

  while(a!=b){
    if(a>b){
      a = a - b;
    }
    else{
      b = b-a;
    }
  }
  return a;
}

// A KI POWER B CODE::::::::::::::::::::
int FastExponation(int n,int x){
  int res = 1;
  while(n > 0){
      if(n&1){
        // odd
        res = ((res)%n *(x)%n)%n;
      }
      // even
      else{
        x = ((x)%n *(x)%n)%n;
        n = n >> 1;
      }
  }
  return res;
}  */


/*  #include<bits/stdc++.h>
using namespace std;
int SlowExponation(int a,int b){
  int ans = 1;
  for(int i=0; i<b; i++){
    ans *= a;
  }
  return ans;
}



int fastExponation(int a,int b) {
    
     int ans = 1;
     while(b > 0) {
         
        //  odd
        if(b & 1) {
          
          ans = ans * a;

        }

        // even
        else{
             a = a*a;
            b =  b / 2;
        }

     }
       
       return ans;
     
}



int main(){
  // cout << SlowExponation(31,6) << endl;

  cout <<  fastExponation(3,8) << endl;
  return 0;

  return 0;

} */

 