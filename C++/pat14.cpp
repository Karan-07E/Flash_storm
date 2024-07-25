#include <iostream>
using namespace std;

int main(){
    int i,j;
    for(i = 0; i <= 5; i++){
            for(char ch='A'; ch < 'A'+i; ch++){
                cout<<ch;
            }
        cout<<endl;
    }
}
