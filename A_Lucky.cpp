#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    for(int i=0; i<t; i++){
        string a;
        int s=0, ss=0;
        cin>> a;

        for(int k=0; k<3; k++){
            s=s+a[k];
        }
        for(int l=3; l<6; l++){
            ss=ss+a[l];
        }

        if(s==ss){
            cout<< "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    } 
}