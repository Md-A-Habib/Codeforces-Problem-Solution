#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    for (int i=0; i<t; i++){
        string s;
        cin>> s;
        int n = s.size();

        if(s[n-2] == 'u' && s[n-1] == 's'){
           s=s.substr(0, n-2)+"i";
        }
        cout<< s << endl;
    }
}