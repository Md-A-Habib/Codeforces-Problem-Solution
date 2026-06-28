#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    
    int a;
    for(int i=0; i<n; i++){
        cin>> a;

        int c=0, h=0;
        while (a != 0){
            if(a>=4){
                a=a-4;
                c++;
            }else{
                a=a-2;
                h++;
            }
        }
        cout << c+h << endl;
    }
}