#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin>> n;

        int a[n];
        for(int j=0; j<n; j++){
            cin>> a[j];
        }
        sort(a, a+n);

        int r;
        r= a[n-1]-a[0];
        cout << r << endl; 
    }
}