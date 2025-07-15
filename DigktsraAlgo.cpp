#include <iostream>
#include <vector>
#include <set>
#include <climits>

using namespace std;

// Assuming adjlist is a vector of vectors representing the adjacency list
vector<vector<pair<int, int>>> adjlist;

// Dijkstra's Algorithm
void DijkstraAlgo(int n, int src, int dest) {
    vector<int> dist(n, INT_MAX);
    set<pair<int, int>> st;

    // Initial state maintenance
    st.insert({0, src});
    dist[src] = 0;

    // Distance update
    while (!st.empty()) {
        auto topEle = st.begin();
        // Iterative address of element
        pair<int, int> topPair = *topEle;
        // Node extraction
        int topNode = topPair.second;

        // Remove from set
        st.erase(st.begin());

        // Update neighbor distances
        for (pair<int, int> nbr : adjlist[topNode]) {
            int nbrNode = nbr.first;
            int nbrDist = nbr.second;

            // Relaxation step
            if (dist[topNode] + nbrDist < dist[nbrNode]) {
                // Update distance if a shorter path is found
                st.erase({dist[nbrNode], nbrNode});
                dist[nbrNode] = dist[topNode] + nbrDist;
                st.insert({dist[nbrNode], nbrNode});
            }
        }
    }

    // Print the distances or perform further actions based on your requirements
    cout << "Shortest distance from source to destination: " << dist[dest] << endl;
}

int main() {
    // Example usage
    // Assuming 'n' is the number of nodes in the graph, 'src' is the source node, and 'dest' is the destination node
    int n = 6;
    int src = 0;
    int dest = 5;

    // Assuming 'adjlist' is the adjacency list of the graph
    adjlist = {
        {{1, 2}, {2, 4}},
        {{0, 2}, {2, 1}, {3, 7}},
        {{0, 4}, {1, 1}, {3, 3}, {4, 5}},
        {{1, 7}, {2, 3}, {4, 2}},
        {{2, 5}, {3, 2}, {5, 1}},
        {{4, 1}}
    };

    DijkstraAlgo(n, src, dest);

    return 0;
}
