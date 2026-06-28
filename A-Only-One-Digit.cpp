#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, x;
    cin>> t;
    for (int i=0; i<t; i++){
        cin>> x; // let, x=12

        int mini=9;
      while (x>0){
        int digit= x%10; //finding last digit // last digit => 2
        mini = min(mini, digit); // compare minimum with last digit // min(9,2)=9>2 ==> mini=2
        x= x/10; // remove last digit // remove 2 from 12 // ==> x=1 [now it check again with mini=2]
    }
    cout << mini << endl; // final minimum=1
    }
}


// for finding maximum digit of a number 
// use maxi=-1 instead of mini=9
// use max(maxi,digit) instead of min(mini, digit)
// finally cout<< maxi 😱 