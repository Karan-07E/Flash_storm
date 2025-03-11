#include <iostream>
#include <chrono>
using namespace std;

const int MAX=100;
int a[MAX][MAX];
int n;

void getClosure(){
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(a[i][j] == 1 || (a[i][k] == 1 && a[k][j] == 1)){
                    a[i][j] = 1;
                }
            }
        }
    }
}
void printmatrix(){
    cout << "Transitive closure: " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    cout << "enter the number of vertices" << endl;
    cin >> n;
    cout << "enter the cost matric (0's and 1's)" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    auto start = chrono::high_resolution_clock::now();
    getClosure();
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start).count();
    printmatrix();
    cout << "time complexity:" << duration;
    return 0;
}
