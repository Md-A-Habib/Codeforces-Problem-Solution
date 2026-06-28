#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    
    while (t--){
        int n;
        cin>> n;
        int a[n], f=0;
        for(int i=0; i<n; i++){
            cin>> a[i];
            if(a[i]==67){
                f++;
            }
        }
        
        if(f>0){
                cout << "YES" << endl;
        }else{
                cout << "NO" << endl;
        }
    } 
<<<<<<< HEAD
}
=======
}
>>>>>>> 52ad09ff77dfe0bb6f1ad95d5b33dac44e2b9386
