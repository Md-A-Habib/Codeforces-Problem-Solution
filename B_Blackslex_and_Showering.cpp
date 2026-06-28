#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    for (int i=0; i<t; i++){
        int n;
        cin>> n;
        int a[n];
        for(int j=0; j<n; j++){
            cin>> a[j];
        }
        int mx= *max_element(a, a+n);

        int b[n-1];
        int index;
        int m=0;

        for(int j=0; j<n; j++){
            if (a[j]== mx){
                index=j;
                break;
            }
        }
        for(int k=0; k<n; k++){
            if(k!= index){
                    b[m++]=a[k];
            }
        }

        long long ans=0;
        for(int j=1; j<n-1; j++){
            ans+= abs(b[j-1]- b[j]);
        }
        cout <<ans << endl;
    }                                                       
}