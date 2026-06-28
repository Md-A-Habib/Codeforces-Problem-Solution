#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    while (t--){
        int n; cin>>n;
        int a[n], b[n];

        for(int i=0; i<n; i++){
            cin>> a[i];
        }
        for(int i=0; i<n; i++){
            cin>> b[i];
        }
        
        int pos=0;
        for(int i=0; i<n; i++){
            if(a[i] > b[i]) pos= pos+(a[i]-b[i]);
        }
        cout << pos+1 << endl;
    }  
<<<<<<< HEAD
}
=======
}
>>>>>>> 52ad09ff77dfe0bb6f1ad95d5b33dac44e2b9386
