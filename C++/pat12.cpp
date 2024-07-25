#include <iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1;i<5;i++){
        for(j=1; j<=i; j++){    //number
            cout<<j;
        }
        for(j=0;j<=8-(2*i+1); j++){ //space
            cout<<" ";
        }
        for (j=i; j>=1; j--) {  //number
            cout << j;
        }
        cout<<endl;
    
}
}