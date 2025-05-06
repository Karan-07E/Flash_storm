#include <iostream>
#include <vector>

void nextPermutation(std::vector<int> &arr, bool &hasNext) {
    int k = -1;
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            k = i;
            break;
        }
    }

    if (k == -1) {
        hasNext = false;
        return;
    }

    int l = -1;
    for (int i = arr.size() - 1; i > k; i--) {
        if (arr[i] > arr[k]) {
            l = i;
            break;
        }
    }

    std::swap(arr[k], arr[l]);
    for (int i = k + 1, j = arr.size() - 1; i < j; i++, j--) {
        std::swap(arr[i], arr[j]);
    }
}

int tsp(const std::vector<std::vector<int> > &graph, int n) {
    std::vector<int> cities;
    for (int i = 1; i < n; i++) cities.push_back(i);

    int minCost = INT32_MAX;
    bool hasNext = true;

    while (hasNext) {
        int currentCost = 0, k = 0;
        for (int i : cities) {
            currentCost += graph[k][i];
            k = i;
        }
        currentCost += graph[k][0];
        minCost = std::min(minCost, currentCost);

        nextPermutation(cities, hasNext);
    }

    return minCost;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int> > graph(n, std::vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            std::cin >> graph[i][j];

    std::cout << tsp(graph, n) << "\n";
    return 0;
}

// 4
// 0 10 15 20
// 10 0 35 25
// 15 35 0 30
// 20 25 30 0