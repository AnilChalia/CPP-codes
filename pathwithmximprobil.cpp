class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        unordered_map<int, vector<pair<int, double>>> adj;
        vector<double> ans(n, 0.0);

        // Create adjacency list
        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            double prob = succProb[i];
            adj[u].push_back({v, prob});
            adj[v].push_back({u, prob});
        }

        // Max-heap (priority queue) to store {probability, node}
        priority_queue<pair<double, int>> maxheap;

        // Start node probability is assumed to be 1.0
        ans[start_node] = 1.0;
        maxheap.push({1.0, start_node});

        while(!maxheap.empty()) {
            int currnode = maxheap.top().second;
            double currpro = maxheap.top().first;
            maxheap.pop();

            for(auto &temp : adj[currnode]) {
                int adjnode = temp.first;
                double adjprob = temp.second;

                if(ans[adjnode] < currpro * adjprob) {
                    ans[adjnode] = currpro * adjprob;
                    maxheap.push({ans[adjnode], adjnode});
                }
            }
        }
        return ans[end_node];
    }
};
