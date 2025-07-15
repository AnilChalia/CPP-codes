#include<bits/stdc++.h>
using namespace std;
class Graph{
public:
  // unordered_map<int,list<pair<int,int>>> adjlist;

  // add edges in graph lis
  // void AddEdge(int u,int v,int wt, bool direction){
  //   if(direction == 1){
  //     adjlist[u].push_back({v,wt});
  //   }
  //   else{
  //     adjlist[u].push_back({v,wt});
  //     adjlist[v].push_back({u,wt});
  //   }
  // }
	unordered_map<int,list<int> > adjList;

	void addEdge(int u, int v,bool direction) {
		//direction -> 0 -> undorected
		//direction -> 1 -> directed
		if(direction == 0) {
			adjList[u].push_back(v);
			adjList[v].push_back(u);
		}
		else {
			adjList[u].push_back(v);
		}
	}

  // // printing the edge list
  // void PrintList(){
  //   for(auto i:adjlist){
  //     cout << i.first <<" : { ";  // Change here
  //   for(auto nbr:i.second){
  //     cout << "{" << nbr.first << "," << nbr.second << "}, " ;
  //    }
  //     cout<< "}" << endl;
  //   }
  // }

  // void BellManFord(int n,char src){
  //   // intialize state
  //   vector<int> Dist(n,INT_MAX);
  //   Dist[src] = 0;

  //   // n-1 times realxation
  //   for(int i=1; i<n; i++){

  //     // tarvesa on entire edge list
  //     for(auto a:adjlist){
  //       for(auto b:a.second){
  //         char u = a.first;
  //         char v = b.second;
  //         int wet = b.second;
  //         // realaxaionstep
  //         if(Dist[u]!=INT_MAX && Dist[u] + wet < Dist[v]){
  //           Dist[v] = Dist[u] + wet;
  //         }
  //       }
  //     }
  //   }

  //   // yha shortest dist ready h
  //   // check for negative cycle
  //   // 1 bar or realaxation chlata hu
  //   bool iScycle = false;
  //     for(auto a:adjlist){
  //       for(auto b:a.second){
  //         char u = a.first;
  //         char v = b.first;
  //         int wet = b.second;
  //         // realaxaionstep
  //         if(Dist[u-'A']!=INT_MAX && Dist[u-'A'] + wet < Dist[v-'A']){
  //           iScycle = true;
  //           Dist[v-'A'] = Dist[u-'A'] + wet;
  //           break;
  //         }
  //       }
  //     }

  //     if(iScycle == true){
  //       cout << "negative cycle present:" << endl;
  //     }
  //     else{
  //       cout << "no cycle neagtive present: "<< endl;
  //       cout <<"printign distasnce arr:" << endl;
  //       for(auto i:Dist){
  //         cout << i <<" ";
  //       }
  //       cout <<endl;
  //     }
  // }
   
  // void floydWarshall(int n){
  //   //  intial state 2d arr creat
  //   vector<vector<int> >Dist(n,vector<int>(n,1e9));
  //   // diagnol pr zero set
  //   for(int i=0; i<n; i++){
  //     Dist[i][i] = 0;
  //   }
  //   // kuch wet graph k andr gien h
  //   // uoadte diist array accorsdelngly
  //   for(auto a:adjlist){
  //     for(auto b:a.second){
  //       int u = a.first;
  //       int v = b.first;
  //       int wet = b.second;
  //       Dist[u][v] = wet;
  //     }
  //   }

  //   // main logic
  //   // hlper
  //   for(int helper=0; helper<n; helper++){
  //     for(int src=0; src<n; src++){
  //       for(int dest=0; dest<n; dest++){
  //         // sare k dist arra ka mni torw
  //         Dist[src][dest] = min(Dist[src][dest],Dist[src][helper]+Dist[helper][dest]);
  //       }
  //     }
  //   }
  //   // printing distance arr
  //   for(int i=0; i<n; i++){
  //     for(int j=0; j<n; j++){
  //       cout << Dist[i][j] <<" ";
  //     }
  //     cout << endl;
  //   }
  // }


	void dfs1(int node, stack<int>& ordering, unordered_map<int,bool>& vis) {
		vis[node] = true;
		for(auto nbr: adjList[node]) {
			if(!vis[nbr]) {
				dfs1(nbr, ordering, vis);
			}
		}
		//wapas aate hue stack me push
		ordering.push(node);
	}
	void dfs2(int src, unordered_map<int,bool>& vis2, unordered_map<int,list<int> >& adjNew) {
		vis2[src] = true;
		cout << src <<"; ";

		for(auto nbr: adjNew[src]) {
			if(!vis2[nbr]) {
				dfs2(nbr, vis2, adjNew);
			}
		}
	}

	int getStronglyConnectedComponents(int n) {
		//step1: get the Ordering
		stack<int> ordering;
		unordered_map<int,bool> vis;

		for(int i=0; i<n; i++ ){
			if(!vis[i]) {
				dfs1(i,ordering,vis);
			}
		}

		//step2: reverse edges
		unordered_map<int, list<int> > adjNew;
		for(auto a: adjList) {
			for(auto b: a.second) {
				int u = a.first;
				int v = b;
				//v -> u ki entry create krni h 
				adjNew[v].push_back(u);
			}
		}
		//step3: traverse using ordering and count components
		int count = 0;
		unordered_map<int,bool> vis2;

		while(!ordering.empty()) {
			int node = ordering.top();
			ordering.pop();
			if(!vis2[node]) {
				cout << "SCC #" << count+1 << ": ";
				dfs2(node, vis2,adjNew);
				count++;
				cout << endl;
			}
		}
		return count;
	}


};

int main(){
  Graph g;
  
  g.AddEdge(0,1,1);
  g.AddEdge(1,2,1);
  g.AddEdge(2,3,1);
  g.AddEdge(3,0,1);
  g.AddEdge(2,4,1);
  g.AddEdge(4,5,1);
  g.AddEdge(5,6,1);
  g.AddEdge(6,4,1);
  g.AddEdge(6,7,1);
  g.PrintList();
  


  



  // g.AddEdge('A','B',-1,1);
  // g.AddEdge('B','E',2,1);
  // g.AddEdge('E','D',-3,1);
  // g.AddEdge('D','C',5,1);
  // g.AddEdge('A','C',4,1);
  // g.AddEdge('B','C',3,1);
  // g.AddEdge('B','D',2,1);
  // g.AddEdge('D','B',1,1);
  // g.PrintList();
  // g.BellManFord(5,'A');

  // g.AddEdge(0,1,3,1);
  // g.AddEdge(1,0,2,1);
  // g.AddEdge(0,3,5,1);
  // g.AddEdge(1,3,4,1);
  // g.AddEdge(1,2,1,1);
  // g.AddEdge(3,2,2,1);
  // g.AddEdge(2,1,1,1);
  // g.floydWarshall(4);

  return 0;
}