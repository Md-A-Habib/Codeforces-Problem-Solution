#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    for (int i=0; i< t; i++){
        int n;
        cin>> n;
        int a[n];

        for(int j=0; j<n; j++){
            cin>> a[j];
        } 
        for(int k=0; k<n; k++){
            if(a[0] != a[1] && a[0] != a[2]){
                cout << 1 << endl;
                break;
            }
            else if(a[k] != a[k+1]){
                cout << k+2 << endl;
                break;
            }
        }
    }
}