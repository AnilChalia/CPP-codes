// void checkMember(int n){
//     int f1 = 1, f2 = 1;
//     if(n==0 && n==1){
//         return true;
//     }
//     else{
//         while(1){
//             int temp = f1 + f2;
//             f1 = f2;
//             f2 = temp;
//             if(temp==n){
//                 return false;
//             }
//             else if(temp>n){
//                 return true;
//             }
//         }
//     }

// }

// PRINT REVERSE NUMBER:::::
// #include<iostream>
// using namespace std;

// int main() {
// 	int n,a=0;
// 	cin>>n;
//     int z = n,digits=0;
//     while(z!=0){
//         z = z/10;
//         digits++;
//     }
//     while(n!=0){
//         int k = n%10,z=digits-1;
//         while(z--){
//             k = k*10;
//         }
//         a = a + k;
//         digits--;
//         n = n/10;
//     }
//     cout<<a;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// #include <climits>


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max = INT_MIN;
//     for(int i=0;i<n;i++){
// 	    if(max<arr[i]){
// 	      max=arr[i];
//       }
//      }
//      int second = INT_MIN;
//      for(int i=0;i<n;i++){
// 	     if(max>arr[i] && arr[i]>second){
// 	       second = arr[i];
//        }
//      }
//      cout<<second;
// 		 return 0;
// }



#include<iostream>
using namespace std;

/*
Pattern for N = 4
4444
333
22
1
*/

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<n-i+1;
        }
        cout<<endl;
    }
}





