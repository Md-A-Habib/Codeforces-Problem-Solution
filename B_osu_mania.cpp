#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    for(int i=0; i<t; i++){
        int n;
        cin>> n;
        char c[4];
        int a[n];
        int x;
        
        for(int j=0; j<n; j++){
            for(int k=0; k<4; k++){
                cin>> c[k];
            }
            for(int r=0; r<4; r++){
                if(c[r]== '#'){
                   x =r+1;
                }
            }
            a[j]=x;
            
        }
        /*for(int k=n-1; k>=0; k--){
            cout << a[k] << " ";
        }*/
       
       reverse(a, a+n);
       for (int j=0; j<n; j++){
        cout<< a[j] << " ";
       }
        cout << endl;
    }
}