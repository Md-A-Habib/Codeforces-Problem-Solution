#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[4];
    for(int i=0; i<4; i++){
        cin>> a[i];
    }

    int p=a[0], q=a[1], r=a[2], s=a[3]+1;

    for(int i=0; i<10; i++){
        if(s==p || s==q ||s==r){
            p++;
            q++;
            r++;
            s++;

            if(s==10)s=0;
            if(p==10)p=0;
            if(q==10)q=0;
            if(r==10)r=0;
        
        }
        if(s!=p && s!=q &&s!=r) break;
    }
    cout << p<< q<< r << s << endl;
}