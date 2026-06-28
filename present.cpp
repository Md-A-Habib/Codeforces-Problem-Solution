#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;

    int p[n], q[n];
    for(int i=0; i<n; i++){
        cin>> p[i];
        q[i]=i+1;
    }

    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(p[j]==q[i]){
                cout << j+1 << " ";
            }
        }
    }
    cout << endl;
}