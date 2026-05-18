#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        int n, m, d; cin>> n>> m>>d;
 
        int r=d/m+1, c=0;
        while (n>0){
            n=n-r;
            c++;
        }
        cout << c << endl;
    }
}
