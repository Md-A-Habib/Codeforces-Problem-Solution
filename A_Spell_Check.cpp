#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    for(int i=0; i<t; i++){
        int n;
        cin>> n;

        string s,r;
        r="Timur";
        cin>> s;
        
        sort(s.begin(), s.end());
        sort(r.begin(), r.end());

        if (s==r && n==5){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}