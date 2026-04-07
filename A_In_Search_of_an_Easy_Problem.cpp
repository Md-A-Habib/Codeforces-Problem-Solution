#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>> a[i];
    }

    int find=0;
    for(int i=0; i<n; i++){
        if(a[i]== 1){
            find++;
            break;
        }
    }
    if(find>0){
        cout<< "HARD" << endl;
    }else{
        cout << "EASY" << endl;
    }
}
