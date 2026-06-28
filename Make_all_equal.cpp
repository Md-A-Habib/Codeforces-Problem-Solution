#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>> t;
    while(t--){
        int n; cin>> n;

        vector <int> v(n);
        for(int i=0; i<n; i++){
            cin>> v[i];
        }

        sort(v.begin(), v.end());

        int mx=1, c=1;

        for(int i=1; i<n; i++){
            if(v[i] == v[i-1]){
                c++;
            }else{
                mx=max(mx,c);
                c=1;
            }
        }
        mx=max(mx,c);
        cout<< n-mx << endl;
    }
}