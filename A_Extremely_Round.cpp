#include <bits/stdc++.h>
using namespace std;
int main(){
    long t;
    cin>> t;
        long long n;
    for(long long i=0; i<t; i++){
        cin>> n;

        if(n>0 && n<10 ){
            cout << n << endl;
        }
        else if(n>=10 && n<=99){
            n=n/10;
            cout<< n+9 << endl;
        }
        else if(n>=100 && n<=999){
            n=n/100;
            cout << 18+n << endl;
        }
        else if(n>=1000 && n<=9999){
            n=n/1000;
            cout<< 27+n << endl;
        }
        else if(n>=10000 && n<=99999){
            n=n/10000;
            cout<< 36+n << endl;
        }
        else if(n>=100000 && n<=999999){
            n=n/100000;
            cout<< 45+n << endl;
        }
    }
}