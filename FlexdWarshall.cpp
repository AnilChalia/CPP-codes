#include<bits/stdc++.h>
using namespace std;
class Graph{
public:
   const int le9 = 1e9; // or a similar large value
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

   void Flexdwarshall(int n){
    // intial state
    vector<vector<int>> Dist(n,vector<int>(n,le9));
    // diagnol pr 0 intial state 
    for(int i=0; i<n; i++){
      Dist[i][i] = 0;
    }
    // dupdate distance arr acoordaly
    for(auto a:adjlist){
      for(auto b:a.second){
        int u = a.first;
        int v = b.first;
        int wt = b.second;
        Dist[u][v] = wt;
      }
    }
    // healper lopp
    for(int helper =0; helper<n; helper++){
      for(int src=0; src<n; src++){
        for(int dest=0; dest<n; dest++){
          Dist[src][dest] = min(Dist[src][dest],Dist[src][helper]+Dist[helper][dest]);
        }
      }
    } 

    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        cout << Dist[i][j]<<" ";
      }cout<<endl;
    }
   }
};
int main(){
 Graph g;
 g.Addedge(0,1,3,1);
 g.Addedge(1,0,2,1);
 g.Addedge(1,3,4,1);
 g.Addedge(0,3,5,1);
 g.Addedge(3,2,2,1);
 g.Addedge(2,1,1,1);
 g.printList();

 g.Flexdwarshall(4);









  return 0;
}