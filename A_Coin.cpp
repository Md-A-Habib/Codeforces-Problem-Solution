#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, s; cin>> n>> s;
    int sum=0, coin=0;
    for(int i=n; i>0; i--){
        while(sum<s){
            sum = sum+i;
            coin++;
        }
        if(sum>s){
            sum=sum-i;
            coin=coin-1;
        }
        else if(sum == s){
            break;
        }
    }
    cout << coin << endl;
}
