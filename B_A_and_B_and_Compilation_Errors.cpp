#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;

    int a[n], b[n-1], c[n-2], asum=0, bsum=0, csum=0;
    for(int i=0; i<n; i++){
        cin>> a[i];
        asum=asum+a[i];
    }
    for(int i=0; i<n-1; i++){
        cin>> b[i];
        bsum=bsum+b[i];
    }
    for(int i=0; i<n-2; i++){
        cin>> c[i];
        csum=csum+c[i];
    }

    cout<< asum-bsum << endl;
    cout << bsum-csum << endl;
}
