#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    char ar[5];
    
    for(int i=0; i<t; i++){
        int a=0, b=0;

        for (int j=0; j<5; j++){
            cin>> ar[j]; 

        if (ar[j]== 'A'){
            a++;
        }else{
            b++;
        }
        }
      
        if(a>b){
            cout << "A" << endl;
        }else{
            cout << "B" << endl;
        }
    }
}