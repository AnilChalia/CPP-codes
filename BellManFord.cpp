#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    unordered_map<char, list<pair<char, int>>> adjList;

    void AddEdge(char u, char v, int wt, bool Direction) {
        if (Direction == 1) {
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

    void BellmanFord(int n, char src) {
        unordered_map<char, int> dist;
        for (auto node : adjList) {
            dist[node.first] = INT_MAX;
        }
        dist[src] = 0;

        // n-1 relaxations
        for (int i = 1; i < n; i++) {
            for (auto a : adjList) {
                for (auto b : a.second) {
                    char u = a.first;
                    char v = b.first;
                    int wt = b.second;

                    if (dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
                        dist[v] = dist[u] + wt;
                    }
                }
            }
        }

        // Check for negative weight cycle
        bool negativeCycle = false;
        for (auto a : adjList) {
            for (auto b : a.second) {
                char u = a.first;
                char v = b.first;
                int wt = b.second;

                if (dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
                    negativeCycle = true;
                }
            }
        }

        if (negativeCycle) {
            cout << "Negative weight cycle detected!" << endl;
        } else {
            cout << "Shortest distances from source " << src << ":" << endl;
            for (auto d : dist) {
                if (d.second == INT_MAX) {
                    cout << d.first << " -> Infinity" << endl;
                } else {
                    cout << d.first << " -> " << d.second << endl;
                }
            }
        }
    }



    
};

int main() {
    Graph g;
    g.AddEdge('A', 'B', -1, 1);
    g.AddEdge('A', 'E', 4, 1);
    g.AddEdge('B', 'C', 2, 1);
    g.AddEdge('C', 'D', -3, 1);
    g.AddEdge('D', 'E', 5, 1);
    g.AddEdge('B', 'E', 3, 1);
    g.AddEdge('D', 'B', 1, 1);
    g.AddEdge('B', 'D', 2, 1);

    g.BellmanFord(5, 'A');
    return 0;
}
