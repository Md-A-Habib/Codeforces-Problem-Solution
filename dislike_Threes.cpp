#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    for (int j=0; j<t; j++){
        int k;
        cin>> k;

        int c=0, r=0;
        for(int i=1; ; i++){
            if (i%3 !=0 && i%10 !=3){
                c++;
                if (c==k){
                    r=i;
                    break;
                }
            }
        }
        cout << r << endl;
    }
}