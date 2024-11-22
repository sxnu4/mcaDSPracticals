#include <bits/stdc++.h>
using namespace std;

class Graph {
private:
    int V; // Number of vertices
    list<int> *adj; // Pointer to an array containing adjacency lists
public:
    Graph(int V) {
        this->V = V;
        adj = new list<int>[V];
    }
    void addEdge(int v, int w) {
        adj[v].push_back(w); // Add w to v's list
    }
    void BFS(int s) {
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++)
            visited[i] = false;
        
        list<int> queue;
        visited[s] = true;
        queue.push_back(s);
        
        list<int>::iterator i;
        
        while (!queue.empty()) {
            s = queue.front();
            cout << s << " ";
            queue.pop_front();
            
            for (i = adj[s].begin(); i != adj[s].end(); ++i) {
                if (!visited[*i]) {
                    visited[*i] = true;
                    queue.push_back(*i);
                }
            }
        }
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
    cout << "Enter the starting vertex for BFS: ";
    cin >> start;

    cout << "Breadth-First Search starting from vertex " << start << ": ";
    g.BFS(start);
    cout << endl;
    
    return 0;
}
