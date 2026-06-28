#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, s2;
    cin>> s;
    s2 = "heidi";
    int c=0;

    for(int i=0; i<s.size(); i++){
        if(s[i]==s2[c]){
            c++;
        }

        if(c == 5){
            break;
        }
    }
    
    if(c == 5){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}