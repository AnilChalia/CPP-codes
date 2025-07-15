// #include<bits/stdc++.h>
// using namespace std;
// int main () {
  
//   // int arr[4] = {1,2,5,2};

//   // for (int i=0; i < 5; i++) {
//   //   cout << arr[i] <<" ";
//   // }
//   // cout << endl;

//   // cout << "address of 0 :" << &arr[0] << endl;

//   //  int n;
//   //  cin >> n;

//   //  int arr[n];

  
//   int arr[2] = {1,2};
  
  
//   cout << "before changing value: " << endl;
//   cout << arr[0] << endl;
//   cout << arr[1] << endl;

//   cout <<"after chnaging values:"<<endl;
//   arr[0] = 9;
//   arr[1] = 8;
//   cout << arr[0] << endl;
//   cout << arr[1] << endl;

  



//   return 0;


// }




// #include<iostream>
// using namespace std;
// bool KeyFound(int arr[],int n,int target) {
//   for(int i=0; i<n; i++) {
//     if(target == arr[i]){
//       return true;
//     }
//   }

//   return false;
// }


// int main () {

//   int arr[5] = { 1,2,4,6,7};
//   int target = 9;
//   int n = 5;


//   bool ans = KeyFound(arr,n,target);
//   if(ans ) {
//     cout <<"found:"<<endl;
//   }
//   else{
//     cout<<"not found:"<<endl;
//   }




//   return 0;

// }


// #include<iostream>
// using namespace std;

// void countzeroNdOne (int arr[],int n) {
//     int zeroCount = 0;
//     int OneCount = 0;

//     for(int i=0; i<=n; i++) {
//       if(arr[i] == zeroCount){
//         zeroCount++;
//       }
//       if(arr[i] == OneCount){
//         OneCount++;
//       }
//     } 


//     cout << zeroCount << endl;
//     cout << OneCount << endl;
// }

// int main () {
//   int n = 5;
//   int arr[5] = {1,0,0,1,0};
  
//   countzeroNdOne(arr,n);
  

// }



// // count 0 and count 1
// #include<iostream>
// using namespace std;
// int main() {
  
//   int arr[9] = {1,0,1,0,0,0,1,0,1};
//   int n = 9;


//   int Zerocount = 0;
//   int Onecount = 0;

//   for(int i=0; i<n; i++) {
//     if(arr[i] == 0) {
//       Zerocount++;
//     }
//     if(1  == arr[i]){
//       Onecount++;
//     }
//   }


//   cout <<"zerocount is:" << Zerocount << endl;
//   cout << "onescount is:" << Onecount << endl;

//   return 0;


// }


// // MIN AND MAX VALUE FIND IN ARRAY::::
// #include<bits/stdc++.h>
// using namespace std;
// int minimumNumber(int arr[],int n) {
//   int min = INT16_MAX;
//   for(int i=0; i<n; i++) {
//     if(min > arr[i]){
//       min = arr[i];
//     }
//   }
//   return min;

// }

// int maximum(int arr[],int n) {
  
//   int max = INT16_MIN;
//   for(int i=0; i<n; i++) {
//     if(max < arr[i]){
//       max = arr[i];
//     }
//   }
//   return max;


// }



// int main () {
  
//   int arr[5] = {1,5,7,9,9};
//   int n = 5;

//   cout << "minimu number is :" << minimumNumber(arr,n) << endl;
//   cout<<"maximum number is : "<< maximum(arr,n) << endl;
  


//   return 0;

// }





// // REVERSE AN ARRAY:::::
// #include<bits/stdc++.h>
// using namespace std;

// void revseAnArray(int arr[],int n) {
//   int s = 0;
//   int e = n-1;

//   while(s <= e){
    
//     int temp = arr[s];
//     arr[s] = arr[e];
//     arr[e] = temp;
//     s++;
//     e--;
  
//   }
// }

// int main () {
  
//   int arr[5] = {1,5,7,9,9};
//   int n = 5;

//   revseAnArray(arr,n);
  // for(int i=0; i<n; i++){
  //   cout<<arr[i];
  // }




//   return 0;

// }


// EXTREME PRINT ARRYA::::  

// #include<bits/stdc++.h>
// using namespace std;
// void ExtremePrint (int arr[],int n) {
     
//      int start = 0;
//      int end  = n - 1;

//    while (start <= end) {
//         cout << arr[start] << " ";  // Print the element at the start
//         if (start != end) {
//             cout << arr[end] << " ";  // Print the element at the end (if it's not the same as start)
//         }
        
//         start++;
//         end--;
//     }



// }

// void Print(int arr[],int n) {
//   for(int i=0; i<n; i++) {
//     cout<<arr[i] <<" ";
//   }
//   cout<<endl;
// }

// int main () {
  
//   int arr[5] = {1,2,3,4,1};
//   int n = 5;


//   ExtremePrint(arr,n);
//   // Print (arr,n);





//   return 0;

// }
