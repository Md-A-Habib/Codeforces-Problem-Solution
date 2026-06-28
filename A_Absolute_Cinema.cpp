#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t; cin>> t;
    
    while (t--){
        long long n; cin>> n;

        long long a[n], b[n], i;
        for(i=0; i<n; i++){
            cin>> a[i];
        }
        
        for( i=0; i<n; i++){
            cin>> b[i];
        }

        for(i=0; i<n; i++){
            if(a[i] > b[i]){
                swap(a[i], b[i]);
            }
        }
        
        int mx = *max_element(a, a+n);

        long long sum=0;
        for(i=0; i<n; i++){
            sum += b[i];
        }

        cout << mx+sum << endl;
    }
}