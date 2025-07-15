#include<bits/stdc++.h>
using namespace std;

class Graph {
public:
    unordered_map<int, list<int>> adjList;
    
    void addEdge(int u, int v, bool direction) {
        if (direction == 1) {
            adjList[u].push_back(v);
        } else {
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }
    
    void PrintList() {
        for (auto i : adjList) {
            cout << i.first << ": {";
            for (auto j : i.second) {
                cout << j << ",";
            }
            cout << "}" << endl;
        }
    }

    void TopoSort(int src, map<int, bool> &vis, stack<int> &st) {
        vis[src] = true;

        for (auto nbr : adjList[src]) {
            if (!vis[nbr]) {
                TopoSort(nbr, vis, st);
            }
        }
        st.push(src);
    }
    void TopoSortUsingBfs(int n){
      queue<int> q;
      map<int,int> indegree;
      for(auto i:adjList){
        for(auto nbr:i.second){
          indegree[nbr]++;
        }
      }     

      for(int i=0; i<n; i++){
        if(indegree[i] == 0){
          q.push(i);
        }
      }

      while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        cout<<frontNode << ", ";
        for(auto nbr:adjList[frontNode]){
          indegree[nbr]--;


          if(indegree[nbr] == 0){
            q.push(nbr);
          }
        }
      }
    }

    void ShortestPath(int src,int dest){
      queue<int> q;
      map<int,bool> vis;
      map<int,int> parent;

      vis[src] = true;
      q.push(src);
      parent[src] = -1;


      while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        for(auto nbr:adjList[frontNode]){
          if(!vis[nbr]){
            q.push(nbr);
            vis[nbr] = true;
            parent[nbr] = frontNode;
          }
        }
      }


      vector<int> ans;
      while(dest != -1){
        ans.push_back(dest);
        dest = parent[dest];
      }

      reverse(ans.begin(),ans.end());
      for(auto i:ans){
        cout<<i<<" ";
      }
    }
};

int main() {
    Graph g;
    
    g.addEdge(0, 4, 0);
    g.addEdge(0, 3, 0);
    g.addEdge(0, 6, 0);
    g.addEdge(1, 5, 0);
    g.addEdge(3, 5, 0);
    g.addEdge(6, 2, 0);
    g.addEdge(2, 5, 0);
    // g.addEdge(5, 7, 1);
    // g.addEdge(6, 7, 1);
    
    // int n = 8;
    
    // g.PrintList();

    // Topological sort
    // stack<int> st;
    // map<int, bool> vis;
    // for (int i = 0; i < n; i++) {
    //     if (!vis[i]) {
    //         g.TopoSort(i, vis, st);
    //     }
    // }

    // cout << "Printing the topological sort:" << endl;
    // g.TopoSortUsingBfs(n);
    // while (!st.empty()) {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    cout << "shortest path :" << endl;
    int src = 0;
    int dest = 5;
    g.ShortestPath(src,dest);
    
    return 0;
}
