#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    int m, c, mm=0, cc=0;

    for (int i=0; i<n; i++){
        cin>> m>> c;
        
        if(m>c){
            mm++;
        }else if(m<c){
            cc++;
        }
    }
    if (mm>cc){
        cout<< "Mishka" << endl;
    }else if(mm<cc){
        cout << "Chris" << endl;
    }else{
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}