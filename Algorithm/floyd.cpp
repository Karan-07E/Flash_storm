#include <iostream>
#include <chrono>

using namespace std;

const int MAX=100;
int a[MAX][MAX];
int n;

void getpath(){
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if((a[i][k] + a[k][j])<a[i][j]){
                    a[i][j] = a[i][k] + a[k][j];
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
    cout << "enter the cost matric (999 for infinity)" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    auto start = chrono::high_resolution_clock::now();
    getpath();
    auto stop = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> duration = start - stop;
    printmatrix();
    cout << "time complexity:" << duration.count() << "ms";
    return 0;
}