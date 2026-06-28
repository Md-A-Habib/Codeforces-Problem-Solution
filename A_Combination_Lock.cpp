#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int sum=0;

    for(int i=0; i<n; i++){
<<<<<<< HEAD
        int x = a[i];
        int y = b[i];
=======
        int x = a[i]-'0';
        int y = b[i]-'0';
>>>>>>> 52ad09ff77dfe0bb6f1ad95d5b33dac44e2b9386

        int sub=0, sub1 = 0;

        if(x>y){
            sub= x-y;
            if(sub <= 5){
                sum= sum+sub;
            }else{
                y= y+10;
                sub1= y-x;
                sum= sum+sub1;
            }
        }else{
            sub = y-x;
            if(sub <= 5){
                sum += sub;
            }else{
                x= x+10;
                sub1 = x-y;
                sum= sum+sub1;
            }
        }
    }
    cout << sum << endl;
<<<<<<< HEAD
}
=======
}
>>>>>>> 52ad09ff77dfe0bb6f1ad95d5b33dac44e2b9386
