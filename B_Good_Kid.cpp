#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    
    for (int i=0; i<t; i++){
        int n;
        cin>> n;

        int a[n];

        for(int j=0; j<n; j++ ){
            cin>> a[j];
        }

        sort(a, a+n);

        int x;
        for(int k=0; k<n; k++){
            x=a[0]+1;
        }

        int p=1;
        for(int k=1; k<n; k++){
            p=p*a[k];
        }
        cout << x*p << endl;
    }
}