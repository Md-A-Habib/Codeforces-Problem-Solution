#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    int a, b, c;
    for (int i=0; i<t; i++){
        cin>>a>>b>> c;

       int mx= max({a, b, c});

        int A, B, C;

        if (a==mx && (a>b || a>c)){
            A=0;
        }else{
            A= mx-a+1;
        }

        if (b==mx && (b>a || b>c)){
            B=0;
        }else{
            B=mx-b+1;
        }
        if (c==mx && (c>a || c>b)){
            C=0;
        }else{
            C=mx-c+1;
        }

        cout<< A << " " << B << " " << C << endl;


    }
}


