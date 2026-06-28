#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, t2;
    cin>>t;
    t2=t;

    double n, s=0, r;
    while (t--){
        cin>> n;
        s=s+n;
    }
    r=s/t2;
    cout << fixed << setprecision(12)<< r << endl;
}