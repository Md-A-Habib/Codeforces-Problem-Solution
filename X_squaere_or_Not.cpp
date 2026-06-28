#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>> t;
    for(int i=0; i<t; i++){
        int n; cin>> n;

        int sum=0;
        string s; cin>> s;
        for(int j=0; j<s.size(); j++){
            sum+=s[j]-'0';
        }
        
        if(sum%4 == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}