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
      int nbrNode = nbr.first;
      // int nbrDist = nbr.second;
      // nbr ! visited h to fc call 
      if(!visited[nbrNode]){
        topologiSort(nbrNode,visited,st);
      }
     }
    //  vaps aate stack me push krna h jis call se vaps ja rhe h
     st.push(src);
  }

  // shortest pathn in dg with dfs
  void ShortestPathDFS(stack<int> &st,int n){
    vector<int> dist(n,INT_MAX);
    // intially src node independed node
    int src = st.top();
    st.pop();
    dist[src] = 0;

    // update nbr distance for src node
    for(auto nbr:adjlist[src]){
      int nbrNode = nbr.first;
      int nbrDist = nbr.second;
      if(dist[src] + nbrDist < dist[nbrNode]){
        dist[nbrNode] = dist[src] + nbrDist;
      }
    }
  //  uplying the same above concept n stack
    while(!st.empty()){
      int src = st.top();
      st.pop();
    for(auto nbr:adjlist[src]){
      int nbrNode = nbr.first;
      int nbrDist = nbr.second;
      if(dist[src] + nbrDist < dist[nbrNode]){
        dist[nbrNode] = dist[src] + nbrDist;
      }

    }
  }
    // ba mera distnace arrr is tyar h
    cout <<"printing the distance arr:" << endl;
    for(auto i:dist){
       cout << i << " " ;
    }
  }
  
  // Digkstra Algo
void DigkstraAlgo(int n, int src, int dest) {
    vector<int> dist(n, INT_MAX);
    set<pair<int, int>> st;

    // initial start maintenance
    st.insert({0, src});
    dist[src] = 0;

    // distance update
    while (!st.empty()) {
        auto topEle = st.begin();
        // iterative address of element, dereference to get the element
        pair<int, int> toppair = *topEle;
        // node extracted
        int topdist = toppair.first;
        int topNode = toppair.second;
        // remove from set
        st.erase(st.begin());

        // update neighbor distances
        for (pair<int, int> nbr : adjlist[topNode]) {
            int nbrnode = nbr.first;
            int nbrdist = nbr.second;

            if (topdist + nbrdist < dist[nbrnode]) {
                // prev entry remove 
                auto PreviousEntry = st.find({ dist[nbrnode], nbrnode });
                if (PreviousEntry != st.end()) {
                    st.erase(PreviousEntry);
                }
                
                // new entry push in set
                dist[nbrnode] = topdist + nbrdist;
                st.insert({ dist[nbrnode], nbrnode });
            }
        }
    }
    cout << "Shortest distance from :" << src << " node to:" << dest << " node:" << dist[dest] << endl;
}

};
int main(){
  Graph g;
  g.AddEdge(1,6,14,0);
  g.AddEdge(1,3,9,0);
  g.AddEdge(1,2,7,0);
  g.AddEdge(2,3,10,0);
  g.AddEdge(2,4,15,0);
  g.AddEdge(3,4,11,0);
  g.AddEdge(6,3,2,0);
  g.AddEdge(6,5,9,0);
  g.AddEdge(5,4,6,0);
  g.PrintList();  
  
  // int src = 0;
  // stack<int> st;
  // unordered_map<int,bool> visited;
  // g.topologiSort(src,visited,st);

  // cout << "printing topo order:" << endl;
  // while(!st.empty()){
  //   cout << st.top() << " ";
  //   st.pop();
  // }
  
  int n = 9;
  // g.ShortestPathDFS(st,n);
  g.DigkstraAlgo(n,6,4);




  return 0;

}