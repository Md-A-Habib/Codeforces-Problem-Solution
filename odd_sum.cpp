#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m, sum=0;
    cin>> n>> m;
   int b[m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        cin>> b[j];
        sum= sum+b[j];
       
         if(sum%2 != 0){
        cout << "YES"<< endl;
    }else{
        cout << "NO" << endl;
    }
    } 
}
}