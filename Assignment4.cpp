// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //  int arr[6] = {1,2,3,4,6,7};
// //  int n = 6;
// //  vector<int> temp;


  




// //   return 0;

// // }

// #include<bits/stdc++.h>
// using namespace std;

// void Merge2Sorted(int arr[], int s, int e) {
//     // find mid for divide array in two part
//     int mid = s + (e - s) / 2;
//     int cnt  = 0;
// // length of left and right part
//     int leftPart = mid - s + 1;
//     int rightPart = e - mid;

// // create lft array allocate heap memory
//     int *first = new int[leftPart];
// // create rightn array
//     int *second = new int[rightPart];

// // copy value from original array into new arary
// // k -> s copy value in left array
//     int k = s;
//     for (int i = 0; i < leftPart; i++) {
//         first[i] = arr[k++];
//     }
// // copy k -> m + 1 value in rigthn part
//     k = mid + 1;
//     for (int i = 0; i < rightPart; i++) {
//         second[i] = arr[k++];
//     }

// // left array is olraedy sorted rigth part already sorted
//     int leftIndex = 0;
//     int rghtIndex = 0;
// // tnki main array mer traves kr pau
//     k = s;

//     // copy values in arrays
//     while (leftIndex < leftPart && rghtIndex < rightPart) {
// // agar left part ki value choti h snd array se to copy fist values in original array
//         if (first[leftIndex] < second[rghtIndex]) {
//             arr[k++] = first[leftIndex++];
//         }
//         else {
//             arr[k++] = second[rghtIndex++];
//             cnt+= mid - i + 1;
//         }
//     }
    
//     // copy value in arr 
//     while (leftIndex < leftPart) {
//         arr[k++] = first[leftIndex++];
//     }
    
//     // copy values in arr   
//     while (rghtIndex < rightPart) {
//         arr[k++] = second[rghtIndex++];
//     }
// // deallocate heap memory
//     delete[] first;
//     delete[] second;

//     return cnt;
// }

// int MergeSort(int arr[], int s, int e) {
//     if (s >= e) {
//         return 0;
//     }
//     int cnt = 0;
//     int mid = s + (e - s) / 2;
//     // Left part Sort
//     cnt += MergeSort(arr, s, mid);
//     // Right part sort
//     cnt += MergeSort(arr, mid + 1, e);
//     // Merge 2 arrays
//     cnt += Merge2Sorted(arr, s, e);

//     return cnt;
// }

// int main() {
//     int arr[5] = {10, 3, 9, 11, 4};
//     int n = 5;

//     MergeSort(arr, 0, n - 1);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }



// MergeSort::::::::::::::::
// void Merge(vector<int>& v,vector<int>&temp,int mid,int s,int e){
//     int i = s,j = mid + 1 , k = s;
//     while(i <= mid && j <= e){
//         if(v[i] < v[j]){
//             temp[k++] = v[i++];
//         }
//         else{
//             temp[k++] = v[j++];
//         }
//     }


//     while(i<=mid){
//         temp[k++] = v[i++];
//     }
//     while(j<=e){
//         temp[k++] = v[j++];
//     }

//     while(s <= e){
//         v[s] = temp[s];
//         s++;
//     }
// }
// void MergeSort(vector<int>& v,vector<int>&temp,int s,int e){
//     int mid = s + (e-s)/2;
//     if(s >= e){
//         return;
//     }
//     MergeSort(v,temp,s,mid);
//     MergeSort(v,temp,mid+1,e);
//     Merge(v,temp,mid,s,e);
// }

// public:
//     vector<int> sortArray(vector<int>& nums) {
        
//         // int n = nums.size();
//         // QuickSort(nums,0,n-1);

//         // return nums;

// // MergeSort Call

//        vector<int> temp(nums.size(),0);
//        MergeSort(nums,temp,0,nums.size()-1);
//        return temp;
//     }

