#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int i=0; i<t; i++){

        int n; cin>> n;
        int a[n];
        for(int j=0; j<n; j++){
            cin>> a[j];
        }

        bool sorted=true;
        for(int j=1; j<n; j++){
            if(a[j]<a[j-1]){
                sorted =false;
                break;
            }
        }
        if(sorted){
            cout << n << endl;
        }else{
            cout << 1 << endl;
        }
    }
}
