#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Graph {
public:
  Graph(int vertices) : V(vertices) {
    // Initialize the adjacency list with an empty vector for each vertex
    adjList.resize(V);
  }

  // Add an edge to the graph
  void addEdge(int u, int v) {
    adjList[u].push_back(v);
    adjList[v].push_back(u); // For undirected graph
  }

  // Depth-First Search traversal from a given vertex
  void DFS(int startVertex) {
    vector<bool> visited(V, false); // Mark all vertices as not visited
    stack<int> stack;               // Create a stack for DFS

    // Push the start vertex onto the stack and mark it as visited
    stack.push(startVertex);
    visited[startVertex] = true;

    while (!stack.empty()) {
      int currentVertex = stack.top();
      stack.pop();

      cout << currentVertex << " "; // Print the current vertex

      // Visit all adjacent vertices of the current vertex
      for (int neighbor : adjList[currentVertex]) {
        if (!visited[neighbor]) {
          stack.push(neighbor);
          visited[neighbor] = true;
        }
      }
    }
  }

private:
  int V;                       // Number of vertices
  vector<vector<int>> adjList; // Adjacency list
};

int main() {
  Graph g(6); // Create a graph with 6 vertices

  // Add edges to the graph
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 3);
  g.addEdge(2, 4);
  g.addEdge(3, 5);

  cout << "Depth-First Search starting from vertex 0: ";
  g.DFS(0); // Start DFS from vertex 0

  return 0;
}
