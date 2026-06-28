#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    long long int i=1, a=n/2, b=n/2, c1=0, c2=0;

    for( i=1; i<=a; i++){
        if(a%i == 0){
            c1++;
        }
    }
    for(i=1; i<=b; i++){
        if(b%i == 0){
            c2++;
        }
    }

    if(c1>2 && c2>2){
        cout << a << " " << b << endl;
    }else{
        while (a+b != n){
            a++;
            b--;
        }
        cout<< a << " " << b << endl;
    }
}