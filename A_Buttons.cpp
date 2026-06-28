#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    for (int i=0; i<t; i++){
        int a, b, c;
        cin>> a>> b>> c;

        if(a==b && c%2 != 0){
            cout << "First" << endl;
        }
        else if(a==b && c%2 == 0){
            cout << "Second" << endl;
        }
        else if(a>b){
            cout << "First" << endl;
        }
        else if (a<b){
            cout << "Second" << endl;
        }
    }
}