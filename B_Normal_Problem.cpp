#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    
    for(int i=0; i<t; i++){
        string x;
        cin>> x;
        reverse(x.begin(), x.end());
        string y;

        for (int j=0; j<x.size(); j++){
            if(x[j]=='p'){
                x[j]='q';
            }
            else if(x[j]== 'q'){
                x[j]='p';
            } 
        }
        cout << x << endl;
    }
}