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
  void Print(){
    for(auto i:adjlist){
      cout << i.first <<" : { ";  // Change here
    for(auto nbr:i.second){
      cout << "{" << nbr.first << "," << nbr.second << "}, " ;
     }
      cout<< "}" << endl;
    }
  }
  void ToPoSrt(int src,unordered_map<int,bool> &vis,stack<int> &st){
    vis[src] = true;

    for(auto nbr:adjlist[src]){
      if(!vis[nbr]){
        ToPoSrt(nbr,vis,st);
      }
    }
    st.push(src);
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
  g.Print(); 
  
  unordered_map<int,bool> vis;
  stack<int> st;
  int src = 0;
  g.ToPoSrt(src,vis,st);
  while(!st.empty()){
    st.pop();
    cout << st.top();
  }



  return 0;
}