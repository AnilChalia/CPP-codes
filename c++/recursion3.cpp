// #include<iostream>
// using namespace std;

// int fac (int n){

//   if (n == 0)
//       return 1;

//    return n * fac (n-1);


// }

// int main(){
    
//    int n;
//    cin >> n;
   
//    int ans = fac  (n);

//    cout << ans << endl;

//    return 0;
// }

// #include<iostream>
// using namespace std;
// int power (int n){


//     if (n == 0)
//        return 1;


//     return 2 * power (n-1);
// }
// int main(){
   
//     int n;
//     cin >> n;

//     int ans = power (n);

//     cout << ans <<  endl;


//     return 0;
// }

// #include<bits\stdc++.h>
// using namespace std;
// int fibonacci (int n){
//     if (n == 0)
//        return 0;

//     if (n == 1)
//        return 1;

//    int nextnumber = fibonacci (n-1) + fibonacci (n-2);
   
//    cout << nextnumber <<" ";

//     return nextnumber ;
   
// }
// int main(){
//    int n;
//    cin >> n;


//    int ans = fibonacci (n);

//    cout << ans << endl;

//    return 0;
// }

// #include<iostream>
// using namespace std;

// int ans = 0;

// int sumArray (int arr[] , int n = 4){
//    if (n == 0)
//       return 1;

//    return  sumArray (arr,n-1) + sumArray(n-1);

// }
// int main (){
//    int arr [4] = {1,2,4,5};

//    ans = sumArray (arr);

//    cout << ans << endl;

//    return 0;
// // }

#include<iostream>
using namespace std;
bool cheachSorted (int arr[] ,int n =7){
   if ( n == 0 || n == 1){
         return true;
   }
   if (arr[0] > arr[1]){
      return false;
   }
   else{
      bool ramainingpart = cheachSorted(arr+1,n-1);
         return ramainingpart;
   }
}
int main(){
   int arr[7]={1,2,4,5,8,11,12};

   bool ans = cheachSorted (arr);

   if(ans){
      cout<<"sorted array:" << endl;
   }
   else{

      cout<<"not sortde array:"<< endl;
   }

}
//    return 0;
// // }

// #include<iostream>
// using namespace std;
// int sumArray (int arr[] ,int n =5){
//    if (n ==0 )
//         return 0;
//    if (n == 1)
//         return arr[0];
   

//    int reaminning = sumArray (arr +1 , n -1);
//    int sum = arr[0] + reaminning;
//    return sum;
// }
// int main(){
//    int arr[5] = {3,4,5,6,7};

//    int ans = sumArray (arr);

//    cout << ans << endl;

//    return 0;
// }


// #include<iostream>
// using namespace std;
// bool ans = 0;
// // void printArray (int arr[] ,int n){
// //    for(int i=0;i<n;i++){
// //       cout<<arr[i]<<" ";
// //    }
// //    cout<<endl;
// // }
// bool linearSearch (int arr[] ,int n,int key){
//    // printArray (arr,n);
//    if (n == 0)
//         return false;
//    if (arr[0] == key)
//         return true;

//    bool ramianingPart = linearSearch(arr+1,n-1,key);

//    return ramianingPart;
// }
// int main(){ 
//    int arr[5] = {4,5,6,7,8};
//    int key;
//    cin >> key;

//    ans  = linearSearch (arr,7,key);

//    if (ans){
//       cout<<"hegi h yar"<< endl;
//    }
//    else{
//       cout<<"koni yaar" << endl;
//    }

//    return 0;
// }



// #include<iostream>
// using namespace std;
// int binaryS (int arr[] , int n,int key){
//    int start = 0;
//    int end = n - 1;
//    int mid = start + (end - start) / 2;
//    if (arr[mid] == key){
//       return mid;
//    }
//    if (arr[mid] < key){
//       start  = mid + 1;
//    }
//    else{
//       end = mid - 1;
//    }
//    mid = start + (end - start) / 2;

//    return -1;

// }
// int main(){

//    int arr [5] = {0,3,5,7,8};
//    int index = binaryS (arr,5,5);
//    cout<< "netre your kw=ey index is :" << index << endl;

//    return 0;
// }


// #include<iostream>
// using namespace std;
// int bs (int arr[],int start,int end ,int key){
//    if(start<end)
//        return false;
//    int mid = start + (end - start) / 2;

//    if(arr[mid]==key)
//        return true;

//    if(arr[mid] < key){
//        return bs (arr,mid+1,end,key);
//    }
//    else{
//       return bs (arr,start,mid-1,key);
//    }
// }
// int main(){
//    int arr[5] = {1,3,5,7,8};
//    int size = 5;
//    // int key = 12

//    cout <<"present or not:" << bs (arr,0,4,1) << endl;

//    return 0;
// }

// #include<iostream>
// using namespace std;
// int sumArray (int arr[],int n){
//     if(n == 0)
//        return 0;
//     if(n == 1)
//        return arr[0];

//     // sumArray(arr,n);
//     int remainingpart = sumArray (arr+1,n-1);
//     int sum  = arr[0] + remainingpart;
//     return sum;
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};

//     int ans =  sumArray(arr,5);

//     cout << ans << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int reverse (int arr[],int n){
//     int start = 0;
//     int end = n-1;
//     while(start <= end){
//         swap(arr[start++],arr[end--]);
//     }
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};

//     reverse(arr,5);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int reverse (int arr[],int n){
//     int s = 0;
//     int e = n -1;
//     while(s <= e){
//         swap (arr[s++],arr[e--]);
//     }
// }
// void print (int arr[],int n){
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[5] = {4,5,7,3,2};


//     reverse (arr,5);
//     print(arr,5);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int reverse(int arr[],int n ,int s,int e){
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;

//     while(s <= e){
//         swap (arr[s++],arr[e--]);
//     }
//     reverse (arr,n,s,e);
// }
// int main(){
//     int arr[5]={4,5,6,7,8};

//     reverse (arr,5,0,4);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// void recfun(int i,int arr[],int n)
// {
//     if(i>=n/2)
//         return;

//     swap(arr[i],arr[n-1-i]);

//     recfun(i+1,arr,n);
// }
// int main()
// {
//     int arr[]={5,4,8,3,6,1};
//     recfun(0,arr,6);
//     return 0;
// }


// #include<bits\stdc++.h>
// using namespace std;

// int reverseA (int arr[],int n){
//     int start = 0;
//     int end = n-1;
//     // base case
//     if ()
// }

// int main(){

//     int arr [5] = {7,3,1,8,0};

//     return 0;
// }

// #include<bits\stdc++.h>
// using namespace std;
// void print (int arr[],int start ,int end ){
//     for(int i= start;i<=end;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int binarys(int arr[],int start,int end,int key){
//     print(arr,start,end);
//     if (start > end)
//          return 0;
//     int mid = start + (end -start) /2;
//     if (arr[mid] == key)
//          return true;
//     if (arr[mid] < key)
//        return binarys (arr,mid +1,end,key);
//     else{
//         return binarys (arr,start,mid-1,key);
//     }
// }
// int main (){
//     int arr [7] = {1,2,3,4,5,6,7};

//     int size  = 7;

//     int key = 1;

//     cout<<"present or not :" <<  binarys (arr,0,6,key) << endl;
 
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int bs (int arr[],int n){
//     int start = 0;
//     int end = n-1;
//     int mid = start+(end -start)/2;
//     if(arr[mid] >= arr[0]){
//         start = mid + 1;
//     }
//     else{
//         end = mid;
//     }
//     mid = start+(end -start)/2;
//     return start;
// }
// int main(){

//     int arr[4] = {4,5,3,1};


//     cout<<"pivot is :" << bs(arr,4) << endl;

//     return 0;
// }

// #include<bits\stdc++.h>
// using namespace std;
// int ans = 0;
// int firstocc (int arr[],int start,int end,int key){
//     if (start >  end)
//         return -1;
//     int mid = start + (end -start)/2;
//     if  (arr[mid] == key)
//         ans = mid;
//         end = mid -1;
    
//     if (arr[mid] < key){
//        return firstocc (arr,mid + 1,end,key);
//     }
//     else{
//         return firstocc (arr,start,mid-1,key);
//     }

// }
// int main(){
//     int arr[4] = {1,3,3,3};

//     int size = 4;
//     int key = 3;
//     cout<<"first occurence is :" << firstocc (arr,0,3,key) << endl;

//     return 0;
// }


// #include<bits\stdc++.h>
// using namespace std;
// int getpivot (int arr[],int n){
//     int start = 0;
//     int end = n-1;
//     int mid = start + (end -start )/2;
//     while (start < end){
//         if (arr[mid] >= arr[0]){
//             start = mid +1;
//         }
//         else{
//             end = mid;
//         }
//         mid = start + (end - start) /2;
//     }
//        return start ;
// }
// int main(){
//     int arr[5] = {1,2,3,5,7};

//     cout << "pivot is :" << getpivot (arr,5) << endl;

//     return 0;
// }



// #include<iostream>
// using namespace std;
// int findpivot (int arr[],int start,int end){
//     if (start > end){
//         return -1;
//     }
//     int mid = start + (end - start)/2;
//     if(arr[mid] >= arr[0]){
//         start = mid +1;        
//     }



// }
// int main(){
//     int arr[5]={4,2,7,1,9};
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int sumofArray (int arr[],int n){
//     if( n == 0){
//         return 0;
//     }
//     if(n == 1){
//         return arr[0];
//     }
//     int remainingpart = sumofArray (arr+1,n-1);
//     int sum = arr[0] + remainingpart;
//     return sum;
// }
// int main(){
//     int arr[5]={1,3,6,8,90};

//     int ans = sumofArray (arr,5);
    
//     cout << ans << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;
// void print (int src,int des){
//     for(int i=src;i<=des;i++){
//         cout << i <<" ";
//     }
//     cout << endl;
// }
// void destina (int src ,int des){
//     print (src,des);
//     if (src == des){
//         cout <<"phunch gya:"<< endl;
//         return;
//     }
//     src ++;

//     destina (src ,des);
// }
// int main(){
//     int src = 1;
//     int des = 10;
//     destina (src ,des);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void print (int n){
//     for(int i=1;i<=n;i++){
//         cout<< i << " "; 
//     }
//     cout<< endl;
// }
// int poweroftwo (int n){
//     print (n);
//     if (n ==0 )
//        return 1;

//     return 2 * poweroftwo (n-1);
// }
// int main(){
//     int n;
//     cin>>n;

//     int ans = poweroftwo (n);

//     cout << ans << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// void saydigit (int n,string arr[]){
//     if (n == 0)
//        return ;

//     int digit = n%10;
//     n = n/10;

//     cout << arr[digit] << endl;

//     saydigit (n,arr);
// }
// int main(){ 
// string arr[11]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};

//     int n;
//     cin >> n;
//     saydigit (arr,n);
//     return 0;
// }


// #include<bits\stdc++.h>
// using namespace std;
// int sayDigit (int n,string arr[]){
//     if ( n == 0 )
//         return 0;
//     int digit = n % 10;
//     n = n / 10;


//     cout << arr[digit] <<" ";

//     cout << endl; 
   
//     sayDigit (n,arr);

//     cout << arr[digit] <<" ";
// }
// int main (){
//     string arr[11] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten"};

//     int n;
//     cin >> n;

//     sayDigit (n,arr);
    

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int cheacks (int arr[],int n){
//     if (n==0 || n==1){
//         return true;
//     }
//     if (arr[0] > arr[1]){
//         return false;
//     }
//     else{
//         bool remain = cheacks (arr+1,n-1);
//         return remain;
//     }
// }
// int main (){
//     int arr[4]={1,3,4,7};

//     int ans = cheacks (arr,4);

//     cout <<"sorted or not:" << ans << endl;


//     return 0;
// }

// #include<iostream>
// using namespace std;
// int cheprime (int n,int i){
//     if (n%i == 0){
//         return 0;
//     }
//     else{
//         return 1;
//     }

//     cheprime (n,i);

// }
// int main(){
//     int n;
//     cin >> n;
//     int i  = 50;
// //     cout <<"prime or not :"<< cheprime (n,i) << endl;
// //     return 0;
// // }


// #include<iostream>
// using namespace std;
// int n =5;
// int reverse (int arr[] , int start ,int end){
// if (start < end){
//     swap (arr[start++],arr[end--]);
// }

// reverse (start+1,end-1);


// }
// void print (int arr[]){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
        


// #include<iostream>
// using namespace std;
// int revrse(int arr[],int n){
//     int s = 0;
//     int e=n-1;
//     while(s < e){
//         swap(arr[s++],arr[e--]);
//     }
// }
// void print (int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[4] ={3,2,1,4};

//     revrse (arr,4);
//     print(arr,4);
//     return 0;
// }

#include<iostream>
using namespace std;
int revrse (int arr[],int start,int end){
   if (start <= end){
    swap(arr[start],arr[end]);
   }
   start++;
   end--;
   }
void print (int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5]= {1,2,3,4,5};
    int n=5;
    reverse(arr,0,n-1);
    print(arr,5);
    return 0;
}