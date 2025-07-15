class Solution{
public:
  bool CheckCycle(int src,unordered_map<int,bool> &vis,unordered_map<int,bool> &dfstrac,vector<int> adj[]){
    vis[src] = true;
    dfstrac[src] = true;

    for(auto nbr:adj[src]){
      if(!vis[nbr]){
        bool ans = CheckCycle(nbr,vis,dfstrac,adj);
        if(ans == true){
          return true;
        }
      }

      if(vis[nbr] == true && dfstrac[nbr] == true){
        return true;
      }
    }
  }
  bool IsCycle(int V,vector<int> adj[]){
    unordered_map<int,bool> vis;
    unordered_map<int,bool> dfsTrack;

    for(int i=0; i<V; i++){
      if(!vis[i]){
        bool ans = CheckCycle(i,vis,dfstrack,adj);
        if(ans){
          return true;
        }
      }
    }
    return false;
  }

};