#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;

    for(int i=0; i<n; i++){
        int x, y;
        float ry,rx, mxspace;
        cin>> x>> y;

        ry=y*4/8;
        rx= x/15;

        if(x==0 && y%2 !=0){
            cout<< ceil(ry)+1<< endl;
        }
        else if(x==0 && y%2 ==0){
            cout << ceil(ry) << endl;
        }
        
        if(y==0 && x!=0 ){
            cout << ceil(rx) << endl;
        }
        else if(x==0 && y==0){
            cout << 0 << endl;
        }
        else if(x!=0 && y!=0 && y%2 !=0){
            mxspace= ry*4+11;
            if(x<=mxspace){
                cout << ry+1 << endl;
            }
            else if(x>mxspace){
                float c= x-mxspace;
                float cc = c/15;
                cout<< ry+1 + ceil(cc)<< endl;
            }
        }
        else if(x!=0 && y!=0 && y%2 ==0){
            mxspace= ry*4;
            if(x<=mxspace){
                cout << ry << endl;
            }
            else if(x>mxspace){
                float c= x-mxspace;
                float cc = c/15;
                cout<< ry + ceil(cc)<< endl;
            }
        }
    }
}