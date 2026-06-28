#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t ;
    for (int i=0; i<t; i++){
        int n;
        cin>> n;
        
        int t3, t2;

        if(n%3 ==0){
            t3=n/3;
            t2=0;
            cout << t2 << endl;
        }
        else if(n%3 ==1){
            t3=(n-4)/3;
            t2=2;
            cout << t3-t2;
        }
        else if(n%3 ==2){
            t3=(n-2)/3;
            t2=1;
        }
    }
}