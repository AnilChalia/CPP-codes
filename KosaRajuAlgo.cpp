#include<bits/stdc++.h>
using namespace std;

class Graph{
public:
   const int le9 = 1e9; // or a similar large value
   unordered_map<int, list<int>> adjlist;
   
   void Addedge(int u, int v, bool dir){
       if(dir == 1){
           adjlist[u].push_back(v);
       } else {
           adjlist[u].push_back(v);
           adjlist[v].push_back(u);
       }
   }

   void printList(){
       for(auto i : adjlist){
           cout << i.first << ": {";
           for(auto nbr : i.second){
               cout << nbr << " ";
           }
           cout << "}\n";
       }
   }
   
   void dfs(int node, stack<int> &s, unordered_map<int, bool> &vis){
       vis[node] = true;
       for(auto nbr : adjlist[node]){
           if(!vis[nbr]){
               dfs(nbr, s, vis);
           }
       }
       s.push(node);
   }

   void dfs2(int node, unordered_map<int, bool> &vis2, unordered_map<int, list<int>> &adjnew){
       vis2[node] = true;
       cout << node <<" ";
       for(auto nbr : adjnew[node]){
           if(!vis2[nbr]){
               dfs2(nbr, vis2, adjnew);
           }
       }
   }

   int getStronglyConnectedComponents(int n){
       // get ordering
       stack<int> ordering;
       unordered_map<int, bool> vis;
       for(int i = 0; i < n; i++){
           if(!vis[i]){
               dfs(i, ordering, vis);
           }
       }

       // reversing edges
       unordered_map<int, list<int>> adjnew;
       for(auto a : adjlist){
           for(auto b : a.second){
               int u = a.first;
               int v = b;
               adjnew[v].push_back(u);
           }
       }

       // count components
       int count = 0;
       unordered_map<int, bool> vis2;
       while(!ordering.empty()){
           int node = ordering.top();
           ordering.pop();
           if(!vis2[node]){
            cout <<"sccno:" << count+1 << endl;
               dfs2(node, vis2, adjnew);
               count++;
           }
           cout<<endl;
       }
       return count;
   }
};

int main(){
   Graph g;
   g.Addedge(0, 1, 1);
   g.Addedge(1, 2, 1);
   g.Addedge(2, 3, 1);
   g.Addedge(3, 0, 1);
   g.Addedge(2, 4, 1);
   g.Addedge(4, 5, 1);
   g.Addedge(5, 6, 1);
   g.Addedge(6, 4, 1);
   g.Addedge(6, 7, 1);
   g.printList();

   int scc = g.getStronglyConnectedComponents(8);
   cout << "Strongly Connected Components: " << scc << endl;

   return 0;
}
