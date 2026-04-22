#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    for(int i=0; i<t; i++){
        int n; cin>> n;

        int copy=n;

        if(n<1000){
            n=n/10;

            if(n==10 && (copy-100)>=2 ){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
        else if(n<10000){
            n=n/100;

            if(n==10 && (copy-1000)>9 ){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
        else if(n==10000){
            cout << "NO" << endl;
        }
    }
}
