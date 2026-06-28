#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    for(int i=0; i<t; i++){
        int n;
        cin>> n;

        int a[n];
        int cm=0, cz=0, m=0;
        for(int j=0; j<n; j++){
            cin>> a[j];
            if(a[j]==0){
                a[j]= a[j]+1;
                cz++;
            }
            else if(a[j] == -1){
                a[j]= a[j]+2;
                cm=cm+2;
                m++;
            }
        }
        
        if(m%2 == 0){
              cout << cz << endl;
        }else{
           cout << cz+2 << endl;
        }
    }
}