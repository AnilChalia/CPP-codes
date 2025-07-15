#include<bits/stdc++.h>
using namespace std;
class Graph{
public:
   unordered_map<char,list<pair<char,int>>> adjlist;
   void Addedge(char u,char v,int wt,bool dir){
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
   void BellmanFord(int n,char src){
    // distance arr
    vector<int> Dist(n,INT_MAX);
    Dist[src-'A'] = 0;
    // n-1 time relaxation
    for(int i=1; i<n; i++){
      // travesla on entire edge list
      for(auto a:adjlist){
          for(auto b:a.second){
            char u = a.first;
            char v = b.first;
            int dist = b.second;

            if(Dist[u-'A'] != INT_MAX && Dist[u-'A'] + dist < Dist[v-'A']){
              Dist[v-'A'] = Dist[u-'A'] + dist;
            }
          }
      }
    }
    // -ve cycle k liye ek bar realtixation
    bool updation = false;
      for(auto a:adjlist){
          for(auto b:a.second){
            char u = a.first;
            char v = b.first;
            int dist = b.second;
            if(Dist[u-'A'] != INT_MAX && Dist[u-'A'] + dist < Dist[v-'A']){
              updation =true;
              break;
              Dist[v-'A'] = Dist[u-'A'] + dist;
            }
      }
   }

   if(updation == true){
    cout<<"ccylce is present:" << endl;
   }else{
    cout <<"no cycle:" << endl;

    for(auto i:Dist){
      cout<< i << " ";
    }
    cout << endl;
   }
  }
};
int main(){
 Graph g;
 g.Addedge('A','B',-1,1);
 g.Addedge('B','E',2,1);
 g.Addedge('E','D',-3,1);
 g.Addedge('D','C',5,1);
 g.Addedge('A','C',4,1);
 g.Addedge('B','C',3,1);
 g.Addedge('B','D',2,1);
 g.Addedge('D','B',1,1);
//  g.printList();

 g.BellmanFord(5,'A');
 


  return 0;
}