#include <bits/stdc++.h>    
using namespace std;
int main(){
    int t;
    cin>> t;

    for(int i=0; i<t; i++){

        int a[4];
        for (int j=0; j<4; j++){
            cin>> a[j];
        }
        
        int x, y,c=0;
        
        for(int j=0; j<3; j++){
            if(a[j] == a[j+1]){
                c++;
            }
        }

        if(c==3){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}