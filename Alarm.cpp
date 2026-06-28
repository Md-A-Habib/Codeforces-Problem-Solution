#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    int so=0, eo=0, n, x;

    for(int i=1; i<=t; i++){
        cin>> n>> x;
        int a[n];

        int j;
        for(j=1; j<=n; j++){
            cin>> a[j];
        }

    for(int i=1; i<=n; i++){
         if (a[i]==1){
                so=i;
                break;
            }
    }
    for(int i=n; i>1; i--){
         if (a[i]==1){
                eo=i;
                break;
            }
    }

   int r= eo-so+1;
   if ((r<=x && n>1) || (n==1 && a[1]==1 && x>=1)){
        cout << "YES" << endl;
        } else{
        cout << "NO" << endl;
        }
}
   
}