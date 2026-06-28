#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    for(int i=0; i<t; i++){
        string s;
        cin>> s;

        if(s=="YES" || s=="YEs" || s=="YeS" || s=="Yes" || s=="yES" || s=="yEs" || s=="yes" || s== "yeS"){
            cout << "YES" << endl;
        }else{
            cout << "NO"<< endl;
        }
    }
}