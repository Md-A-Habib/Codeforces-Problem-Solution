#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    int a, b, c;
    for(int i=0; i<t; i++){
        cin>> a>> b>> c;

        int mx=max({a,b,c});
        int mn= min({a,b,c});

        if ((a==mx && c==mn) || (a==mn && c==mx)){
            cout << b << endl;
        }
        if((b==mx && c==mn) || (b==mn && c==mx)){
            cout << a << endl;
        }
        if((a==mx && b==mn) || (b==mx && a==mn)){
            cout << c << endl;
        }
        
    }
}