#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    for(int i=0; i<t; i++){
        string s;
        cin>> s;

        int c=0, ns=0;
        
        for(int j=0; j<s.size(); j++){
            if (s[j]!= s[j+1]){
                c++;
            }else{
                ns++;
            }
        }
      
        if(ns!=0) cout << ns << endl; 
        else cout<< c << endl;

    }
}