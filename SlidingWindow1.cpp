// 1 : SLIDING WINDOW MAXIMUM:::::::
// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         deque<int> dq;
//         vector<int> ans;
//         // process first k elements 
//         for(int i = 0; i < k; i++) {
//             // pop elements smaller than the current element
//             while(!dq.empty() && nums[dq.back()] < nums[i]) {
//                 dq.pop_back();
//             }
//             dq.push_back(i);
//         }

//         ans.push_back(nums[dq.front()]);

//         // process remaining window
//         for(int i = k; i < nums.size(); i++) {
//             // removal
//             while(!dq.empty() && nums[dq.back()] < nums[i]) {
//                 dq.pop_back();
//             }
//             // addition
//             dq.push_back(i);
//             // removal
//             if(!dq.empty() && i - dq.front() >= k) {
//                 dq.pop_front();
//             }
//             // ans store
//             ans.push_back(nums[dq.front()]);
//         }
//         return ans;
//     }
// }; 

// 2:MINIMU SIZEE IN SUBARRAY::::::
// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int start = 0;
//         int end = 0;
//         int MinLen = INT_MAX;
//         int sum = 0;

//         while(end < nums.size()){
//             sum += nums[end];

//             // if sum greater thne target
//             while(sum >= target){
//                 MinLen = min(MinLen,end-start+1);
//                 sum =  sum - nums[start];
//                 start++;
//             }
//                end++;
//         }

//         return (MinLen != INT_MAX) ? MinLen:0;
//     }
// };

// 3:TWO SUM::::::::::::::::;
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         for(int i=0; i<n; i++) {
//             for(int j=i+1; j<n; j++) {
//                 if(nums[i] + nums[j] == target){
//                     return {i,j};
//                 }
//             }
//         }
//         return {};
//     }
// };

// 4 : Binary subaarya sum O(n2);
// class Solution {
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal) {
//         int count = 0;
//         int n = nums.size();
//         int sum = 0;
        
//         for(int start = 0; start < n; start++) {
//             sum = 0;
//             for(int end = start; end < n; end++) {
//                 sum += nums[end];
//                 if(sum == goal)
//                     count++;
//                 else if(sum > goal)
//                     break;
//             }
//         }
//         return count;
//     }
// };
// OR O(n)
// class Solution {
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal) {
//         int count = 0;
//         int n = nums.size();
//         int sum = 0;
//         int start = 0;
//         int end = 0;
//         int prefixZeros = 0;

//         while(end < n) {
//             sum = sum + nums[end];

//             while(start < end && (sum > goal || nums[start]  == 0)){
//                  if(nums[start] == 0){
//                     prefixZeros += 1;
//                  }else{
//                     prefixZeros = 0;
//                  }

//                  sum -= nums[start];
//                  start++;
//             }
//             if(sum == goal){
//                 count += prefixZeros + 1;
//             }
//             end++;
//         }

//         return count;
//     }
// };

// 5:Minimum Window Substring::::::
class Solution {
public:
    string minWindow(string s, string t) {
        int len1 = s.length();
        int len2 = t.length();
        
        if(len1 < len2){
          return "";
        }
        // valid case
        int ansIndex = -1;
        int ansLen = INT_MAX;
        int start = 0;

        unordered_map<char,int> sMap;
        unordered_map<char,int> tMap;
        // store free pattern of tring
        for(char ch:t){
          tMap[ch]++;
        }
        // intialize count variable.that vbascically shows actually
        // present in the current window
        int count = 0;
        int end = 0;
        while(end < s.length()){
          char ch = s[end];
          sMap[ch]++;
          if(sMap[ch] <= tMap[ch]){
            // valid character
            count++;
          }

          if(count == len2){
            // wek window fount jima paatern found
            // minimize window
            // minimize window extra character
            // or faltu character h
            while(sMap[s[start]] > tMap[s[start]]){
              if(sMap[s[start]] > tMap[s[start]] ){
                sMap[s[start]]--;
              }
              start++;
            }
            // ans 
            int WindowLength = end - start + 1;
            if(WindowLength < ansLen){
              ansLen = WindowLength;
              ansIndex = start;
            }
          }
          end++;
        }

        if(ansIndex == -1){
          return "";
        }else{
          return s.substr(ansIndex,ansLen);
        }
    }
};
