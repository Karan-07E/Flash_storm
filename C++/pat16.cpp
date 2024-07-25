#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        char ch='A'+i;
        for(int j=0; j<=i; j++){
            cout<<ch;
        }
        cout<<endl;
    }
}