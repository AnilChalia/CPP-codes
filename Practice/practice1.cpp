#include<bits/stdc++.h>
using namespace std;
// class Graph{
//   public:
//     // unweighted graph
//     unordered_map<int, list<int> > adjList;
//     void addEdge(int u, int v, bool direction) {
//       //direction -> 0 -> undirected
//       //direction -> 1 -> directed
//       if(direction == 1) {
//         adjList[u].push_back(v);
//       }
//       else {
//         adjList[u].push_back(v);
//         adjList[v].push_back(u);
//       }
//     }
//     void printAdjList() {
//       for(auto i: adjList) {
//         cout << i.first << "-> {";
//         for(auto neighbour: i.second) {
//           cout << neighbour <<", ";
//         }
//         cout << "}" << endl;
//       }
//     }
// };

class Graph{
  public:
  unordered_map<int,list<pair<int,int>> >adjlist;
  void addEdge(int u,int v,int w,bool direction){
    if(direction == 1){
    adjlist[u].push_back({v,w});
    }else{
      adjlist[u].push_back({v,w});
      adjlist[v].push_back({u,w});
    }
  }

  void printlist(){
    for(auto i:adjlist){
      cout<<i.first <<" {";
      for(pair<int,int> nbr:i.second){
        cout<<"{"<<nbr.first<<","<<nbr.second<<"}";
      }
      cout<<"}"<<endl;
    }
  }

  void bfs(int src,unordered_map<int,bool>&vis){
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty()){
      int frontnode = q.front();
      q.pop();

      for(auto nbr:adjlist[frontnode]){
        int nbrd = nbr.first;

        if(!vis[nbrd]){
          q.push(nbrd);
          vis[nbrd];
        }
      }
    }
  }

 bool checkCycle(int src) {
      queue<int> q;
      unordered_map<int,bool> vis;
      unordered_map<int,int> parent;

      // intial state
      q.push(src);
      vis[src] = true;
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
          // nhi vala case
          else if(vis[nbr] == true && nbr  != parent[frontNode]){
            // cycle present
            return true;
          }
        }
      }
    // ycle not prsent
    return false;
 } 
};  

int main(){
  Graph g;
  g.addEdge(0,1,2,1);
  g.addEdge(1,2,5,1);
  g.addEdge(2,3,6,1);
  g.addEdge(3,4,9,1);
  g.addEdge(3,6,9,1);

  cout<<"printing the edge list:" << endl;
  g.printlist();

  // // unordered_map<int,bool>vis;
  // int src = 0;
  // // g.bfs(src,vis);
  // // g.printlist();

  // bool ans = g.checkCycle(src);
  // if(ans == true){
  //   cout <<"cycle is present :" << endl;
  // }
  // else{
  //   cout<<"cycle is absent:" << endl;
  // }







  return 0;
}