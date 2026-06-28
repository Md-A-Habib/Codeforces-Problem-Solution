#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin>> n;

        int a[n];

        int c=0, mx=0;
        for(int j=0; j<n; j++){
            cin>> a[j];
        }

        for(int j=0; j<n; j++){
            if (a[j]==0){
                c++;
                mx = max(mx, c);
            }else{
                c=0;
            }
        }
        cout << mx << endl; 
    }
}