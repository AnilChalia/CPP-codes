#include <bits/stdc++.h>
using namespace std;
int solve(int arr[],int n) {
  priority_queue<int,vector<int>,greater<int>>minheap;
  for(int i = 0; i<n; i++){
    int val = arr[i];
    minheap.push(val);
  }

  int cost = 0;
  while(minheap.size() > 1){
    int a = minheap.top();
    minheap.pop();
    int b = minheap.top();
    minheap.pop();

    cost += a + b;
    int sum = a + b;
    minheap.push(sum);
  }

  return cost;
}

float fractionalKnapsack(vector<int> val, vector<int> wt, int n, int capacity) {
    // Calculate ratio and push into priority queue
    priority_queue<pair<float, pair<int, int>>> pq;
    for (int i = 0; i < n; i++) {
        float ratio = (val[i] * 1.0) / wt[i];
        pq.push({ratio, {val[i], wt[i]}});
    }

    float totalValue = 0.0;
    while (!pq.empty() && capacity > 0) {
        auto item = pq.top();
        pq.pop();
        
        int value = item.second.first;
        int weight = item.second.second;

        if (weight <= capacity) {
            // Take the whole item
            totalValue += value;
            capacity -= weight;
        } else {
            // Take the fraction of the item that fits
            totalValue += item.first * capacity;
            capacity = 0;
        }
    }
    
    return totalValue;
}

int main() {

    int arr[] = {4,3,2,6};
    int n = 4;
    int ans = solve(arr,n);
    cout << "finl ans is:" << ans << endl;
     
    // int row = 8;
    // int col = 15;
    // int tower = 3;
    // vector<pair<int, int>> loc;
    // loc.push_back({3, 8});
    // loc.push_back({11, 2});
    // loc.push_back({8, 6});

    // vector<int> xDim;
    // xDim.push_back(0);
    // xDim.push_back(col + 1);

    // for (int i = 0; i < loc.size(); i++) {
    //     xDim.push_back(loc[i].first);
    // }
    // sort(xDim.begin(), xDim.end());

    // vector<int> yDim;
    // yDim.push_back(0);
    // yDim.push_back(row + 1);

    // for (int i = 0; i < loc.size(); i++) {
    //     yDim.push_back(loc[i].second);
    // }
    // sort(yDim.begin(), yDim.end());

    // vector<int> xans;
    // for (int i = 1; i < xDim.size(); i++) {  // Start from i = 1
    //     int diff = xDim[i] - xDim[i - 1] - 1;
    //     xans.push_back(diff);
    // }

    // vector<int> yans;
    // for (int i = 1; i < yDim.size(); i++) {  // Start from i = 1
    //     int diff = yDim[i] - yDim[i - 1] - 1;
    //     yans.push_back(diff);
    // }

    // int maxi = -1;
    // for (int i = 0; i < xans.size(); i++) {
    //     for (int j = 0; j < yans.size(); j++) {  // Increment j, not i
    //         int prod = xans[i] * yans[j];
    //         maxi = max(maxi, prod);
    //     }
    // }

    // cout << "final ans is: " << maxi << endl;

    return 0;
}
