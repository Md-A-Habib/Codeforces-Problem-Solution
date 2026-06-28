#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>> a[i];
    }
    for(int i=0; i<n; i++){
        cin>> b[i];
    }

    int sum=0;
    for(int i=0; i<n; i++){
        int sub=0, sub1=0;
        if(a[i]>b[i]){
            sub=a[i]-b[i];
            if(sub<=5){
                sum=sum+sub;
            }else{
                b[i]=b[i]+10;
                sub1=b[i]-a[i];
                sum=sum+sub1;
            }
        }else{
            sub=b[i]-a[i];
            if(sub<=5){
                sum=sum+sub;
            }else{
                a[i]=a[i]+10;
                sub1= a[i]-b[i];
                sum=sum+sub1;
            }
        }
    }
    cout << sum << endl;
}