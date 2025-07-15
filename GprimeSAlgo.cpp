	int FindMinOfValue(vector<int> &list,vector<int> &visited){
	    int Min = INT_MAX;
	    int MinIndex = -1;
	    
	    for(int i=0; i<list.size(); i++) {
	        if(list[i] < Min && visited[i] == false ){
	            Min = list[i];
	            MinIndex = i;
	        }
	    }
	    return MinIndex;
	}
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // PRIME'S ALGO
        vector<int> list(V,INT_MAX);
        vector<int> visited(V,false);
        vector<int> parent(V,-1);
        
        list[0] = 0;
        while(true){
            int u = FindMinOfValue(list,visited);
            if(u == -1) break;
            visited[u] = true;
            
            for(auto edge:adj[u]){
                int v = edge[0];
                int w = edge[1];
                if(visited[v] == false && w < list[v]){
                    list[v] = w;
                    parent[v] = u;
                }
            }
        }
        
        int sum = 0;
        for(int i=0; i<parent.size(); i++) {
            for(auto edge:adj[i]){
                int v = edge[0];
                int w = edge[1];
                if(v == parent[i])
                    sum += w;
            }
        }
        return sum;
    }