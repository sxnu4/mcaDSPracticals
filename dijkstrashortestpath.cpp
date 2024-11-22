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
    }
    void dijkstra(int src) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(V, INT_MAX);

        pq.push(make_pair(0, src));
        dist[src] = 0;

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            list<pair<int, int>>::iterator i;
            for (i = adj[u].begin(); i != adj[u].end(); ++i) {
                int v = (*i).first;
                int weight = (*i).second;

                if (dist[v] > dist[u] + weight) {
                    dist[v] = dist[u] + weight;
                    pq.push(make_pair(dist[v], v));
                }
            }
        }

        cout << "Vertex Distance from Source\n";
        for (int i = 0; i < V; ++i)
            cout << i << "\t\t" << dist[i] << "\n";
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

    int start;
    cout << "Enter the starting vertex for Dijkstra's algorithm: ";
    cin >> start;

    cout << "Dijkstra's shortest path starting from vertex " << start << ":\n";
    g.dijkstra(start);
    cout << endl;
    
    return 0;
}
