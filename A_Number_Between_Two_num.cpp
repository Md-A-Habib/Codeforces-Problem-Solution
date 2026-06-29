#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t; cin>> t;
    while (t--){
        long long x, y; cin>> x>> y;
        
        if(y/x == 2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}