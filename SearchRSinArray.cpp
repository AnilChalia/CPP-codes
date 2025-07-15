class Solution {
public:

    int FindPivot (vector<int> &arr) {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int mid = s + (e-s)/2;

        while(s <= e) {
            
            if(s == e) {
                cout << s << endl;
                return s;
            }

            if(mid+1 < n && arr[mid] > arr[mid+1])
                return mid;
            else if(mid-1 >=0 && arr[mid] < arr[mid-1])
                return mid-1;
            else if(arr[s] > arr[mid] ) 
                e = mid - 1;
            else 
                s = mid + 1;
            
            mid = s + (e-s)/2;
        }
        return -1;
    }
    
    int binarysearch (vector<int>&arr,int s,int e,int target) {
        int mid = s + (e-s)/2;
        while(s<=e) {
            if(arr[mid] == target) {
                return mid;
            }
            if(target > arr[mid]) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        
        
// BruteForce Approach 1 :::::::::
        // for (int i=0; i < nums.size(); i++) {
        //     if (nums[i] == target) {
        //         return i;
        //     }
        // }

        // return -1;

// Optimize Solution 2 ::::::::::
      
        int pivotIndex = FindPivot(nums);
        cout << "Pivot Index us: " << pivotIndex << endl;
        int n = nums.size();
        int ans = -1;

       
        if(target >= nums[0] && target <= nums[pivotIndex]) {
            ans = binarysearch(nums, 0, pivotIndex, target);
        }
        else {
            ans = binarysearch(nums, pivotIndex+1, n-1, target);
        }
        return ans; 


    }
};