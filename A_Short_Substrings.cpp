#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    for(int z=0; z<t; z++){
        string s;
        cin>> s;

        cout << s[0];
        int n= s.size();
        for(int i=2; i<n; i+=2){
            cout << s[i];
        }
        cout << s[n-1] << endl;
    }
}