#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    for (int i=0; i<t; i++){
        int n;
        cin>> n;
        
        if(n%7==0){
            cout<< n<< endl;
        }else{
            int cp=0, cm=0, c=n;
            while (n%7 != 0){
                n++;
                cp++;
            }
            while(c%7 != 0){
                c--;
                cm++;
            }
            if(cp>cm){
                cout << c << endl;
            }
            else if(cp<cm){
                cout << n << endl;
            }else{
                cout << n << endl;
            }
        }
    }
}