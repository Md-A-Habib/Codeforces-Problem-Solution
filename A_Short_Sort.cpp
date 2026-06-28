#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    char a, b, c;

    for(int i=0; i<t; i++){
        cin>> a>> b>> c;

        if(a == 'b' && b== 'c' && c== 'a'){
            cout << "NO" << endl;
        }
        else if( a=='c' && b== 'a' && c== 'b'){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
}