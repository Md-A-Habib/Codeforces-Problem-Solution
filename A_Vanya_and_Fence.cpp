#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, h;
    cin>> n>> h;

    int a[n], sum=0;
    for(int i=0; i<n; i++){
        cin>> a[i];

        if(a[i] <= h) sum+=1;
        else sum+=2;
    }
    cout << sum << endl;
<<<<<<< HEAD
}
=======
}
>>>>>>> 52ad09ff77dfe0bb6f1ad95d5b33dac44e2b9386
