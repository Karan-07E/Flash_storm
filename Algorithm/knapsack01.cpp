#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> w, value;
vector<vector<int> > v;

int knap(int i, int j) {
    if (i == 0 || j == 0) {
        return 0;
    }
    if (v[i][j] != -1) {
        return v[i][j];
    }
    if (j < w[i]) {
        v[i][j] = knap(i - 1, j);
    } else {
        v[i][j] = max(knap(i - 1, j), value[i] + knap(i - 1, j - w[i]));
    }
    return v[i][j];
}

void optimal(int i, int j) {
    if (i >= 1 && j >= 1) {
        if (v[i][j] != v[i - 1][j]) {
            cout << "Item : " << i << endl;
            optimal(i - 1, j - w[i]);
        } else {
            optimal(i - 1, j);
        }
    }
}

int main() {
    cout << "Enter the number of items:" << endl;
    cin >> n;

    cout << "Enter the capacity of the knapsack:" << endl;
    cin >> m;

    w.resize(n + 1);
    value.resize(n + 1);
    v.resize(n + 1, vector<int>(m + 1, -1));

    cout << "\nEnter weights:" << endl;
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }

    cout << "\nEnter profits:" << endl;
    for (int i = 1; i <= n; i++) {
        cin >> value[i];
    }

    int profit = knap(n, m);
    cout << "Profit: " << profit << endl;
    cout << "Items to be added for Optimal Solution:" << endl;
    optimal(n, m);

    return 0;
}
