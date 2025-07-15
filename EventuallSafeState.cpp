class Solution {
public:
    bool checkCycledetect(vector<int> adj[], int src, unordered_map<int, bool>& vis, unordered_map<int, bool>& dfsvis, int safe[]) {
        vis[src] = true;
        dfsvis[src] = true;
        safe[src] = 0;  // Mark as not safe initially

        for (auto& nbr : adj[src]) {
            if (!vis[nbr]) {
                bool nextAns = checkCycledetect(adj, nbr, vis, dfsvis, safe);
                if (nextAns) {
                    return true;
                }
            } else if (dfsvis[nbr] == true) {
                // Cycle detected
                return true;
            }
        }

        dfsvis[src] = false;
        safe[src] = 1;  // Mark as safe non cycle path me safe node
        return false;
    }

    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<int> ans;
        unordered_map<int, bool> vis, dfsvis;
        int Safe[V];
        fill(Safe, Safe + V, -1); // Initialize all nodes as unvisited

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                checkCycledetect(adj, i, vis, dfsvis, Safe);
            }
        }

        for (int i = 0; i < V; i++) {
            if (Safe[i] == 1) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
