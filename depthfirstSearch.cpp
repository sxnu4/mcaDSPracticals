#include <bits/stdc++.h>
using namespace std;

class Graph {
private:
    int V; // Number of vertices
    list<int> *adj; // Pointer to an array containing adjacency lists

    void DFSUtil(int v, bool visited[]) {
        visited[v] = true;
        cout << v << " ";

        list<int>::iterator i;
        for (i = adj[v].begin(); i != adj[v].end(); ++i)
            if (!visited[*i])
                DFSUtil(*i, visited);
    }
public:
    Graph(int V) {
        this->V = V;
        adj = new list<int>[V];
    }
    void addEdge(int v, int w) {
        adj[v].push_back(w); // Add w to v's list
    }
    void DFS(int v) {
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++)
            visited[i] = false;
        
        DFSUtil(v, visited);
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
    
    cout << "Enter the edges (format: vertex1 vertex2):\n";
    for (int i = 0; i < E; i++) {
        int v, w;
        cin >> v >> w;
        g.addEdge(v, w);
    }

    int start;
    cout << "Enter the starting vertex for DFS: ";
    cin >> start;

    cout << "Depth-First Search starting from vertex " << start << ": ";
    g.DFS(start);
    cout << endl;
    
    return 0;
}
