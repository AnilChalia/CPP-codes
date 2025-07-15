// // DEFKIN :::::::::::::
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int row = 8;
//     int col = 15;
//     int tower = 3;
//     vector<pair<int,int>> loc(3);
//     loc.push_back({3,8});
//     loc.push_back({11,2});
//     loc.push_back({8,6});
    
//     vector<int> xdim;
//     xdim.push_back(0);
//     xdim.push_back(col+1);
//     for(int i=0; i<loc.size(); i++) {
//         xdim.push_back(loc[i].first);
//     }
//     sort(xdim.begin(),xdim.end());
    
//     vector<int> ydim;
//     ydim.push_back(0);
//     ydim.push_back(row+1);
//     for(int i=0; i<loc.size(); i++) {
//         ydim.push_back(loc[i].second);
//     }
//     sort(ydim.begin(),ydim.end());
    
//     vector<int> xans;
//     for(int i=0; i<xdim.size(); i++){
//         int diff = xdim[i]-xdim[i-1]-1;
//         xans.push_back(diff);
//     }

//     vector<int> yans;
//     for(int i=0; i<ydim.size(); i++){
//         int diff = ydim[i]-ydim[i-1]-1;
//         yans.push_back(diff);
//     }
//     // 
//     // product
//     int maxi = -1;
//     for(int i=0; i<xans.size(); i++){
//         for(int j=0; j<yans.size(); j++){
//             int prod = xans[i] * yans[j];
//             maxi = max(maxi,prod);
//         }
//     }
    
//     cout << "maximum answer is :" << maxi << endl;   
//     return 0;
// }



// // 2 : MIN COST OF ROPS:::::::::::::::
// #include<bits/stdc++.h>
// using namespace std;
// int Solve(int arr[],int n) {
// 	priority_queue<int,vector<int>,greater<int> > Minheap;
// 	for(int i=0; i<n; i++) { 
// 		int val = arr[i];
// 		Minheap.push(val);
// 	}
// 	int cost = 0;
// 	while(Minheap.size() > 1) {
// 		int FirstVal = Minheap.top();
// 		Minheap.pop();
// 		int SecondVal = Minheap.top();
//     Minheap.pop();

// 		cost += FirstVal + SecondVal;
// 		int sum = FirstVal + SecondVal;
// 		Minheap.push(sum);
// 	}
// 	return cost;
// }
// int main(){
// 	int arr[] = {4,3,2,6};
// 	int n = 4;
// 	int ans = Solve(arr,n);
// 	cout <<"final ans is:" << ans << endl;
// 	return 0;
// }




// // 3:FRAPSNAL KNAPSNACK:::::::::::::::
//    #include<bits/stdc++.h>
// 	 using namespace std;
// 	 int FractionlaKnap(vector<int> val,vector<int> wt,int n,int compacity){
// 		vector<int> valueratio;
// 		// ration nikal and push in vector
// 		for(int i=0; i<n; i++){
// 			float ratio = (val[i] * 1.0) / wt[i];
// 			valueratio.push_back(ratio);
// 		}
    
// 		// create maxheap and push ration ,value,wt
// 		priority_queue<pair<float,pair<int,int>> > maxi;
// 		for(int i=0; i<n; i++){
// 			maxi.push({valueratio[i],{val[i],wt[i]}});
// 		}
    
// 		// total ans 
// 		int toatl = 0;
// 		while(compacity != 0 && !maxi.empty()){
// 			// ration nikala
// 			auto front = maxi.top();
// 			// ratio ki vlaue
// 			float ratio = front.first;
// 			// value
// 			int value = front.second.first;
// 			// weight
// 			int wight = front.second.second;
// 			maxi.pop();
      
// 			// agr cmpacity jyada h to toatl me plus kro or weigght se compacity -1 kro
// 			if(compacity >= wight){
// 				toatl += value;
// 				compacity = compacity - wight;
// 			}
// 			else{
// 				// weight se cohota h compcity 
// 				int valuetoi = ratio * compacity;
// 				toatl += valuetoi;
// 				compacity = 0;
// 				break;
// 			}
// 		}
// 		return toatl;
// 	 }
// 	 int main(){
// 		vector<int> val = {60,100,120};
// 		vector<int> wt = {10,20,30};
// 		int n = 3;
//     int w = 50;
// 		int ans = FractionlaKnap(val,wt,n,w);
// 		cout << "maximum profit is using capacity:" <<  ans << endl;
// 		return 0;
// 	 }

// // 4:N MEETINGS IN ROOM:::::::::::::::
// #include<bits/stdc++.h>
// using namespace std;
// bool compare(pair<int,int> &a,pair<int,int> &b){
// 	return a.second < b.second;
// }
// int Solve(int s[],int e[],int n) {
// 	vector<pair<int,int>> time;
// 	for(int i=0; i<n; i++){
// 		time.push_back({s[i],e[i]});
// 	}
// 	sort(time.begin(),time.end(),compare);

// 	int count = 1; // pehle meenting is include
// 	int prevs = time[0].first;
// 	int preve = time[1].second;

// 	for(int i=1;i<n; i++) {
// 		int currs = time[i].first;
// 		int curre = time[i].second;
// 		if(currs > preve){
// 			count++;
// 			prevs = currs;
// 			preve = curre;
// 		}
// 	}
//       return count;
// }
// int main(){
//   int start[] = {10,12,20};
// 	int end[] = {20,25,30};
// 	int n = 3;
// 	int ans = Solve(start,end,n);
// 	cout << "nmeetings in a room s:" << ans << endl;
// 	return 0;
// }

// 5:CHOCLATE DISTRBUTION EACH PAIR OF 5:::::::
// long long Solve(vector<long long>& a, long long n, long long m) {
//     // Sort the array
//     sort(a.begin(), a.end());
    
//     long long Mini = LLONG_MAX;
    
//     // Iterate over the array with a window of size m
//     for (int i = 0; i + m - 1 < n; ++i) {
//         long long diff = a[i + m - 1] - a[i];
//         Mini = min(Mini, diff);
//     }
    
//     return Mini;
// }

// long long findMinDiff(vector<long long>& a, long long n, long long m) {
//     if (n < m || m <= 0) {
//         return -1;
//     }
    
//     return Solve(a, n, m);
//  }