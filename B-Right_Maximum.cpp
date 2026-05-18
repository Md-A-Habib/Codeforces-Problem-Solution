#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    for(int i=0; i<t; i++){
        int n; cin>> n; 
        int a[n];
        for(int j=0; j<n; j++){
            cin>> a[j];
        }
 
        int mx=0, c=0;
        for(int j=0; j<n; j++){
            if(a[j]>=mx){
                c++;
                mx=a[j];
            }
        }
        cout << c << endl;
    }
}
