#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>> t;

    while (t--){
        int n; cin>> n;

        char a[n]; int l=0, r=0;
        for(int i=0; i<n; i++){
            cin>> a[i];

            if(a[i] == '(') l++;
            else r++;
        }

        if(l==r) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
