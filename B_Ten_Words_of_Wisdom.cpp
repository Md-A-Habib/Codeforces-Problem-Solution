#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    for(int i=0; i<t; i++){
        int n;
        cin>> n;

        int a[n], b[n];
        for(int j=0; j<n; j++){
            cin>> a[j]>> b[j];
        } 
        
        int mx=0, r=0; 
        for(int j=0; j<n; j++){
            if(a[j]<=10 && b[j]>mx){
                mx=b[j];
                r=j+1;
            }
        }
        cout << r << endl;
    }
}