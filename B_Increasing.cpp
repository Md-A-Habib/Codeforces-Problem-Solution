#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    for(int i=0; i<t; i++){
        int n;
        cin>> n;

        int a[n];
        for(int j=0; j<n; j++){
            cin>> a[j];
        }

        int c=0;
        for(int j=0; j<t; j++){
            int unique=0;
            for(int k=0; k<j; k++){
                if(a[k]== a[j]){
                    unique++;
                }
            }
            if (unique==0){
                c++;
            }
        }
        if(c+2==n){
            cout << "YES" << endl;
        }
        else if(n==1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}