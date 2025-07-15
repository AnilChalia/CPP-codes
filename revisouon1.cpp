#include<bits/stdc++.h>
using namespace std;
class Graph{
public:
   unordered_map<int,list<pair<int,int>> >adjList;

   void AddEdge(int u,int v,int wt,bool direction){
    if(direction == 1) {
      adjList[u].push_back({v,wt});
    }else{
      adjList[u].push_back({v,wt});
      adjList[v].push_back({u,wt});
    }
   }

   void Printedge(){
    for(auto i:adjList){
      cout << i.first << " :{";
      for(auto j:i.second){
        cout << "{" << j.first << ',' <<  j.second << "},";
      }
      cout<< "}"<<endl;
    }
   }

   void topologicalorder(int src,stack<int>& st,unordered_map<int,bool> &vis){
    vis[src] = true;
    for(auto Nbrpair:adjList[src]){
      int nbrNode = Nbrpair.first;
      // int nbrDist = Nbrpair.second;
      if(!vis[nbrNode]){
        topologicalorder(nbrNode,st,vis);
      }
    }
       st.push(src);
   }
   
   void ShortestpathDfs(stack<int> &st, int n) {
    vector<int> dist(n, INT_MAX);
    int src = st.top();  // src is defined here
    st.pop();
    dist[src] = 0;

    // update neighbor
    for (auto nbrPair : adjList[src]) {  // Error: adjList is not declared or passed as an argument
        int nbrNode = nbrPair.first;
        int nbrDist = nbrPair.second;
        if (dist[src] + nbrDist < dist[nbrNode]) {
            dist[nbrNode] = dist[src] + nbrDist;
        }
    }

    // apply remaining nodes
    while (!st.empty()) {
        int src = st.top();  // Error: src is redefined here
        st.pop();
        for (auto nbrPair : adjList[src]) {  // Error: adjList is not declared or passed as an argument
            int nbrNode = nbrPair.first;
            int nbrDist = nbrPair.second;
            if (dist[src] + nbrDist < dist[nbrNode]) {
                dist[nbrNode] = dist[src] + nbrDist;
            }
        }
    }

    // dist array ready
    cout << "printing the dist array:" << endl;
    for (auto i : dist) {
        cout << i << " ";
    }
  }


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
        for (pair<int, int> nbr : adjList[topNode]) {
            int nbrnode = nbr.first;
            int nbrdist = nbr.second;

            if (topdist + nbrdist < dist[nbrnode]) {

                auto PreviousEntry = st.find({ dist[nbrnode], nbrnode });
                if (PreviousEntry != st.end()) {
                    st.erase(PreviousEntry);
                }

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

  g.Printedge();

  // topological sort:::::::::::::::::::::::::::
  int src = 6;
  // stack<int> st;
  // unordered_map<int,bool> vis;
  // g.topologicalorder(src,st,vis);
  // cout << "printing topologiacla order: "<< endl;
  // while(!st.empty()){
  //   cout << st.top() << " ";
  //   st.pop();
  // }

  // shortestpathusingDFS()::::::::::::::::::::::
  int n = 9;
  // cout << "printing The Single source Distance path:" << endl;
  // g.ShortestpathDfs(st,n);

  // int dest = 4;
  g.DigkstraAlgo(n,6,4);




  return 0;
}