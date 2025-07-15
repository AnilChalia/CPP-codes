// MERGE K SORTED ARRAY USING MINHEAP::::::::::::::
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    int row;
    int col;

    Node(int data, int i, int j) {
        this->data = data;
        this->row = i;
        this->col = j;
    }
};

class Compare {
public:
    bool operator()(Node* a, Node* b) {
        return a->data > b->data;
    }
};

vector<int> MergeKSortedArray(int arr[][3], int n, int k, vector<int>& ans) {

    priority_queue<Node*, vector<Node*>, Compare> Minheap;

    //  push first element of k array in minheap
    for (int i = 0; i < k; i++) {
        Node* front = new Node(arr[i][0], i, 0);
        Minheap.push(front);
    }

    // top element of minheap to pop and push in vector
    while (!Minheap.empty()) {

        Node* Topele = Minheap.top();
        ans.push_back(Topele->data);
        Minheap.pop();

        //  initialize variable for next element
        int i = Topele->row;
        int j = Topele->col;

        if (j + 1 < n) {
            Node* nextElement = new Node(arr[i][j + 1], i, j + 1);
            Minheap.push(nextElement);
        }
    }
    return ans;
}

int main() {

    int arr[3][3] = { {1, 3, 7}, {4, 8, 9}, {0, 11, 10} };
    int n = 3;
    int k = 3;

    vector<int> ans;

    MergeKSortedArray(arr, n, k, ans);

    for (int i : ans) {
        cout << i << " ";
    }

    return 0;
}
