#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n, p=1,f,i;
    cin>>n;
   
    for ( i=0; i<n; i++){
        p= p*5;
    }
    f=p%100;
    cout << f << endl;
}