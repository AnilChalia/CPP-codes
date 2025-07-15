// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans=0,i=1;
//     while(n!=0){
//         int bit =n % 2;
//         ans = ans + (bit*i);
//         n = n / 2;
//         i*= 10;

//     }
//     cout<<"answer is :" << ans << endl;


//     return 0;
// // }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans=0,i=1;
//     while(n!=0){
//         int digit=n%10;
//         ans=digit+(ans*10);
//         n=n/10;
//     }
//     cout<<"answer is:"<<ans<<endl;
//     return 0;
// // }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=0;
//     int b=1;
//     for(int i=1;i<=n;i++){
//         int nextnumber=a+b;
//         cout<<nextnumber<<" ";
//         a=b;
//         b=nextnumber;
//     }
//     cout<<endl;
//     return 0;
// // }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<"not prime:"<<i<<endl;
//         }
//         else{
//             cout<<"is prime:"<<i<<endl;
//         }

//     }
//     return 0;
// }
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=0;
// int ans=0;
// while(n!=0){
//     int digit=n%10;
//     if(digit==1){
//         ans = ans + pow (2,1);
//     }
//     n=n/10;
//     i++;
// }
// cout<<"answer is:"<<ans <<endl;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int factorial=1;
//     for(int i=1;i<=n;i++){
//     factorial=factorial*i;
//     }
//     return factorial;
// }
// int main(){
//     int n;
//     cin>>n;


//     int ans= factorial(n);

//     cout<<"answers is:"<<ans<<endl;
//     return 0;
// }
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=30;i++){
//         int ans=pow(2,1);
//         if(ans==n){
//             return true;
//         }
//         return false;
//     }
//     // cout<<"answer is " <<ans <<endl;
// // }
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int b;
//     cin>>a>>b;
//     int ans=1;
//     for(int i=1;i<b;i++){
//        ans=ans*a;
//     }
//     cout<<"answer "<<ans <<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int b;
//     cin>>a>>b;
//     int ans=1;
//     for(int i=1;i<b;i++){
//         ans=ans*a;

//     }
//     cout<<"answer si"<<ans<<endl;
// //     return 0;
// // // }
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=30;i++){
//     int ans = pow (2,1);
//     if(ans == n){
//         return true;
//     }
//     return false;
//     }
//     return 0;
// }
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<a<<"^"<<b<<"="<<pow(a,b);

//     return 0;
// }
