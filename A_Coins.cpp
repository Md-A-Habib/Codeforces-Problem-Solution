#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>> t;
    for(int i=0; i<t; i++){
        long long n, x1,x2, k;
        cin>> n>> x1>> x2>> k;

        long long d=abs(x1-x2);
        
        d=min(d, n-d);
        cout<< d << endl;
    }
}