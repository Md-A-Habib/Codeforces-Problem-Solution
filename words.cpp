#include <bits/stdc++.h>
using namespace std;
int main(){
   string a, b;
    int t;
    cin>> t;

   for(int i=0; i<t; i++){
    cin>> a>> b;
    
    char temp;
    temp  = a[0];
    a[0]= b[0];
    b[0]= temp;

    cout << a << " " << b << endl;
   } 
}