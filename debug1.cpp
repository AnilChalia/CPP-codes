// /*
// Given an array, the task is to find sum of maximum sum alternating subsequence starting with first element. Here alternating sequence means first decreasing, then increasing, then decreasing, … For example 10, 5, 14, 3 is an alternating sequence. 
// */

// int maxAlternateSum(int arr[], int n) 
// { 
//     if (n == 0) 
//         return arr[0]; 

//     int min = arr[0]; 
//     for (int i = 1; i < n; i++) { 
//         if (min > arr[i]) 
//             min = arr[i]; 
//     } 
//     if (min == arr[0]) { 
//         return arr[0]; 
//     } 

//     int dec[n]; 
//     memset(dec, 0, sizeof(dec)); // You can search what memset is

//     int inc[n]; 
//     memset(inc, 0, sizeof(inc)); 

//     dec[0] = inc[0] = arr[0]; 
  
//     int flag = 1; 
//     for (int i = 1; i < n; i++) { 
//         for (int j = 0; j < i; j++) { 
//             if (arr[j] > arr[i]) { 
//                 dec[i] = max(dec[i], inc[j] + arr[i]); 
//                 flag = 1; 
//             } 
//             else if (arr[j] < arr[i] && flag == 1) 
//                 inc[i] = max(inc[i], dec[j] + arr[i]); 
//         } 
//     } 
//     int result = INT_MIN; 
//     for (int i = 0; i < n; i++) { 
//         if (result < inc[i]) 
//             result = inc[i]; 
//         if (result < dec[i]) 
//             result = dec[i]; 
//     } 
//     return result; 
// }
#include <iostream>

int main() {
    // Declare an array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Get the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Example 1: Print a subarray (e.g., from index 2 to index 6)
    std::cout << "Subarray [2, 6]: ";
    for (int i = 2; i <= 6; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Example 2: Find the sum of a subarray (e.g., from index 1 to index 4)
    int sum = 0;
    for (int i = 1; i <= 4; i++) {
        sum += arr[i];
    }
    std::cout << "Sum of subarray [1, 4]: " << sum << std::endl;

    return 0;
}
