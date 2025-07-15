#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    unordered_map<int, list<pair<int, int>>> adjlist;

    void addEdge(int u, int v, int wt, bool direction) {
        if (direction == 1) {
            adjlist[u].push_back({v, wt});
        } else {
            adjlist[u].push_back({v, wt});
            adjlist[v].push_back({u, wt});
        }
    }

    void PrintList() {
        for (auto i : adjlist) {
            cout << i.first << " -> {";
            for (auto nbr : i.second) {
                cout << "{" << nbr.first << "," << nbr.second << "} ";
            }
            cout << "}" << endl;
        }
    }

    void Dijkstra(int n, int src, int dest) {
        vector<int> Dist(n + 1, INT_MAX);  // Distance vector initialized to infinity
        set<pair<int, int>> st;  // Min-heap set to store {distance, node} pairs

        // Initial state: starting from src node
        st.insert({0, src});
        Dist[src] = 0;

        while (!st.empty()) {
            // Get the node with the smallest distance
            auto topEle = st.begin();
            pair<int, int> topPair = *topEle;
            int topDist = topPair.first;
            int topNode = topPair.second;

            st.erase(topEle);  // Remove the processed node

            // Traverse neighbors of the topNode
            for (pair<int, int> nbrPair : adjlist[topNode]) {
                int nbrNode = nbrPair.first;
                int edgeWeight = nbrPair.second;

                // Check if a shorter path to nbrNode exists
                if (topDist + edgeWeight < Dist[nbrNode]) {
                    // Update the distance and insert new distance to set
                    st.erase({Dist[nbrNode], nbrNode});  // Remove old pair if it exists
                    Dist[nbrNode] = topDist + edgeWeight;
                    st.insert({Dist[nbrNode], nbrNode});
                }
            }
        }

        // Output the distance to the destination node
        if (Dist[dest] == INT_MAX) {
            // Destination is unreachable
            cout << "Destination unreachable" << endl;
        } else {
            cout << "Shortest path from " << src << " to " << dest << " is " << Dist[dest] << endl;
        }
    }
};

int main() {
    Graph g;
    g.addEdge(6, 5, 9, 0);
    g.addEdge(6, 3, 2, 0);
    g.addEdge(6, 1, 11, 0);
    g.addEdge(5, 4, 8, 0);
    g.addEdge(3, 4, 11, 0);
    g.addEdge(3, 2, 10, 0);
    g.addEdge(4, 2, 15, 0);
    g.addEdge(3, 1, 9, 0);
    g.addEdge(1, 2, 7, 0);
    g.PrintList();

    int n = 7;  // Number of nodes (considering 1-based indexing here)
    int src = 6;
    int dest = 4;
    g.Dijkstra(n, src, dest);

    return 0;
}
