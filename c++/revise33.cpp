// #include<iostream>
// using namespace std;
// int main(){
//     int val= 3;
//     int *ptr=&val;
//     cout<<"value is variable is :" << *ptr << endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int power (int n){
//     if (n == 0){
//         return 1;
//     }
//     return 2*power(n-1);
// }
// int main(){
//     int n ;
//     cin>>n;
//     int ans =  power(n);
//     cout << ans << endl;
//     return 0;
// }

// #include<iostream>
// using namespace  std;
// int ans = 0 ;
// int fib (int n){
//     if ( n == 0)
//         return 0;
//     if (n == 1)
//         return 1;
//     fib(n) =   fib(n-1) + fib(n-2);
//     // return ans;
// }
// int main()
// {
//   int n;
//   cin>>n;
//    ans = fib (n);
//    cout << ans << endl;  
// } 



#include<iostream>
using namespace std;
int partition (int arr[],int start,int end){
    int pivot = arr[start];
    int count = 0;
    for(int i=start+1;i<=end;i++){
        if (arr[i] <=pivot){
            count ++;
        }
    }
    int pivotindex = start+count ;
    swap(arr[pivotindex],arr[start]);
    int i=start,j=end;
    if(i < pivotindex && j > pivotindex){
       while (arr[i] < pivot){
        i++;
       }
       while(arr[j] > pivot){
        i--;
       }
       if(i < pivotindex && j > pivotindex){
        swap(arr[i++],arr[j--]);
       }
    }
    return pivotindex;
}
void quickSort (int arr[],int start,int end){
    if (start >= end){
        return;
    }
    int p = partition(arr,start,end);

    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);
}
int main(){
    int arr[5]={9,1,44,2,3};
    int n = 5;
    quickSort(arr,0,n-1);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}