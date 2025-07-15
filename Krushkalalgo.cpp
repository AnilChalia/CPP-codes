static bool Mycomp(vector<int>& a, vector<int>& b) {
    return a[2] < b[2];
}

public:
    //Function to find the parent of a node with path compression.
    int findParent(vector<int>& parent, int node) {
        if (parent[node] == node) {
            return node;
        }
        return parent[node] = findParent(parent, parent[node]);
    }

    // Function to perform union of two sets.
    void unionSet(int u, int v, vector<int>& parent, vector<int>& ranked) {
        u = findParent(parent, u);
        v = findParent(parent, v);

        if (ranked[u] < ranked[v]) {
            parent[u] = v;
        } else if (ranked[u] > ranked[v]) {
            parent[v] = u;
        } else {
            parent[v] = u;
            ranked[u]++;
        }
    }

    //Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]) {
        vector<int> parent(V);
        vector<int> ranked(V, 0);

        for (int i = 0; i < V; i++) {
            parent[i] = i;
        }

        vector<vector<int>> edges;

        for (int u = 0; u < V; u++) {
            for (auto edge : adj[u]) {
                int v = edge[0];
                int w = edge[1];
                edges.push_back({u, v, w});
            }
        }

        int ans = 0;
        sort(edges.begin(), edges.end(), Mycomp);

        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];

            if (findParent(parent, u) != findParent(parent, v)) {
                unionSet(u, v, parent, ranked);
                ans += w;
            }
        }

        return ans;
    }
