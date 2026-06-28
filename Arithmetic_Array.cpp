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

        float sum=0;
        for (int i=0; i<n; i++){
            sum= sum+ a[i];
        }
        if(sum == n){
            cout << 0 << endl;
        }
        else if(sum<n){
            cout << 1 << endl;
        }else{
            cout << sum-n << endl;
        }

    }
}