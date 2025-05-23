#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100;
int a[MAX][MAX];
int V;

void Prim() {
    int no_edge = 0, sum = 0;
    vector<bool> selected(MAX, false);

    selected[0] = true;
    cout << "Edge : Weight\n";

    while (no_edge < V - 1) {
        int x = 0, y = 0, min = INT_MAX;

        for (int i = 0; i < V; i++) {
            if (selected[i]) {
                for (int j = 0; j < V; j++) {
                    if (!selected[j] && a[i][j] != 0) {
                        if (min > a[i][j]) {
                            min = a[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }

        cout << x << " - " << y << " : " << a[x][y] << endl;
        sum += a[x][y];
        selected[y] = true;
        no_edge++;
    }

    cout << "Cost of Tree: " << sum << endl;
}

int main() {
    cout << "Enter the number of vertices\n";
    cin >> V;

    cout << "Enter the Cost Matrix\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> a[i][j];
        }
    }

    Prim();

    return 0;
}

// i/p and o/p
// Enter the number of vertices (V):
//  4

// Enter the cost matrix of size V x V
// 0 2 0 6
// 2 0 3 8
// 0 3 0 0
// 6 8 0 0

//Edge : Weight
// 0 - 1 : 2
// 1 - 2 : 3
// 0 - 3 : 6
// Cost of Tree: 11

