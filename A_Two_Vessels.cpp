#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    
    for(int i=0; i<t; i++){
        float a, b, c,r,rr,nrr, rrr,nrrr ;
       
        
        cin>> a>> b>> c;

        if(a==b){
            cout << 0 << endl;
        }
        else if(a>b){
            r=a-b;
            rr=r/2;
            nrr=ceil(rr);
            rrr= nrr/c;
            nrrr = ceil(rrr);

            cout << nrrr << endl;
        }else{
            r=b-a;
            rr=r/2;
            nrr=ceil(rr);
            rrr= nrr/c;
            nrrr = ceil(rrr);
            cout << nrrr << endl;
        }
    }
}