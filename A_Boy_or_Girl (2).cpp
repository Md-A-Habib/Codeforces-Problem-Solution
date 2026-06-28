#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;
    int c=0;

    for(int i=0; i<s.size(); i++){
        bool isduplicate = false; // initially dhore nisi duplpicate nai ba na,
        
        for(int j=0; j<i; j++){
            if(s[i]==s[j]){
                isduplicate =true; // comparision e duplicate peye gele true.
                break;
            }
        }
        if(!isduplicate) c++; // jdi duplicate na hy tahole c++
    }

    if(c%2==0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
}