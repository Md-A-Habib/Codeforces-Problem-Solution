#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t--){
        int a, b, ra, sa;
        cin>> a >>b;
        ra=2*(a*b);

        for(int i=ra; i<=40000; i++){
            int sq= sqrt(i);

            if(sq*sq==i){
                cout<< i << endl;
                break;
            }
        }

    }
}