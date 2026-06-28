#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;

    int x, y, x1, y1, a, b, a1, b1, s1, s2, s3, s4, s;
    for(int i=0; i<t; i++){
        cin>> x >> y >> x1>> y1; 
        cin>> a>> b>> a1>> b1;
        
        s1= abs(x-x1);
        s2= abs(y-y1);
        s3= abs(a-a1);
        s4= abs(b-b1);

        if (s1 != 0){
            cout << s1*s1 << endl;
        }
        else if(s2 != 0){
            cout << s2*s2 << endl;
        }
        else if(s3 != 0){
            cout << s3*s3 << endl;
        }else{
            cout << s4*s4 << endl;
        }
    }
}