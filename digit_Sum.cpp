#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t, n, sum =0;
    cin>> t;
    for (int i=0; i<t; i++){
        cin>> n;
        n=n+1;
        sum=n/10;
        cout << sum << endl; 
    }
    return 0;
}