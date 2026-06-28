#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;

    for(int i=0; i<n; i++){
        int x, y;
        float r, mxspace;
        cin>> x>> y;
        
        if(y%2 !=0 && x!=0 && y!=0){
            r=y/2;
            mxspace= (ceil(r)*7)+11;
            if(mxspace>=x){
                cout << ceil(r)+1 << endl;
            }else{
                float c, R;
                c=x-mxspace;
                R=c/15;
                cout << ceil(r) + 1 + ceil(R) << endl;
            }
        }
        else if(y%2 == 0 && x!=0 && y!=0){
            r=y/2;
            mxspace=r*7;
            if(mxspace>=x){
                cout << r << endl;
            }else{
                float c, R;
                c=x-mxspace;
                R=c/15;
                cout << r+ ceil(R) << endl;
            }
        }
        else if( x==0 && y==0){
            cout << 0 << endl;
        }
    }
}