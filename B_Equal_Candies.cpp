#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>> t;

    for (int i=0; i<t; i++){
        int n;
        cin>> n;
        vector <int> a(n);

        for (int j=0; j<n; j++){
            cin>> a[j];
        }
        sort (a.begin(), a.end());

        int sum=0, mul=0;
        for(int j=0; j<n; j++){
            sum=sum+a[j];
            mul=mul*a[j];
        }
        if (sum==mul){
            cout<< 0 << endl;
        }else{
            int r=0;
            for(int j=0; j<n; j++){
                r=r+(a[j]-a[0]);
            }
            cout << r << endl;
        }
    }
}