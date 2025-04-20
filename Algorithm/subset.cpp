#include <iostream>
#include <vector>
using namespace std;

const int MAX = 10;
int n, d;
vector<int> S(MAX), soln(MAX);

void SumofSub(int i, int weight, int total);

bool promising(int i, int weight, int total) {
    return (weight + total >= d) && (weight == d || weight + S[i + 1] <= d);
}

int main() {
    int sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    
    cout << "Enter the set in increasing order: ";
    for (int i = 1; i <= n; i++) {
        cin >> S[i];
    }
    
    cout << "Enter the max. subset value(d): ";
    cin >> d;
    
    for (int i = 1; i <= n; i++) {
        sum += S[i];
    }
    
    if (sum < d || S[1] > d) {
        cout << "No Subset possible" << endl;
    } else {
        SumofSub(0, 0, sum);
    }
    
    return 0;
}

void SumofSub(int i, int weight, int total) {
    if (promising(i, weight, total)) {
        if (weight == d) {
            for (int j = 1; j <= i; j++) {
                if (soln[j] == 1) {
                    cout << S[j] << " ";
                }
            }
            cout << endl;
        } else {
            // Include current element
            soln[i + 1] = 1;
            SumofSub(i + 1, weight + S[i + 1], total - S[i + 1]);
            
            // Exclude current element
            soln[i + 1] = 0;
            SumofSub(i + 1, weight, total - S[i + 1]);
        }
    }
}

// Enter number of elements: 5
// Enter the set in increasing order: 1 2 3 4 5
// Enter the max. subset value(d): 6

// 1 2 3 
// 1 5 
// 2 4 