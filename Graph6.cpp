#include<bits/stdc++.h>
using namespace std;
class Graph{
public:
   unordered_map<int,list<int>> adjList;
   void AddEdge(int u,int v,bool direction){
    if(direction == 1){
      adjList[u].push_back(v);
    }else{
      adjList[u].push_back(v);
      adjList[v].push_back(u);
    }
   }

   void PrintGraph(){
    for(auto i:adjList){
      cout <<i.first <<"-> {";
      for(auto nbr:i.second){
        cout << nbr << ",";
      }
      cout <<"}" <<endl;
    }
   }

   void TopologicalSort(int src,unordered_map<int,bool> &vis,stack<int> &st){
    vis[src] = true;
    for(auto node:adjList[src]){
      if(!vis[node]){
        TopologicalSort(node,vis,st);
      }
    }
    st.push(src);
   }

   void toposortusingbfs(int n,vector<int> &v){
    queue<int> q;
    unordered_map<int,int> indegree;

    for(auto i:adjList){
     for(auto nbr:i.second){
     indegree[nbr]++;
    }
   }

   for(int node = 0; node<n; node++){
    if(indegree[node] == 0){
      q.push(node);
    }
   }

   while(!q.empty()){
    int frontnode = q.front();
    q.pop();

    v.push_back(frontnode);
    for(auto nbr:adjList[frontnode]){
      indegree[nbr]--;

      if(indegree[nbr] == 0){
        q.push(nbr);
      }
    }
   }
  }

  void ShortestPath(int src,int dest){
    queue<int> q;
    unordered_map<int,bool>vis;
    unordered_map<int,int> parent;
    q.push(src);
    vis[src] = true;
    parent[src] = -1;

    while(!q.empty()){
      int frontnode = q.front();
      q.pop();

      for(auto nbr:adjList[frontnode]){
        if(!vis[nbr]){
          q.push(nbr);
          vis[nbr] = true;
          parent[nbr] = frontnode;
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
      cout<< i << " ";
    }
  }
};
int main(){
  Graph g;
  g.AddEdge(0,4,0);
  g.AddEdge(0,3,0);
  g.AddEdge(0,6,0);
  g.AddEdge(4,1,0);
  g.AddEdge(1,5,0);
  g.AddEdge(3,5,0);
  g.AddEdge(6,2,0);
  g.AddEdge(2,5,0);
  // g.PrintGraph();

  int src = 0;
  int dest = 5;
  g.ShortestPath(src,dest);
  




  // unordered_map<int,bool> vis;
  // stack<int> st;
  // int n = 8;
  // for(int node = 0; node <n; node++){
  //   if(!vis[node]){
  //     g.TopologicalSort(node,vis,st);
  //   }
  // }

  // while(!st.empty()){
  //   cout<<st.top() << " ";
  //   st.pop();
  // }
  //  vector<int> v;
  //  g.toposortusingbfs(n,v);
  //  for(int i=0; i<v.size(); i++){
  //   cout << v[i] <<" ";
  //  }
  //  cout<<endl;



  return 0;
}