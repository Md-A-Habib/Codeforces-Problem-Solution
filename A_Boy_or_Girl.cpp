#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;

    int nc=0;
    for(int i=0; i<s.size(); i++){
        for(int j=0; j<i; j++){
            if(s[i] == s[j]){
                nc++;
            }
        }
    }
    int r = s.size()-nc;
    cout << r << endl;

    if(r%2 != 0 && r>=0){
        cout << "IGNORE HIM!" << endl;
    }else if(r%2 == 0 && r>=0){
        cout << "CHAT WITH HER!" << endl;
    }else if(r%2 == 0 && r<0) {
        cout << "IGNORE HIM!" << endl;
    }else if(r%2 != 0 && r<0){
        cout << "CHAT WITH HER!" << endl;
    }
}