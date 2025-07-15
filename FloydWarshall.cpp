#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    unordered_map<int, list<pair<int, int>>> adjList;

    void AddEdge(int u, int v, int wt, bool Direction) {
        if (Direction) {
            adjList[u].push_back({v, wt});
        } else {
            adjList[u].push_back({v, wt});
            adjList[v].push_back({u, wt});
        }
    }

    void PrintAdjList() {
        for (auto i : adjList) {
            cout << i.first << " -> ";
            for (auto j : i.second) {
                cout << "{" << j.first << "," << j.second << "} ";
            }
            cout << endl;
        }
    }   

    void FloydWarshall(int n) {
        vector<vector<int>> dist(n, vector<int>(n, 1e9));
        // Initialize diagonal to 0
        for (int i = 0; i < n; i++) {
            dist[i][i] = 0;
        }
        // Update dist array based on adjacency list
        for (auto a : adjList) {
            for (auto b : a.second) {
                int u = a.first;
                int v = b.first;
                int wt = b.second;
                dist[u][v] = wt;
            }
        }

        // Floyd-Warshall Algorithm
        for (int h = 0; h < n; h++) {
            for (int src = 0; src < n; src++) {
                for (int dest = 0; dest < n; dest++) {
                    dist[src][dest] = min(dist[src][dest], dist[src][h] + dist[h][dest]);
                }
            }
        }

        // Print the distance matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << (dist[i][j] == 1e9 ? "INF" : to_string(dist[i][j])) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g;
    g.AddEdge(0, 1, 3, true);
    g.AddEdge(1, 0, 2, true);
    g.AddEdge(0, 3, 5, true);
    g.AddEdge(1, 3, 4, true);
    g.AddEdge(3, 2, 2, true);
    g.AddEdge(2, 1, 1, true);
    // g.PrintAdjList();
    g.FloydWarshall(4);

    return 0;
}
