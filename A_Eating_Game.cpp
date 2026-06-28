#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    for(int i=0; i<t; i++){
        int n; cin>> n;

        int a[n];
        for(int j=0; j<n; j++){
            cin>> a[j];
        }
<<<<<<< HEAD
=======

>>>>>>> 52ad09ff77dfe0bb6f1ad95d5b33dac44e2b9386
        int mx=*max_element(a,a+n);

        int c=0;
        for(int j=0; j<n; j++){
            if(a[j]==mx){
                c++;
            }
        }
        cout << c<< endl;
    }
<<<<<<< HEAD
}
=======
}
>>>>>>> 52ad09ff77dfe0bb6f1ad95d5b33dac44e2b9386
