	// int GetMinIndexValue(vector<int> &Key,vector<int> &mst){
	//     int temp = INT_MAX;
	//     int index = -1;
	//     for(int i=0;i<Key.size();i++){
	//         if(Key[i] < temp && mst[i] == false){
	//             temp = Key[i];
	//             index = i;
	//         }
	//     }
	//     return index;
	// }
  //   int spanningTree(int V, vector<vector<int>> adj[])
  //   {
  //       // code here
  //       vector<int> Key(V,INT_MAX);
  //       vector<int> MST(V,false);
  //       vector<int> Parent(V,-1);
  //       // base src
  //       Key[0] = 0;
  //       while(true){
  //           int u = GetMinIndexValue(Key,MST);
  //           if(u == -1){
  //               break;
  //           }
  //           MST[u] = true;
            
  //           for(auto edge:adj[u]){
  //               int v = edge[0];
  //               int w = edge[1];
                
  //               if(MST[v] == false && w < Key[v]){
  //                   Key[v] = w;
  //                   Parent[v] = u;
                    
  //               }
  //           }
  //       }
  //       int sum = 0;
  //       for(int i=0; i<Parent.size(); i++){
  //           for(auto edge:adj[i]){
  //               int v = edge[0];
  //               int w = edge[1];
  //               if(v == Parent[i])
  //                sum += w;
  //           }
  //       }
  //       return sum;
  //   }
// #include<bits/stdc++.h>
//     return 0;
// }
// using namespace std;

// class Graph {
// public:
//     unordered_map<int, list<pair<int, int>>> AdjList;

//     void AddEdge(int u, int v, int wt, bool dir) {
//         if(dir == 1) {
//             AdjList[u].push_back({v, wt});
//         } else {
//             AdjList[u].push_back({v, wt});
//             AdjList[v].push_back({u, wt});
//         }
//     }

//     void PrintList() {
//         for(auto src : AdjList) {
//             cout << src.first << ": {";
//             for(auto nbr : src.second) {
//                 cout << "(" << nbr.first << ", " << nbr.second << ") ";
//             }
//             cout << "}" << endl;
//         }
//     }
// };

// int GetMinIndexValue(vector<int> &Dist, vector<int> &vis) {
//     int temp = INT_MAX;
//     int index = -1; // Initialize with -1

//     for(int i = 0; i < Dist.size(); i++) {
//         if(vis[i] == false && Dist[i] < temp) {
//             temp = Dist[i];
//             index = i;
//         }
//     }
//     return index;
// }

// int spanningTree(int V, vector<vector<pair<int, int>>> &AdjList) {
//     vector<int> Dist(V, INT_MAX);
//     vector<int> vis(V, false);
//     vector<int> Parent(V, -1);

//     Dist[0] = 0;
//     while(true) {
//         int u = GetMinIndexValue(Dist, vis);
//         if(u == -1) {
//             break;
//         }
//         vis[u] = true;

//         for(auto edges: AdjList[u]) {
//             int v = edges.first;
//             int w = edges.second;
//             if(vis[v] == false && w < Dist[v]) {
//                 Dist[v] = w;
//                 Parent[v] = u;
//             }
//         }
//     }

//     int sum = 0;
//     for(int i = 0; i < Parent.size(); i++) {
//         for(auto edge : AdjList[i]) {
//             int v = edge.first;
//             int w = edge.second;
//             if(v == Parent[i])
//                sum += w;
//         }
//     }
//     return sum;
// }

// int main() {
//     Graph g;
//     g.AddEdge(0, 1, 2, 0);
//     g.AddEdge(0, 3, 6, 0);
//     g.AddEdge(1, 3, 8, 0);
//     g.AddEdge(1, 4, 5, 0);
//     g.AddEdge(1, 2, 3, 0);
//     g.AddEdge(2, 4, 7, 0);
//     g.PrintList();

//     // Minimum Spanning Tree
//     int n = 5;
//     unordered_map<int, list<pair<int, int>>> AdjList = g.AdjList;
//     vector<vector<pair<int, int>>> adjVector(n);

//     for (auto& [u, edges] : AdjList) {
//         for (auto& [v, w] : edges) {
//             adjVector[u].push_back({v, w});
//         }
//     }

//     int result = spanningTree(n, adjVector);
//     cout << "Total weight of the Minimum Spanning Tree is: " << result << endl;


#include<bits/stdc++.h>
using namespace std;

class Graph {
public:
    unordered_map<int, list<pair<int, int>>> AdjList;

    void AddEdge(int u, int v, int wt, bool dir) {
        if(dir == 1) {
            AdjList[u].push_back({v, wt});
        } else {
            AdjList[u].push_back({v, wt});
            AdjList[v].push_back({u, wt});
        }
    }

    void PrintList() {
        for(auto src : AdjList) {
            cout << src.first << ": {";
            for(auto nbr : src.second) {
                cout << "(" << nbr.first << ", " << nbr.second << ") ";
            }
            cout << "}" << endl;
        }
    }

    unordered_map<int, list<pair<int, int>>> getAdjList() {
        return AdjList;
    }
};

int GetMinIndexValue(vector<int> &Dist, vector<bool> &vis) {  // Changed vector<int> to vector<bool>
    int temp = INT_MAX;
    int index = -1; // Initialize with -1

    for(int i = 0; i < Dist.size(); i++) {
        if(!vis[i] && Dist[i] < temp) {  // Updated the condition check
            temp = Dist[i];
            index = i;
        }
    }
    return index;
}

int spanningTree(int V, unordered_map<int, list<pair<int, int>>> &AdjList) { // Adjusted the function signature
    vector<int> Dist(V, INT_MAX);
    vector<bool> vis(V, false); // Changed vector<int> to vector<bool>
    vector<int> Parent(V, -1);

    Dist[0] = 0;
    while(true) {
        int u = GetMinIndexValue(Dist, vis);
        if(u == -1) {
            break;
        }
        vis[u] = true;

        for(auto edges: AdjList[u]) {
            int v = edges.first;
            int w = edges.second;
            if(!vis[v] && w < Dist[v]) {  // Updated the condition check
                Dist[v] = w;
                Parent[v] = u;
            }
        }
    }

    int sum = 0;
    for(int i = 0; i < Parent.size(); i++) {
        for(auto edge : AdjList[i]) {
            int v = edge.first;
            int w = edge.second;
            if(v == Parent[i])
               sum += w;
        }
    }
    return sum;
}

int main() {
    Graph g;
    g.AddEdge(0, 1, 2, 0);
    g.AddEdge(0, 3, 6, 0);
    g.AddEdge(1, 3, 8, 0);
    g.AddEdge(1, 4, 5, 0);
    g.AddEdge(1, 2, 3, 0);
    g.AddEdge(2, 4, 7, 0);
    g.PrintList();
    
    int n = 5;
    unordered_map<int, list<pair<int, int>>> adjList = g.getAdjList(); // Get the adjList from the graph
    int mst_weight = spanningTree(n, adjList);
    cout << "Minimum Spanning Tree Weight: " << mst_weight << endl;
}
