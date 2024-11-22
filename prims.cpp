#include <bits/stdc++.h>
using namespace std;

class Graph {
private:
    int V; // Number of vertices
    list<pair<int, int>> *adj; // Pointer to an array containing adjacency lists

public:
    Graph(int V) {
        this->V = V;
        adj = new list<pair<int, int>>[V];
    }
    void addEdge(int v, int w, int weight) {
        adj[v].push_back(make_pair(w, weight)); // Add w to v's list with weight
        adj[w].push_back(make_pair(v, weight)); // Add v to w's list with weight (undirected graph)
    }
    void primMST() {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        int src = 0; // Starting vertex

        vector<int> key(V, INT_MAX);
        vector<int> parent(V, -1);
        vector<bool> inMST(V, false);

        pq.push(make_pair(0, src));
        key[src] = 0;

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            inMST[u] = true;

            list<pair<int, int>>::iterator i;
            for (i = adj[u].begin(); i != adj[u].end(); ++i) {
                int v = (*i).first;
                int weight = (*i).second;

                if (!inMST[v] && key[v] > weight) {
                    key[v] = weight;
                    pq.push(make_pair(key[v], v));
                    parent[v] = u;
                }
            }
        }

        cout << "Edge \tWeight\n";
        for (int i = 1; i < V; ++i)
            cout << parent[i] << " - " << i << "\t" << key[i] << "\n";
    }
};

int main() {
    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;
    
    Graph g(V);
    int E;
    cout << "Enter the number of edges: ";
    cin >> E;
    
    cout << "Enter the edges (format: vertex1 vertex2 weight):\n";
    for (int i = 0; i < E; i++) {
        int v, w, weight;
        cin >> v >> w >> weight;
        g.addEdge(v, w, weight);
    }

    cout << "Prim's Minimum Spanning Tree:\n";
    g.primMST();
    cout << endl;
    
    return 0;
}
