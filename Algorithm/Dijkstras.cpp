#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<int> > cost;

void Dijkstra(int s) {
    vector<int> visited(n, 0);
    vector<int> d(n, 999999);  
    d[s] = 0;
    for (int i = 0; i < n - 1; ++i) {
        int u = -1;
        int min_dist = 999999;
        for (int j = 0; j < n; ++j) {
            if (!visited[j] && d[j] < min_dist) {
                min_dist = d[j];
                u = j;
            }
        }
        if (u == -1) break;
        visited[u] = 1;
        for (int v = 0; v < n; ++v) {
            if (!visited[v] && cost[u][v] && d[u] != 999999 && d[u] + cost[u][v] < d[v]) {
                d[v] = d[u] + cost[u][v];
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if (i != s) {
            cout << s << "->" << i << ":" << d[i] << endl;
        }
    }
}

int main() {
    cout << "Enter the number of vertices:" << endl;
    cin >> n;

    cost.resize(n, vector<int>(n));

    cout << "Enter the cost adjacency matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> cost[i][j];
        }
    }

    int s;
    cout << "\nEnter the source vertex:" << endl;
    cin >> s;

    Dijkstra(s);

    return 0;
}
// i/p and o/p
// Enter the number of vertices:
// 5

// Enter the cost adjacency matrix:
// 0 10 0 30 0
// 10 0 50 0 0
// 0 50 0 20 10
// 30 0 20 0 60
// 0 0 10 60 0

// Enter the source vertex:
// 0

// 0->1:10
// 0->2:50
// 0->3:30
// 0->4:60