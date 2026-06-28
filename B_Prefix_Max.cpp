#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t--){
        int n;
        cin>> n;
        vector<int>a(n);

        for(int i=0; i<n; i++){
            cin>> a[i];
        }
        int mx=a[0], index=0;
        for(int i=1; i<n; i++){
            if(a[i]> mx){
                mx= a[i];
                index=i;
            }
        }

        swap(a[0], a[index]);
        int sum=0, cmax=0;

        for(int i=0; i<n; i++){
            cmax= max(cmax, a[i]);
            sum=sum+cmax;
        }
        cout << sum << endl;
    }
}