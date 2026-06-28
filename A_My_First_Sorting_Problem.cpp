#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    int x[t], y[t];

    for (int i=0; i<t; i++){
        cin>> x[i] >> y[i];
    }
    for (int i=0; i<t; i++){
        if (x[i] >= y[i]) {
            cout << y[i] << " " << x[i] << endl;
        }else{
            cout << x[i] << " " << y[i] << endl;  
        }
    }
    return 0;
}