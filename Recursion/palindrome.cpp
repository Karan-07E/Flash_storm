#include <iostream>
using namespace std;

int palind(int i,string s){
    int n=s.length();
    if(i==(n/2)) return true;
    if(s[i]!=s[n-i-1]) return false;
    return palind(i+1,s);
}
int main(){
    string s;
    int res;
    cin>>s;
    res=palind(0,s);
    if(res) cout << "palindrome" <<endl;
    else cout << "not palindrome" <<endl;
    return 0;
}