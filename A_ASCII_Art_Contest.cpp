#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[3];
    cin>> a[0] >> a[1] >> a[2];

    sort(a, a+3);
    int d,d2;
    d=a[2]-a[1];
    d2= d+ (a[1]-a[0]);

    if(d2<10){
        cout << "final " << a[1] << endl; 
    }else{
        cout << "check again" << endl;
    }  
}