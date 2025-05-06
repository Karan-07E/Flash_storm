#include <iostream>
#include <vector>

int multistageGraph(const std::vector<std::vector<int> > &graph, int stages) {
    int n = graph.size();
    std::vector<int> cost(n, INT32_MAX);

    cost[n - 1] = 0;

    for (int i = n - 2; i >= 0; i--) {
        for (int j = i + 1; j < n; j++) {
            if (graph[i][j] != INT32_MAX && cost[j] != INT32_MAX) {
                if (cost[i] > graph[i][j] + cost[j]) {
                    cost[i] = graph[i][j] + cost[j];
                }
            }
        }
    }

    return cost[0];
}

int main() {
    int n, stages;
    std::cin >> n >> stages;

    std::vector<std::vector<int> > graph(n, std::vector<int>(n, INT32_MAX));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            int w;
            std::cin >> w;
            if (w != -1) graph[i][j] = w;
        }

    std::cout << multistageGraph(graph, stages) << "\n";
    return 0;
}

// 8 4
// -1 1 2 5 -1 -1 -1 -1
// -1 -1 -1 -1 4 11 -1 -1
// -1 -1 -1 -1 9 5 16 -1
// -1 -1 -1 -1 -1 -1 2 -1
// -1 -1 -1 -1 -1 -1 -1 18
// -1 -1 -1 -1 -1 -1 -1 13
// -1 -1 -1 -1 -1 -1 -1 2
// -1 -1 -1 -1 -1 -1 -1 -1
