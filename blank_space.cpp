#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    for (int i=0; i<t; i++){
        int n;
        cin>> n;

        int a[n];

        for (int i=0; i<n; i++){
            cin>> a[i];
        }
        int c1=0, c0=0;
        for (int i=0; i<n; i++){
            if (a[i]==1){
                c1++;
            }else{
                c0++;
            }
        }
        if (c1> c0 && c1 != n){
            cout << c1-c0 << endl;
        }else if(c0>c1 && c1 != n){
            cout << c0-c1 << endl;
        }else{
            cout << 0 << endl;
        }
        // cout << c1 << " " << c0 << endl;
    }
}