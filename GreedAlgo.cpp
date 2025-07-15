// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int row = 8;
//     int col = 15;
//     int tower = 3;
//     vector<pair<int,int>> loc(3);
//     loc.push_back({3,8});
//     loc.push_back({11,2});
//     loc.push_back({8,6});

//     vector<int> Xdim;
//     Xdim.push_back(0);
//     Xdim.push_back(col+1);
//     for(int i=0; i<loc.size(); i++){
//         Xdim.push_back(loc[i].first);
//     }
//     sort(Xdim.begin(),Xdim.end());

//     vector<int> ydim;
//     ydim.push_back(0);
//     ydim.push_back(row+1);
//     for(int i=0; i<loc.size(); i++){
//         ydim.push_back(loc[i].second); // Correction here: loc[i].second
//     }
//     sort(ydim.begin(),ydim.end());

//     vector<int> xAns;
//     for(int i=1; i<Xdim.size(); i++){
//         int diff = Xdim[i] - Xdim[i-1]-1;
//         xAns.push_back(diff);
//     }

//     vector<int> YAns;
//     for(int i=1; i<ydim.size(); i++){
//         int diff = ydim[i] - ydim[i-1]-1; // Correction here: ydim[i]
//         YAns.push_back(diff);
//     }

//     int maxi = -1;
//     for(int i = 0; i<xAns.size(); i++){
//         for(int j=0; j<YAns.size(); j++){
//             int prod = xAns[i] * YAns[j]; // Correction here: YAns[j]
//             maxi = max(maxi,prod);
//         }
//     }

//     cout << "maximum ans is:" << maxi << endl;

//     return 0;
// }


// MIN COST OF ROPES::::::::::::::::::::::::::::::::::::::::::::::::::::
#include<bits/stdc++.h>
using namespace std;

int Solve(int arr[], int n) {
    priority_queue<int, vector<int>, greater<int>> mh;
    for (int i = 0; i < n; i++) {
        int val = arr[i];
        mh.push(val);
    }
  
    int cost = 0; // Add this line to declare cost
    while (mh.size() > 1) {
        int a = mh.top();
        mh.pop();
        int b = mh.top(); // Pop again to get the next smallest element
        mh.pop();
        cost += a + b;
        mh.push(a + b);
    }

    return cost; // Return total cost
}

// FRACTIONAL KNAPSTARCK::::::::::::::::::2
int FractionalKnapstrack(vector<int> val,vector<int> wet,int n,int capacity){
  vector<float> ratio;
  for(int i=0; i<n; i++){
    float ration = (val[i] * 1.0)/ wet[i];
    ratio.push_back(ration);
  }

  priority_queue<pair<float,pair<int,int>> >mh;
  for(int i=0; i<n; i++){
    mh.push({ratio[i],{val[i],wet[i]}});
  }

  // mh is ready
  int toatl = 0;
  while(capacity != 0 || !mh.empty()){
    auto front = mh.top();
    mh.pop();
    // fill insert
    float rations = front.first;
    int value = front.second.first;
    int wt = front.second.second;
    mh.pop();
    
    // full insert
    if(capacity >= wt){
      toatl += value;
      capacity = capacity - wt;
    }
    else{
      // fractionla insert
      int vals = rations * capacity;
      toatl += vals;
      capacity = 0;
      break;
    }
  }

  return toatl;
}

bool com(pair<int,int> a,pair<int,int> b){
  return a.second < b.second;
}
int Minmeeting(int st[],int end[],int n){
  vector<pair<int,int>> time;
  for(int i=0; i<n; i++){
    time.push_back({st[i],end[i]});
  }
  sort(time.begin(),time.end(),com);

  int count = 1; // first elemnt include krna h isliye
  int prevs = time[0].first;
  int preve = time[0].second;

  for(int i=1; i<n; i++){
    int currs = time[i].first;
    int curre = time[i].second;
    if(currs > preve){
      count++;
      prevs = currs;
      preve = curre;
    }
  }
  return count;
}

int main(){
  int st[] = {1,3,0,5,8,5};
  int end[] = {2,4,6,7,9,8};
  int n = 6;
  int ans = Minmeeting(st,end,n);
  cout << ans  << endl;

  // vector<int> val = {60,100,120};
  // vector<int> wt = {10,20,30};
  // int n = 3;
  // int w = 50;
  // int ans = FractionalKnapstrack(val,wt,n,w);
  // cout << ans << endl;


  // int arr[] = {4,3,2,6};
  // int n = 4;
  // int ans = Solve(arr,n);
  // cout << ans << endl;
  return 0;
}