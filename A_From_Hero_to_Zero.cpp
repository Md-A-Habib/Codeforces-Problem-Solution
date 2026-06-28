#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    
    for(int i=0; i<t; i++){
        int n, k;
        cin>> n>> k;
        int c=0;
        while (n!=0){
            if(n%k ==0){
                n=n/k;
            }else{
                n=n-1;
            }
            c++;
        }
        cout << c << endl;
    }
}