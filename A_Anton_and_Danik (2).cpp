#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>> n;
    string s;
    cin>> s;
    int d=0, a=0;

    for(char ch:s){
        if(ch=='D') d++;
        else if(ch== 'A') a++;
    }
    if(a>d){
        cout <<"Anton" << endl;
    }
    else if(d>a){
        cout << "Danik" << endl;
    }else {
        cout << "Friendship" << endl;
    }
}