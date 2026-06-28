#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    for (int i=0; i<k; i++){
        if (n%10 != 0){
            n--;
        }
        else if(n%10 == 0){
            n= n/10;
        }
    }
    cout << n << endl;
<<<<<<< HEAD
}
=======
}
>>>>>>> 52ad09ff77dfe0bb6f1ad95d5b33dac44e2b9386
