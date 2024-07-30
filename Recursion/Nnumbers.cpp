#include <iostream>
using namespace std;
int cnt = 0;
int n;

void print(){
   if(cnt == n)  return;
   cout<<cnt<<endl;
   cnt++;
   print();
}
int main(){
    cin>>n;
    print();
}