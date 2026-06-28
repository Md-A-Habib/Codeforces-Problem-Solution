#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    
    for(int i=0; i<t; i++){
        string x;
        string y;
        string z;

        cin>> x; 
        cin >> y;
        cin>> z;
        
        string s= x+y+z;

        int ac=0, bc=0, cc=0;

        for(char c:s){
            if(c=='A'){
                ac++;
            }
            if(c=='B'){
                bc++;
            }
            if(c=='C'){
                cc++;
            }
        }

        if(ac==2){
            cout << "A" << endl;
        }
        else if(bc==2){
            cout << "B" << endl;
        }else{
            cout << "C" << endl;
        }
    }
}