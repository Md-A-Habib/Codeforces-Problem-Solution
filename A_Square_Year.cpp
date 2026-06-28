#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    for(int i=0; i<t; i++){
        int n;
        cin>> n;

        int r;
        r=sqrt(n);

        float rr;
        rr= sqrt(n);

        float f;
        f=rr-r;

        if(f>0){
            cout<< "-1" << endl;
        }else{
            int a=0, b=r;
            for(int j=0; j<r; j++){
                a++;
                b--;

                if(a+b==r) break;
            }
            cout << b << " " << a << endl;
        }
    }
}