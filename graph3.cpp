#include<bits/stdc++.h>
using namespace std;
class Graph{
public:
  
  unordered_map<int,list<pair<int,int>>> adjlist;
  // add edges in graph lis
  void AddEdge(int u,int v,int wt, bool direction){
    if(direction == 1){
      adjlist[u].push_back({v,wt});
    }
    else{
      adjlist[u].push_back({v,wt});
      adjlist[v].push_back({u,wt});
    }
  }
  // printing the edge list
  void PrintList(){
    for(auto i:adjlist){
      cout << i.first <<" : { ";  // Change here
    for(auto nbr:i.second){
      cout << "{" << nbr.first << "," << nbr.second << "}, " ;
     }
      cout<< "}" << endl;
    }
  }
// TOPOLOGICAL SORT::::::: WITH DFS::::
  void topologiSort(int src,unordered_map<int,bool> &visited,stack<int> &st){
     visited[src] = true;

     for(auto nbr:adjlist[src]){
      // nbr ! visited h to fc call 
      if(!visited[nbr]){
        topologiSort(nbr,visited,st);
      }
     }
    //  vaps aate stack me push krna h jis call se vaps ja rhe h
     st.push(src);
  }
// cycle detection
  bool CycleDetect(int src,unordered_map<int,bool>&vis,unordered_map<int,int> &parent){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    parent[src] = -1;
    while(!q.empty()){
      int frontNode = q.front();
      q.pop();

      for(auto nbr:adjlist[frontNode]){
        if(!vis[nbr]){
          q.push(nbr);
          vis[nbr] = true;
          parent[nbr] = frontNode;
        }

        if(vis[nbr] == true && frontNode != parent[nbr]){
          return true;
        }
      }
    }
    return false;
  }
// TOPOLOGICAL SORT WITH BFS::::::::
  void WithbfsSort(int n,vector<int> &v){
    queue<int> q;
    unordered_map<int,int> indegree;
    // set all node indegree
    for(auto i:adjlist){
      for(auto nbr:i.second){
        indegree[nbr]++;
      }
    }
     
    // push indegree vali nodes in quueue 0 node push hogi  intial state
    for(int node=0; node<n; node++){
      if(indegree[node] == 0){
        q.push(node);
      }
    }

    // bfs
    while(!q.empty()){ 
      int frontnode = q.front();
      q.pop();
      v.push_back(frontnode);
      // ab front nnode k bache ki indegree -- krni h jb hm frontnode htate h to
      for(auto nbr:adjlist[frontnode]){
        indegree[nbr]--;

        if(indegree[nbr] == 0){
          q.push(nbr);
        }
      }
    }
  }

// SHRTEST PATH IN BFS
  void Shortestpath(int src,int dest){
    queue<int> q;
    unordered_map<int,bool> visited;
    // for trackk lie 
    unordered_map<int,int> parent;

    // intial statte
    q.push(src);
    visited[src] = true;
    parent[src] = -1;
    
    while(!q.empty()){n 
      int frontnode = q.front();
      q.pop();

      for(auto nbr:adjlist[frontnode]){
        if(!visited[nbr]){
          q.push(nbr);
          parent[nbr] = frontnode;
          visited[nbr] = true;
        }
      }
    } 
    
    // parent arrya ready 
    vector<int> ans;
    while(dest != -1){
      ans.push_back(dest);
      dest = parent[dest];
    }

    reverse(ans.begin(),ans.end());
    // printing the ans
    for(auto i:ans){
      cout << i <<" ";
    }
  }
};

int main(){
  Graph g;
  g.AddEdge(0,1,5,1);
  g.AddEdge(0,2,3,1);
  g.AddEdge(2,1,2,1);
  g.AddEdge(1,3,3,1);
  g.AddEdge(2,3,5,1);
  g.AddEdge(2,4,6,1);
  g.AddEdge(4,3,1,1);
  g.PrintList();  

  // int n = 8;
  // int src = 0; 
  // int dest = 5;
  // cout <<"printing shoretst path:" << endl;
  // g.Shortestpath(src,dest);



  // BFS
  // vector<int> v;
  // g.WithbfsSort(n,v);
  // cout << "printing the top order:" << endl;
  // for(auto i:v){
  //   cout << i << endl;
  // }

  // if(v.size() == n){
  //   cout <<" no cycle present:"<<endl;
  // }
  // else{
  //   cout <<" cycle prsentL:" << endl;
  // }



  // DFS
  // g.PrintList();
  // map<int,bool> visited;
  // stack<int> st;
  // for(int node =0; node<n; node++){
  //   if(!visited[node]){
  //     g.topologiSort(node,visited,st);
  //   }
  // }

  // cout<<"printing the top order:" << endl;
  // while(!st.empty()){
  //   cout << st.top();
  //   st.pop();
  // }

  // if(st.size() == n){
  //   cout << "no cycle present:"<< endl;
  // }
  // else{
  //   cout <<" cycle present:" << endl;
  // }

  

  unordered_map


  return 0;
}