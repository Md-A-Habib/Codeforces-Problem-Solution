#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int p,q;
    cin>> p;

    int x[p];
    for ( int i=0; i<p; i++){
        cin>> x[i];
    }

    cin>> q;

    int y[q];
    for (int i=0; i<q; i++){
        cin>> y[i];
    }

    int r=p+q;
    int z[r];

    for (int i=0; i<p; i++){
        z[i]=x[i];
    }
    for (int i=0; i<q; i++){
        z[p+i]= y[i];
    }
    int  count=0;
    
    for(int i=1; i<=n; i++){
    for (int j=0; j<r; j++){
      if(i==z[j]){
        count++;
        break;
      } 
    }
    }
    
    if (count==n){
            cout << "I become the guy." << endl;
        }else{
            cout << "Oh, my keyboard!" << endl;
        }
   
    
}