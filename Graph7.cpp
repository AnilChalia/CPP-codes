#include<bits/stdc++.h>
using namespace std;
class Graph{
public:
   unordered_map<int,list<pair<int,int>>> adjlist;
   void Addedge(int u,int v,int wt,bool dir){
       if(dir == 1){
        adjlist[u].push_back({v,wt});
       }else{
        adjlist[u].push_back({v,wt});
        adjlist[v].push_back({u,wt});
       }
   }

   void printList(){
     for(auto i:adjlist){
      cout  <<i.first << ": {";
      for(auto nbr:i.second){
        cout <<"{"<< nbr.first <<","<< nbr.second <<"}";
      }
      cout << endl;
     }
   }

   void TopoSort(int src,stack<int> &st,unordered_map<int,bool> &vis){
    vis[src] = true;
    for(auto nbrpair:adjlist[src]){
      int nbrNode = nbrpair.first;
      // int nbrWt = nbr.second;
      if(!vis[nbrNode]){
        TopoSort(nbrNode,st,vis);
      }
    }
    st.push(src);
   }
   
   void ShotestDG(stack<int> &topSort,int n){
    vector<int> dist(n,INT_MAX);
    // src topological sort a top
    int src = topSort.top();
    dist[src] = 0;
    topSort.pop();

    // update nbr disacne with src node
    for(auto nbrPair:adjlist[src]){
      int nbrNode = nbrPair.first;
      int nbrDist = nbrPair.second;
      if(dist[src] + nbrDist < dist[nbrNode]){
        dist[nbrNode] = dist[src] + nbrDist;
      }
    }

    while(!topSort.empty()){
      int src = topSort.top();
      topSort.pop();
    for(auto nbrPair:adjlist[src]){
      int nbrNode = nbrPair.first;
      int nbrDist = nbrPair.second;
      if(dist[src] + nbrDist < dist[nbrNode]){
        dist[nbrNode] = dist[src] + nbrDist;
      }
    }
  }
   for(auto i:dist){
     cout << i << " ";
    }
 }

  // Digjkstra algorithm geedy algo
void Dijkstra(int n, int src, int dest) {
    vector<int> dist(n + 1, INT_MAX);  // Distance vector initialized to max int value
    set<pair<int, int>> st;  // A set to store (distance, node) pairs

    // Initial state
    st.insert({0, src});
    dist[src] = 0;

    // Distance updation
    while (!st.empty()) {
        // Extract the top element from the set
        auto topele = st.begin();
        pair<int, int> topair = *topele;
        int topDist = topair.first;
        int topNode = topair.second;
        st.erase(st.begin());

        // Traverse all neighbors of the current node
        for (pair<int, int> nbrPair : adjlist[topNode]) {
            int nbrDist = nbrPair.second;  // Distance to the neighbor
            int nbrNode = nbrPair.first;   // Neighbor node

            if (topDist + nbrDist < dist[nbrNode]) {
                // Update the set if a shorter distance is found
                auto prev = st.find({dist[nbrNode], nbrNode});
                if (prev != st.end()) {
                    st.erase(prev);
                }

                // New entry in the set
                dist[nbrNode] = topDist + nbrDist;
                st.insert({dist[nbrNode], nbrNode});
            }
        }
    }

    // Print the distance from source to destination
    cout << "Distance from node " << src << " to node " << dest << " is: " << dist[dest] << endl;
}


};
int main(){
  Graph g;
  g.Addedge(6,5,9,0);
  g.Addedge(6,3,2,0);
  g.Addedge(6,1,14,0);
  g.Addedge(1,3,9,0);
  g.Addedge(3,4,11,0);
  g.Addedge(5,4,6,0);
  g.Addedge(1,2,7,0);
  g.Addedge(3,2,10,0);
  g.Addedge(2,4,15,0);
  g.printList();

  // unordered_map<int,bool> vis;
  // stack<int> st;
  // int src = 0;
  // g.TopoSort(src,st,vis);

  // while(!st.empty()){
  //   cout<< st.top() << " ";
  //   st.pop();
  // }

  // int n = 5;
  // // g.ShotestDG(st,n);
  // g.Digjkstra(n,6,6);

  int n = 6;
  int src = 6;
  int dest = 4;
  g.Dijkstra(n,src,dest);


  




  return 0;
}