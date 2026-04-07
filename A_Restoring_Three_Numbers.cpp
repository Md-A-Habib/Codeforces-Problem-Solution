#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d, mx;
    cin>> a>> b>> c>> d;
 
    mx = max({a, b, c, d});
 
    if (mx==a){
        cout<< a-b << " " << a-c << " " << a-d << endl;
    }
    else if(mx==b){
         cout<< b-a << " " << b-c << " " << b-d << endl;
    }
    else if(mx==c){
         cout<< c-b << " " << c-a << " " << c-d << endl;
    }
    else if(mx == d){
         cout<< d-b << " " << d-a << " " << d-c << endl;
    }
}
