// #include<iostream>
// using namespace std;
// void sayDigit (int n ,string str[]){
//     if(n == 0){
//         return;
//     }
//     int digit = n % 10;
//     n = n / 10;

//     sayDigit(n,str);

//     cout<< str[digit] << endl;
// }
// int main(){
//     string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//     int n;
//     cin>>n;
//     sayDigit(n,str);


//     return 0;
// }

// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     if(a == 0)
//        return b;
//     if (b == 0)
//        return a;

//     while(a != b){
//         if (a>b){
//             a = a-b;

//         }
//         else{
//             b = b - a;
//         }
//         return a;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"hello jii"<< endl;
    return 0;
}


// int main(){

//     int a,b;
//     cout<<"enter the value of a and b :"<<endl;
//     cin>>a>>b;

//    cout<<"gcd is :" <<  gcd(a,b) << endl;
//     return 0;
// }

// #include<iostream> 
// using namespace std;
// void increment (int n){
//    int *ptr = & n;
//     *ptr++;
// }
// int main(){
//     // int value = 9;
//     // int *ptr = &value;
//     // cout<<"addres of value is :" << &value << endl;

//     // cout<<"value of at vvlaue :" << *ptr << endl;

//    int n;
//    cin>>n;

//    cout <<"incremen t is :" << increment(n) << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int gcd (int n){
//     cout<<"addres of n is :" << &n << endl;
//     int *ptr = &n;
//     *ptr++;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"cgvecvuerjner is :" << gcd(n) << endl;
//     return 0;
// // }

// #include<iostream>
// using namespace std;
// int update(int n){
//     int *ptr = &n;
//     *ptr++;
// }
// int main(){
//     // int num = 8;
//     // int *ptr = &num;
//     // int a = num;
//     // *ptr++;
//     // cout << num << endl;

//     // int arr[4]={1,2,3,4};
//     // // cout<< arr[0] << endl;
//     // int *ptr = &arr[2];
//     // cout <<*ptr<<endl;


//     int n = 5;

//     cout<<"update is :" << update(n) << endl;
//     return 0;


// #include<iostream>
// using namespace std;
// int func(int n){
//     int *ptr = &n;
//     return ptr;
// }
// int main(){
//     // int i = 7;
//     // int &j= i;

//     // cout << i << endl;
//     // cout<< j << endl;
// int n = 9;
// cout<"vecjejc:"<< func(n) << endl;

    
//     return 0;

// }

// #include<iostream>
// using namespace std;
// #define pi 3.13
// int main(){
//     // int n = 5;
//     // int f = 9;

//     // int &g = n;
//     // int &d = f;

//     // cout << n << endl;
//     // cout << g << endl;
//     // cout << f << endl;
//     // cout << d << endl;


//     cout << pi << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// #define pi 3.34
// void update(int n){
//     cout << pi << endl;
// }
// int main(){


//     return 0;
// }

// #include<iostream>
// using namespace std;
// void print(int n=7){
//     n++;
// }
// int main(){
//      cout << print() << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// string score =("everything okk") ;
// inline void print(int arr[],int n=5){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     print(arr);
//     cout << score << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void ReachHome (int src ,int dest){
//     if (src == dest){ 
//         cout << "phunch gya okk by :" << endl;
//         return;
//     }
//     src++;

//     ReachHome(src , dest);
// }
// int main(){
//     int src = 1;
//     int dest = 10;

//  ReachHome (src,dest) ;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int power(int n){
//     if(n==0){
//         return 1;
//     }
//     return 2*power(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//    cout << power(n) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }

//     int ans = fib(n ) = fib(n-1) + fib(n-2);
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout << fib(n) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int fact (int n){
//     if(n==0){
//         return 1;
//     }

//     return n * fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;

//     int ans = fact(n);
//     cout << ans << endl;
//     return 0;
// // }

// #include<iostream>
// using namespace std;
// int print(int n){
//     if(n == 0){
//         return 1;
//     }

//     // cout<< n << endl;

//     print(n-1);
//     cout<< n << endl; 
 
// }
// int main(){
//     int n;
//     cin>>n;

//     print(n);

// //     return 0; 
// // }

// #include<iostream>
// using namespace std;
// // int ans = 0;
// int factorial (int n){
//     if(n == 0){
//         return 0;
//     }
//     if(n ==0 ){
//         return 1;
//     }

//    int ans = factorial(n) =  factorial(n-1) + factorial(n-2);
//    return ans;
    
// }
// int main(){ 
//     int n;
//     cin>>n;
    
//     int ans = factorial(n);

//     cout << ans << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;
// bool cheack (int arr[],int n){
//     if(n == 0 || n == 1){
//         return true;
//     }
//     if( arr[0] > arr[1]){
//         return false;
//     }

//     bool reamainingpart = cheack (arr+1,n-1);
//     return reamainingpart;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n = 5;
//     bool ans = cheack(arr,5);
//     if(ans ){
//         cout<<"true:"<<endl;
//     }
//     else{
//         cout<<"false:"<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int sum(int arr[],int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return arr[0];
//     }

//    int reamainingpart = sum (arr+1,n-1);
//    return arr[0] + reamainingpart;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int ans = sum(arr,5);
//     cout<< ans << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// bool linear(int arr[],int n,int key){
//     if(n==0){
//         return false;;
//     }
//     if(arr[0] == key){
//         return true;
//     }
//     bool reamainingpart = linear (arr+1,n-1,key);
//     return reamainingpart;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int key;
//     cout<<"enter the key :"<<endl;
//     cin>>key;
//     bool ans = linear(arr,5,key);
//     if(ans){
//         cout<<"key is present:"<<endl;
//     }
//     else{
//         cout<<"key is upsent:"<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void reverse(int arr[],int start,int end){
//     if(start >= end){
//         return;
//     }
//     if(start <= end){
//         swap(arr[start++],arr[end--]);

//     reverse(arr,start,end);
//     }
// }
// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n = 5;
//     reverse(arr,0,n-1);
//     print(arr,5);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int binary(int arr[],int start,int end ,int key){
//     int mid = start + (end - start)/2;
//     if(start >= end){
//         return;
//     }
//     if
//     }
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n = 5;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int binary(int arr[],int start,int end,int key){
//     if(start > end){
//         return false;
//     }
//     int mid = start + (end - start)/2;

//     if(arr[mid] == key){
//         return true;
//     }
//     if(arr[mid] < key){
//         return binary(arr,mid+1,end,key);
//     }
//     else{
//         return binary(arr,start,end-1,key);
//     }
    
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n = 5;
//     int key = 1;
//     cout << "key present or not: " << binary (arr,0,n-1,key);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {9,11,22,33,44};
//     int n = 5;

//     return 0;
// // }

// #include<iostream>
// using namespace std;
// int PartiTion(int arr[],int start,int end){
//     int pivot = arr[start];
//     int count = 0;
//     for(int i=start+1;i<=end;i++){
//         if(arr[i] <= pivot){
//             count++;
//         }
//     }
//     int pivotIndex = start + count;
//     swap(arr[pivotIndex],arr[start]);
//     int i=start,j=end;
//     while(i < pivotIndex && j > pivotIndex){
//         while(arr[i] < pivot){
//             i++;
//         }
//         while(arr[j] > pivot ){
//             j--;
//         }
//         while(i < pivotIndex && j > pivotIndex){
//             swap(arr[i++],arr[j--]);
//         }
//     }
// }
// void QuickSort(int arr[],int start,int end){
//     if(start >= end){
//         return;
//     }
//     int p = PartiTion (arr,start,end);
//     QuickSort(arr,start,p-1);
//     QuickSort(arr,p+1,end);

// }
// int main(){
//     int arr[5]={2,6,1,9,3};
//     int n = 5;
//     QuickSort(arr,0,n-1);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
    


//     return 0;
// }

// #include<iostream>
// using namespace std;
// int Sort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         for(int j=0;j<n-1;j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
// int main(){
//      int arr[5]={2,6,1,9,3};
//      int n = 5;
//     Sort(arr,5);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int firstO(int arr[],int n,int key){
//     int start = 0;
//     int end = n-1;
//     int ans = 0;
//     int mid = start + (end - start)/2;
//     while(start <= end){
//         if(arr[mid] == key){
//             ans = mid;
//             end = mid - 1;
//         }
//         else{
//            start = mid + 1;
//         }
//          mid = start+(end -start)/2;
//     }
//     return ans ;
// }
// int lastO (int arr[],int n,int key){
//     int start = 0;
//     int end = n-1;
//     int ans = 0;
//     int mid = start + (end - start)/2;
//     while(start <= end){
//         if(arr[mid] == key){
//             ans = mid;
//             start = mid + 1;
//         }
//         else{
//            end = mid -1;
//         }
//          mid = start+(end -start)/2;
//     }
//     return ans ;
// }
// int main(){
//     int arr[6]={1,2,3,3,3,5};
//     cout<<"firstoccurence is :" << firstO(arr,6,3) << endl;
//     cout<<"last occurence is :" << lastO(arr,6,3) << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void firstOccurence (int arr[],int start ,int end,int key,int ans = 0){
//     if(start > end){
//         return;
//     }
//     int mid = start + (end - start)/2;
//     if (arr[mid] == key){
//          ans = mid;
//         end = mid -1;
//     }
//     else
//     {
//         start = mid + 1;
//     }
//     return ans ;
// }
// int main(){
//     int arr[5]={1,2,2,2,3};
//     int n = 5;

//     cout<<"first occurence is :" << firstOccurence(arr,0,n-1,2) << endl;



//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int findIndex(int arr[], int idx, int K)
// {
 
//     // Base Case
//     if (idx < 0)
//         return -1;
 
//     // Return Statement
//     if (arr[idx] == K) {
//         return idx;
//     }
 
//     // Recursive Call
//     return findIndex(arr, idx - 1, K);
// }
// int main(){
//     int arr[5]={1,2,2,2,3};
//     int n = 5;

//     cout<<"first occurence is element is :"<< first(arr,0,n-1,2) << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int first (int arr[],int start,int end,int key){
//     if(start > end){
//         return -1;
//     }
//     int mid = start + (end - start)/2;
//     int ans = 0;
    
//     if(arr[mid] == key){
//         ans = mid;
//         return first (arr,start,mid-1,key);
//     }
//     else{
//         return first(arr,mid+1,end,key);
//     }
//     return ans;
// }
// int main(){
//     int arr[5]={1,2,2,2,4};
//     int n = 5;
//     cout<<"first occurence is : " << first (arr,0,n-1,2) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int findP (int arr[],int start,int end){
//     if (start > end){
//         return -1;
//     }

//    int mid = start + (end - start)/2;
//    if(arr[mid]  < arr[mid+1]){
//     return findP(arr,mid + 1,end);
//    }
//    else{
//     return findP(arr,start,end=mid);
//    }

// }
// int main(){
//     int arr[5]={1,2,4,5,6};
//     int n = 5;
//     cout<<"pivot is:"<< findP(arr,0,n-1) << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class A{
//   private:
//   int age;
//   int val;

//   int getage(){
//     return age;
//   }
//   int getval(){
//     return val;
//   }
//   void setage(int a){
//     age = a;
//   }
//   void setval(int v){
//     val = v;
//   }
  
// // void print(){
// //     cout << age << endl;
// //     cout << val << endl;
// // }

// };
// int main(){
//     A obj;
//     obj.setage(56);
//     obj.setval(89);
//     // obj.print();
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class HERO {
//   private:
//   int age;
//   string name;
// public:

// // HERO(){
// //     cout<<"constructer called:" << endl;
// // }

// // HERO(){
// //     this->age = age;
// //     this->name = name;
// // }


// // HERO(HERO& temp){
// //     cout<<"calling copy constructer:"<< endl;
// //     this->age = temp.age;
// //     this->name = temp.name;
// // }


//   int getage(){
//     return age;
//   }
//   string getname(){
//     return name;
//   }
//   void setage(int a){
//     age = a;
//   }
//   void setname(string n){
//     name = n;
//   }
//   void print(){
//     cout<< age << endl;
//     cout<< name << endl;
//   }
// };
// class B : public HERO{
//    public:
// };
// int main(){
//     B object1;
//     B.setage(89);
//     B.setname("mogli");
//     B.print();


//     return 0;
// }

// #include<iostream>
// using namespace std;
// class A{
// public:
// int health;
// int age;
// void setage(int a){
//     age = a;

// }
// void sethealth(int h){
//     health = h;
// }
// void print(){
//     cout << health << endl;
//     cout << age << endl;
// }
// };

// class B:public A{

// };
// int main(){
//     B obj;
//     obj.setage(45);
//     obj.print()
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Dog{
//   private:
//   string Gender;
//   int age;
//  public:
//   string getGender(){
//     return  Gender;
//   }

//   int getage(){
//     return age;
//   }

//   void setGender(string s){
//     Gender = s;
//   }

//   void setage(int a){
//     age = a;
//   }

//   void print(){
//     cout <<"gender is :" <<  Gender << endl;
//     cout <<"age is :"<< age <<endl;
// }

// };
// int main(){
//     Dog object1;
//     object1.setGender("male dog");
//     object1.setage(12);
//     object1.print();
//     return 0;
// }


#include<bits\stdc++.h>
using namespace std;
int main(){

    return 0;
}