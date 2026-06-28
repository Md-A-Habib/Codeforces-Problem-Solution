#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    for(int i=0; i<n; i++){
        int t;
        cin>> t;

        int c=0;
        char s[t];
        for(int j=0; j<t; j++){
            cin>> s[j];
        }

        for(int j=0; j<t; j++){
            int unique=0;

            for(int k=0; k<j; k++){
                if(s[j] == s[k]){
                    unique++;
                }
            }
            if(unique == 0){
                c++;
            }
        }
        cout << c+t<< endl;
    }
}