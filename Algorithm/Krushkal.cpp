#include <iostream>
#include <vector>

struct Edge {
    int u, v, weight;
};

void sortEdges(std::vector<Edge> &edges) {
    for (size_t i = 0; i < edges.size(); i++) {
        for (size_t j = i + 1; j < edges.size(); j++) {
            if (edges[i].weight > edges[j].weight) {
                std::swap(edges[i], edges[j]);
            }
        }
    }
}

int find(std::vector<int> &parent, int node) {
    if (parent[node] != node)
        parent[node] = find(parent, parent[node]);
    return parent[node];
}

void unionSet(std::vector<int> &parent, std::vector<int> &rank, int u, int v) {
    int rootU = find(parent, u);
    int rootV = find(parent, v);

    if (rootU != rootV) {
        if (rank[rootU] > rank[rootV])
            parent[rootV] = rootU;
        else if (rank[rootU] < rank[rootV])
            parent[rootU] = rootV;
        else {
            parent[rootV] = rootU;
            rank[rootU]++;
        }
    }
}

void kruskal(int n, std::vector<Edge> &edges) {
    sortEdges(edges);
    std::vector<int> parent(n), rank(n, 0);

    for (int i = 0; i < n; i++) parent[i] = i;

    int totalWeight = 0;

    for (const auto &edge : edges) {
        if (find(parent, edge.u) != find(parent, edge.v)) {
            totalWeight += edge.weight;
            unionSet(parent, rank, edge.u, edge.v);
        }
    }

    std::cout << totalWeight << "\n";
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<Edge> edges(m);
    for (int i = 0; i < m; i++)
        std::cin >> edges[i].u >> edges[i].v >> edges[i].weight;

    kruskal(n, edges);
    return 0;
}

// 4 5
// 0 1 10
// 0 2 6
// 0 3 5
// 1 3 15
// 2 3 4
